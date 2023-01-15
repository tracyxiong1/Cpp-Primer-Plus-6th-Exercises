/**
 * 编写一个 C++ 程序，它使用 3 个用户定义的函数（包括 main（）），并生成下面的输出：

 * Three blind mice
 * Three blind mice
 * See how they run
 * See how they run
 * 其中一个函数要调用两次，该函数生成前两行；另一个函数也被调用两次。并生成其余的输出。
 * 
 */

#include <iostream>
using namespace std;

void mice();
void run();

int main() {
  mice();
  mice();
  run();
  run();
  return 0;
}

void mice() {
  cout << "Three blind mice" << endl;
}

void run() {
  cout << "See how they run" << endl;
}
