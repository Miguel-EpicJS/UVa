#include <cstdio>

#define currentCard cardValues[cPlayer][spotIn[cPlayer]]

char cardValues[2][52], stack[52], temp;
int numCards[2], spotIn[2], stackNum, stackSpot, cPlayer;

int failedToPlay;

bool HandleCheck(int tNum)
{
}