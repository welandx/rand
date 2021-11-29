#include <cstring>
#include <fstream>
#include <iostream>
#include <iterator>
#include <random>
using namespace std;
int main() {
  // seed the RNG
  std::random_device
      rd; // uniformly-distributed integer random number generator
  std::mt19937 rng(rd()); // mt19937: Pseudo-random number generation

  double averageArrival = 2;
  double lamda = 1 / averageArrival;
  std::exponential_distribution<double> exp(lamda);

  double sumArrivalTimes = 0;
  double newArrivalTime;

  string file_name = "Poisson.txt";
  ofstream ofs(file_name, ofstream::out);

  for (int i = 0; i < 100000; ++i) {
    newArrivalTime = exp.operator()(
        rng); // generates the next random number in the distribution
    sumArrivalTimes = sumArrivalTimes + newArrivalTime;
    ofs << newArrivalTime << endl;
    std::cout << "newArrivalTime:  " << newArrivalTime
              << "    ,sumArrivalTimes:  " << sumArrivalTimes << std::endl;
  }
}
