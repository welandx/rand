#include <fstream>
#include <iostream>
#include <random>
using namespace std;

int main() {
  double b = 1; // x_min
  double a = 1; // k
  random_device seed;
  mt19937 gen(seed());
  uniform_real_distribution<> dis(0, 1);
  string file_name = "mersenne_twister.txt";
  ofstream ofs(file_name, ofstream::out);
  for (int n = 0; n < 100000; ++n) {
    double v = dis(gen);
    double r = (b * (1.0 / pow(v, a)));
    ofs << r << endl;
  }
}