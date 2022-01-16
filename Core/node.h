#ifndef NODE_H
#define NODE_H

#include <limits>

struct Node{
public:
    Node* prior = nullptr;
    double cost = std::numeric_limits<double>::infinity();
    const double infinity = std::numeric_limits<double>::infinity();

};


#endif // NODE_H
