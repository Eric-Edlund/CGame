#ifndef AGENT_H
#define AGENT_H
#include <vector>
#include "node.h"

class Agent
{
public:
    virtual bool canMakeStep(Node* node, Node* node1);
    virtual double stepCost(Node* node, Node* node1);
    virtual bool canOccupy(Node* node);
    virtual bool isNearTarget(Node* position, Node* target);//is this a valid solution? (Not self reflection)

};

class FillAgent : public Agent
{
public:

    bool canMakeStep(Node* node, Node* node1){
        return true;
    }
    double stepCost(Node* node, Node* node1){
        return 0;
    }
    bool canOccupy(Node* node){
        return true;
    }
    bool isNearTarget(Node* position,  Node* target){
        return position == target;
    }
};

#endif // AGENT_H
