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
        Card orderedDeck[52];
    public:
        stack<Card> shuffledDeck;
        
        Deck();

        Card drawCard();
};

Card::Card(int v, string s){
    value = v;
    suit.assign(s);
}

string Card::getSuit(){
    return suit;
}

int Card::getValue(){
    return value;
}

// Deck::Deck(){
    
// }

// Card Deck::drawCard(){
//     return shuffledDeck.pop();
// }
