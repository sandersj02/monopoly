#include <string>
#include <vector>

class player
{
public:
    player(std::string playerName, std::string pieceName, int playerId)
    {
        id = playerId;
        name = playerName;
        money = 2000;
        piece = pieceName;
        inJail = false;
        monopoly = {false, false, false, false, false, false, false, false};
        jailCards = 0;
    };
    std::string getName()       {return name;};
    int getId()                 {return id;};
    std::string getPiece()      {return piece;};
    int getSpace()              {return space;};
    bool isInJail()             {return inJail;};
    int getMoney()              {return money;};
    bool hasMonopoly(int color) {return monopoly[color];};
    int getJailCards()          {return jailCards;};

    void addMoney(int value)    {money += value;};
    void subMoney(int value)    {money -= value;};
    void setInJail(bool value)  {inJail = value;};
    void useJailCard()          {jailCards--;};
    void addJailCard()          {jailCards++;};
    void setSpace(int value)    {space = value;};



private:
    int id;
    std::string name;
    int money;
    int space;
    std::string piece;
    bool inJail;
    std::vector<bool> monopoly;
    int jailCards;
};
