/**
 * 题目：
 * 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
 * Enter your age: 29
 * Your age in months is 348.
 */

#include "iostream"
#include "cmath"
using namespace std;

int year2Month(int);

int main() {
  int age_year;
  cout << "Enter your age: ";
  cin >> age_year;
  int age_month = year2Month(age_year);
  cout << "Your age is " << age_month << "." << endl;
  return 0;
}

int year2Month(int year) {
  return year * 12;
}