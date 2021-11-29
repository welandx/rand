#include <fstream>
#include <iostream>
#include <random>
using namespace std;
int main() {
  random_device seed;
  mt19937 gen(seed());
  uniform_real_distribution<> dis(0, 1);

  string file_name = "mersenne_twister.txt";
  ofstream ofs(file_name, ofstream::out);

  for (int n = 0; n < 10000; ++n) {
    ofs << dis(gen) << endl;
  }
  ofs.close();
  return 0;
}
