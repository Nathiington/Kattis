#include <iostream>

using namespace std;

int main() {
    int scores[5][4];
//inputs the scores
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> scores[i][j];
        }
    }
//adds the total score
    for(int i = 0; i < 5; i++) {
        for(int j = 1; j < 4; j++) {
            scores[i][0] += scores[i][j];
        }
    }

//x is the contestant number, max is the highest total
    int max = -1;
    int x = -1;
    for(int i = 0; i < 5; i++) {
        if(scores[i][0] > max) {
            max = scores[i][0];
            x = i;
        }
    }
    cout << x+1 << " " << max << endl;
}
