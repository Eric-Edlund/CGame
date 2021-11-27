#ifndef AGENT_H
#define AGENT_H
#include <vector>

template <class T> class Agent
{
public:
    Agent();
    virtual bool canMakeStep(T* node, T* node1);
    virtual double stepCost(T* node, T* node1);
    virtual bool canOccupy(T* node);
    virtual bool isNearTarget(T* position);//is this a valid solution? (Not self reflection)

};

#endif // AGENT_H
