#include <iostream>
#include "line.h"
#include "point.h"

int main(){

    Line l = Line(new Point(0,0), new Point(1,1));
    std::cout << l.toString() << std::endl;
    return 0;
}
