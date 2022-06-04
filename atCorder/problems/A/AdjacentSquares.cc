#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int H, W,R,C;
    cin >> H >> W >> R >> C;

    int aquareCount = 0;

    for (size_t i = 0; i < H; i++)
    {
        for (size_t j = 0; j < W; j++)
        {
            const int match = abs(R - i) + abs(C - j);
            if (match == 1)
            {
                aquareCount++;
            }
        }
        
    }
    

    cout << aquareCount <<endl;
    return 0;
    
}
