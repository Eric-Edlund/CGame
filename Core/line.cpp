#include "line.h"
#include <iterator>
#include <limits>
#include <iostream>
#include "geometry.h"
#include <string>

#define ELIPSON 0.0001
#define report std::cout

Line::Line(Point* ain, Point* bin)
{
 a = ain;
 b = bin;
}

bool Line::contains(Point* p){

    double total = distance(a, b);
    double l, l1;
    l = distance(a, p);
    l1 = distance(p, b);
    //std::cout << (l + l1) - total << std::endl;
    return std::abs(total - (l + l1)) <= ELIPSON;

}

Point Line::intersect(Line *l){
    double m, m1;
    m = this->slope();
    m1 = l->slope();

    if(m != infinity && m1 != infinity){//for defined slopes

        double b, b1;
        b = this->yIntercept();
        b1 = l->yIntercept();

        if(m == m1){//for equal slopes. An intersect exists for sure so we just have to pick an end point
           if(this->contains(l->a)) return *l->a;
           if(this->contains(l->b)) return *l->b;
           if(l->contains(this->a)) return *this->a;
           if(l->contains(this->b)) return *this->b;
        }

        double x = (b1 - b) / (m - m1);
        double y = (m*x)+b;
        return Point(x, y);
    }else{
        double x, y;
        //one or both slopes are undefined
        if(m == m1 == infinity){
            if(this->contains(l->a)) return *l->a;
            if(this->contains(l->b)) return *l->a;
            if(l->contains(this->a)) return *this->a;
            if(l->contains(this->b)) return *this->a;
        }

        if(m == infinity){
            double b1 = l->yIntercept();
            x = this->a->x;
            y = (m1*x) + b1;
        }
        if(m1 == infinity){
            double b = this->yIntercept();
            x = l->a->x;
            y = (m*x) + b;
        }

        return Point(x, y);
    }

    report << "Silently reporting wrong value! Line.intersect()" << std::endl;
    return Point(0, 0);
}

bool Line::intersects(Line* l){
    double m, m1;
    m = this->slope();
    m1 = l->slope();



    if(m != infinity && m1 != infinity){
        //If slopes are both defined

        double b, b1;
        b = this->yIntercept();
        b1 = l->yIntercept();


        if(m == m1){
            if(b != b1) return false;
            //We know they're equal lines. Do they intersect?
            if(this->contains(l->a) || this->contains(l->b) || l->contains(this->a) || l->contains(this->b)) return true;
            return false;
        }

        double x = (b1 - b) / (m - m1);


        Point p = this->intersect(l);
        if(this->contains(&p) && l->contains(&p)) return true;
        return false;
    }else{
        //if one or both slopes are undefined
        if(m == infinity && m1 == infinity) {//TODO: undefined slope lines aren't being checked for y touching
            if(this->a->x == l->a->x){
                //if x values are equal (we also know the lines are parrallel)
                if(this->contains(l->a)) return true;
                if(this->contains(l->b)) return true;
                if(l->contains(this->a)) return true;
                if(l->contains(this->b)) return true;
            }
             else {return false;}
        }


        if(m != infinity){
            Point *xMax, *xMin;
            if(a->x > this->b->x){
                xMax = this->a;
                xMin = this->b;
            }else{
                xMax = this->b;
                xMin = this->a;
            }
            if(l->a->x < xMin->x || l->a->x > xMax->x) return false; //check within x range

            double b = this->yIntercept();
            double y = (m*l->a->x)+b; //potential y intercept
            Point *yMax, *yMin;
            if(l->a->y > l->b->y){
                yMax = l->a;
                yMin = l->b;
            }else{
                yMax = l->b;
                yMin = l->a;
            }

            if(y >= yMin->y && y <= yMax->y) return true;
        } else

        if (m1 != infinity) { // (m = infinity)


            Point *xMax, *xMin;
            if(l->a->x > l->b->x){
                xMax = l->a;
                xMin = l->b;
            }else{
                xMax = l->b;
                xMin = l->a;
            }

            if(this->a->x < xMin->x || this->a->x > xMax->x) return false; //check within x range


            double b1 = l->yIntercept();
            double y = (m1*this->a->x)+b1; //potential y intercept, the y value of the m != infinity line
            Point *yMax, *yMin;
            if(this->a->y > this->b->y){
                yMax = this->a;
                yMin = this->b;
            }else{
                yMax = this->b;
                yMin = this->a;
            }
            //report << yMin->y << " - " << yMax->y << std::endl;
            //report << y << std::endl;
            if(y >= yMin->y && y <= yMax->y) return true;
        }

    }

    return false;
}
bool Line::intersectsC(Line* e){
    if(!intersects(e)) return false;
    if(intersect(e) == this->b) return false;
    return true;
}
double Line::slope(){
    if(a->x == b->x) return infinity;

    return (a->y - b->y)/(a->x - b->x);

}
double Line::yIntercept(){
    return a->y - (slope() * a->x);
}
bool Line::hasEndPoint(Point *p){
    return a == p || b == p;
}
Point* Line::getNot(Point* p){
    if(p == a) return b;
    return a;
}

std::string Line::toString(){
    std::string str = "";
    str += a->toString();
    str += " -> ";
    str += b->toString();
    return str;
}
