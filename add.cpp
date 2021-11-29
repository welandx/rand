#include <fstream>
#include <iostream>
#include <random>
using namespace std;
int main() {
  random_device seed;
  mt19937 gen(seed());
  uniform_real_distribution<> dis1(-1, 1/4);
  uniform_real_distribution<> dis2(0, 1);
  uniform_real_distribution<> dis3(1, 1/2);
  string file_name = "add.txt";
  ofstream ofs(file_name, ofstream::out);
for (int n = 0; n < 10000; ++n) {
    double c = gen();
    double fx = 1/2 * 4 * dis1(c) + 1/3 * 1 * dis2(c) + 1/6*2* dis3(c);
    ofs << fx <<endl;
  }
}