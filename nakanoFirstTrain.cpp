#include <bits/stdc++.h>
using namespace std;
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
    const int atEight[] = {1, 3, 6};


    bool isNextTime = false;  
    int arrivedStationTime = minutes + 10;
    if(arrivedStationTime > 60) {
      arrivedStationTime = arrivedStationTime - 60;
      isNextTime = true;
      }

    if(hour == 6){
        const int lenghtAtSix = sizeof(atSix)/sizeof(atSix[0]);
        int time;

      if(!isNextTime){
        for (size_t i = 0; i < lenghtAtSix; i++) {
          int timeDelta = atSix[i] - arrivedStationTime;
          if(timeDelta>0) {
              time = atSix[i];
              cout << 6 << ":"<< time << endl;
              return 0;
          };
        };
      }

    }

    if(hour == 7 || (hour== 6 && isNextTime)){
        const int lenghtAtSevnen = sizeof(atSeven)/sizeof(atSeven[0]);
        int time;
        for (size_t i = 0; i < lenghtAtSevnen; i++) {
          int timeDelta = atSeven[i] - arrivedStationTime;
          if(timeDelta>0) { 
            time = atSeven[i];
            cout << 7 << ":"<< time << endl;
            return 0;
            };
        };
    };

    if(hour == 8 || (hour == 7 && isNextTime)){
      const int lenghtAtEight = sizeof(atEight)/sizeof(atEight[0]);
      int time;
      for (size_t i = 0; i < lenghtAtEight; i++) {
        int timeDelta = atEight[i] - arrivedStationTime;
        if(timeDelta>0) { 
          time = atEight[i];
          cout << 8 << ":"<< time << endl;
          return 0;
        };
      };
      cout <<"遅刻しそうです!"<< endl;
    };
    return 0;
  };

int main() {

    int hour;
    int minutes;

    cout << "何時？" << endl;
    cin >> hour;
    cout << "何分？" << endl;
    cin >> minutes;

    getFirstExpress(hour, minutes);
    return 0;
}
