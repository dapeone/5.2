#include <iostream>
#include <string>
using namespace std;

int main() {
  int counter = 0;
  string str;
  cout << "Введите текст" << endl;
  getline(cin, str);
  for (int i = 0; i < 5000; ++i) {
    if (str[i] == ' ') {
      counter += 1;
    }
  }
  cout << "Количество слов в строке: " << counter + 1;
}