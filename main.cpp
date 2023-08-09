#include <fstream>
#include <iostream>
#include <string>
#include <filesystem>
using namespace std;

int main() {
  while (true) {
    cout << "Please enter the desired file size in bytes." << endl;
    int size;
    cin >> size;
    if (size == 0) break;
    ofstream file;
    int fileName = 0;
    bool used = true;
    while (used) {
      ifstream f;
      f.open("file" + to_string(fileName));
      if (f.is_open()) {
        fileName++;
      }
      else {
        used = false;
      }
    }
    ofstream outFile("file" + to_string(fileName));
    for (int i = 0; i < size; i++) {
      outFile << "0";
    }
    outFile.close();
  }
}