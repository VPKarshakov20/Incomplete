#include "gameinitializer.h"
#include <cstdlib>
#include <ctime>
GameInitializer::GameInitializer()
{
}

bool* GameInitializer::GenerateStartingCards(int size) {
    srand(time(NULL));
    bool* arr = new bool[size];
    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 2;
    }
    return arr;
}

 void GameInitializer::GenerateCards(int size, QLabel* arr[]) {
    bool* start = GenerateStartingCards(size);

    QPixmap pixmap01("../assets/01 card.png");
    QPixmap pixmap01Flip("../assets/01 card flipped.png");

    for(int i = 0; i < size; i++) {
        if(start[i]) {
            arr[i]->setPixmap(pixmap01);
            arr[i]->setMask(pixmap01.mask());
        } else {
            arr[i]->setPixmap(pixmap01Flip);
            arr[i]->setMask(pixmap01Flip.mask());
        }

        arr[i]->show();

    }
    delete[] start;
}
