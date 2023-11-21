#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

struct Card
{
    int suit, rank;

    Card();
    Card(int s, int r);

    static bool equals(const Card& c1, const Card& c2);
    static std::vector<Card> build_deck();

    std::string to_string() const;
};

struct Deck {
    vector<Card> cards;

    Deck();
    void swap_cards(int index1, int index2);
    int find_lowest(int l, int h);
};