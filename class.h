#include <iostream>
#include <string>
#include <stack>

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

class Deck{
    private:
        string<Card> orderedDeck[52];
    public:
        stack<Card> shuffledDeck[52];
        
        Deck();

        Card drawCard();
};

Card::Card(int v, string s){
    value = v;
    suit.assign(s);
}

int Card::getSuit(){
    return suit;
}

string Card::getValue(){
    return value;
}

Deck::Deck(){
    
}

Card Deck::drawCard(){
    return shuffledDeck.pop();
}
