/**
 * 题目：
 * 编写一个 C++ 程序，它要求用户输入一个以 long 为单位的距离，然后将它转换为码（一 long 等于 220 码）。
 */

#include <iostream>
using namespace std;

int long2yard(int l);

int main() {
  int distance_long;
  cout << "请输入一个以 long 为单位的距离：" << endl;
  cin >> distance_long;
  int distance_yd = long2yard(distance_long);
  cout << "对应 " << distance_yd << " 码" << endl;
  return 0;
}

int long2yard(int l) {
  return 220 * l;
}