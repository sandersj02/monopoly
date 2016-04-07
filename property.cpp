#include <string>
#include <vector>

class property
{
public:
    property(std::string propertyName, int color, int propertyPrice, int propHouseCost, std::vector<int> propertyRent, int propertyMortgageValue)
    {
        name = propertyName;
        colorGroup = color;
        price = propertyPrice;
        houseCost = propHouseCost;
        houses = 0;
        rent = propertyRent;
        owner = 0;
        mortgaged = false;
        mortgageValue = propertyMortgageValue;
    };

    std::string getName()           {return name;};
    int getColor()                  {return colorGroup;};
    int getPrice()                  {return price;};
    int getHouseCost()              {return houseCost;};
    int getHouses()                 {return houses;};
    int getRent()                   {return rent.at(houses);};
    int getOwner()                  {return owner;};
    void setOwner(int newOwner)     {owner = newOwner;};
    bool isMortgaged()              {return mortgaged;};
    void setMortgaged(bool value)   {mortgaged = value;};
    int getMortgageValue()          {return mortgageValue;};



private:
    std::string name;
    int colorGroup;
    int price;
    int houseCost;
    int houses;
    std::vector<int> rent;
    int owner;
    bool mortgaged;
    int mortgageValue;
};
