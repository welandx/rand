#include <fstream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define NSUM 25
using namespace std;
double gaussrand() {
  double x = 0;
  int i;
  for (i = 0; i < NSUM; i++) {
    x += (double)rand() / RAND_MAX;
  }
  x -= NSUM / 2.0;
  x /= sqrt(NSUM / 12.0);
  return x;
}

int main() {
  string file_name = "central_limit.txt";
  ofstream ofs(file_name, ofstream::out);
  for (int i = 0; i < 1000; i++)
    ofs << gaussrand() << endl;
  return 0;
}
