#include <iostream>
#include <math.h>

// 駅の時刻表から何時の列車が始発かを計算する関数を作ろう
// 配列で時刻表を渡して、
// 家出る時間を入力する。そこから駅までの時間を計算し、最も近い始発を算出するというものを作ろう
// 現在時刻入力
// 何時？ 8時
// 何分? 2分 
// 信号込みで 7 ふんかかると仮定して
// [始発時刻表時間 - その時間] がゼロ以上 かつ 最小　を算出するプログラムをかく
// 6 ~ 8 時の時刻表の配列
// 始業時刻に遅れないように...


int getFirstExpress(int hour, int minutes){
    const int atSix[] = {10, 22, 31, 41, 51, 54};
    const int atSeven[] = {1, 6, 12, 17, 20, 25, 31, 34, 36, 41, 47, 52, 56};

    const int arrivedStationTime = minutes + 10;
    
    if(hour == 6){
        const int lenghtAtSix = sizeof(atSix)/sizeof(atSix[0]);
        int time;
        for (size_t i = 0; i < lenghtAtSix; i++) {
          int timeDelta = atSix[i] - arrivedStationTime;
          if(timeDelta>0) {
              time = atSix[i];
          }
        };
        std::cout << 6 << ":"<< time << std::endl;
    }

    if(hour == 7){
        const int lenghtAtSevnen = sizeof(atSeven)/sizeof(atSeven[0]);
        int time;
        for (size_t i = 0; i < lenghtAtSevnen; i++) {
          int timeDelta = atSeven[i] - arrivedStationTime;
          if(timeDelta>0) { 
            time = atSeven[i];}
        };
      std::cout << 7 << ":"<< time << std::endl;
    }
}




int main() {

    int hour;
    int minutes;

    std::cout << "何時？" << std::endl;
    std::cin >> hour;
    std::cout << "何分？" << std::endl;
    std::cin >> minutes;

    getFirstExpress(hour, minutes);
    return 0;
}
