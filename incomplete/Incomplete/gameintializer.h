#ifndef GAMEINTIALIZER_H
#define GAMEINTIALIZER_H
#include <QLabel>

class GameInitializer
{
private:
    static bool* GenerateStartingCards(int);

public:
    GameInitializer();
    static void GenerateCards(int, QLabel*[]);
};

#endif // GAMEINTIALIZER_H
