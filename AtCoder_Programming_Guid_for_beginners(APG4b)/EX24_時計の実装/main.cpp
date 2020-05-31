#include <iostream>
#include <string>

using namespace std;

// 以下に、24時間表記の時計構造体 Clock を定義する
struct Clock
{
    int hour;
    int minute;
    int second;

    void set(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    string to_str()
    {
        string s = "";
        s += (hour < 10) ? '0' + to_string(hour) : to_string(hour);
        s += ":";
        s += (minute < 10) ? '0' + to_string(minute) : to_string(minute);
        s += ":";
        s += (second < 10) ? '0' + to_string(second) : to_string(second);

        return s;
    }

    void shift(int diff_second)
    {
        minute += (second + diff_second) / 60;
        second = (second + diff_second) % 60;

        if (second < 0)
        {
            minute--;
            second += 60;
        }

        hour += minute / 60;
        minute %= 60;

        if (minute < 0)
        {
            hour--;
            minute += 60;
        }

        if (hour >= 24) 
        {
            hour %= 24;
        }
        else if (hour < 0)
        {
            hour += 24;
        }
    }
};

int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;
 
  // Clock構造体のオブジェクトを宣言
  Clock clock;
 
  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);
 
  // 時刻を出力
  cout << clock.to_str() << endl;
 
  // 時計を進める(戻す)
  clock.shift(diff_second);
 
  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}
