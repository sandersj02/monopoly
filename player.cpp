#include <string>
#include <vector>
#include <QtGui>
class player
{
public:
    player(std::string playerName, QString pieceName, int playerId)
    {
        id = playerId;
        name = playerName;
        money = 2000;
        piece = pieceName;
        inJail = false;
        monopoly = {false, false, false, false, false, false, false, false};
        jailCards = 0;
        elimination = false;
        location = 0;
        rolled = false;
    };
    std::string getName()       {return name;}
    int getId()                 {return id;}
    QString getPiece()      {return piece;}
    int getSpace()              {return space;}
    bool isInJail()             {return inJail;}
    int getMoney()              {return money;}
    bool hasMonopoly(int color) {return monopoly[color];}
    int getJailCards()          {return jailCards;}
    int getLocation()           {return location;}
    bool getRolled()            {return rolled;}


    void addMoney(int value)    {money += value;}
    void subMoney(int value)    {money -= value;}
    void setInJail(bool value)  {inJail = value;}
    void useJailCard()          {jailCards--;}
    void addJailCard()          {jailCards++;}
    void setSpace(int value)    {space = value;}
    void setElim()              {elimination = true;}
    void setLocation(int value) {location = value;}
    void hasRolled(bool value)  {rolled = value;}

private:
    int id;
    std::string name;
    int money;
    int space;
    QString piece;
    bool inJail;
    std::vector<bool> monopoly;
    int jailCards;
    bool elimination;
    int location;
    bool rolled;
};

