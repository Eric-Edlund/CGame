#ifndef AGENT_H
#define AGENT_H
#include <vector>
#include "../tile.h"

class TileAgent
{
public:
    virtual bool canMakeStep(Tile* node, Tile* node1);
    virtual double stepCost(Tile* node, Tile* node1);
    virtual bool canOccupy(Tile* node);
    virtual bool isNearTarget(Tile* position, Tile* target);//is this a valid solution? (Not self reflection)

};

/*class FillAgent : public TileAgent
{
public:

    bool canMakeStep(Tile* node, Tile* node1){
        return true;
    }
    double stepCost(Tile* node, Tile* node1){
        return 0;
    }
    bool canOccupy(Tile* node){
        return true;
    }
    bool isNearTarget(Tile* position,  Tile* target){
        return position == target;
    }
};
*/
#endif // AGENT_H
