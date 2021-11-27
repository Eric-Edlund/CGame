#ifndef NODE_H
#define NODE_H

#include <limits>

template <class T> struct Node{
public:
    T* prior = nullptr;
    double cost = std::numeric_limits<double>::infinity();
    const double infinity = std::numeric_limits<double>::infinity();
};


#endif // NODE_H
