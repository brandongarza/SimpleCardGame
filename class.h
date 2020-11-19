#include <iostream>
#include <string>

using namespace std;

class Card{
    private:
        int value;
        string suit;

    public:
        Card(int v, string s);
        int getValue();
        string getSuit();
};

Card::Card(int v, string s){
    value = v;
    suit.assign(s);
}

int Card::getSuit(){
    return value;
}

string Card::getValue(){
    return suit;
}

