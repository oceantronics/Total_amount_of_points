#include <stdio.h>
#include <stdlib.h>

int points(const char* const games[10]);

int main() {

    const char* const footballGames[10] = {"1:0","2:0","3:0","4:0","2:1","3:1","4:1","3:2","4:2","4:3"};
    int gamePoints = points(footballGames);
    printf("Game points: %d \n", gamePoints);
    return 0;
}

int points(const char* const games[10]) {
    int result = 0;
    int x, y;
    for (int i =0; i < 10; i++){
        x = atoi(games[i]);
        y = atoi(games[i] + 2);

        if (x > y) {
           result += 3;
        } else if (x == y) {
            result++;
        }

    }

    return result;
}