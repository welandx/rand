// C++ implementation of the
// above approach
#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;
// Function to generate random numbers
void linearCongruentialMethod(int Xo, int m, int a, int c,
                              vector<int> &randomNums, int noOfRandomNums) {
  // Initialize the seed state
  randomNums[0] = Xo;
  // Traverse to generate required
  // numbers of random numbers
  for (int i = 1; i < noOfRandomNums; i++) {
    // Follow the linear congruential method
    randomNums[i] = ((randomNums[i - 1] * a) + c) % m;
  }
}
// Driver Code
int main() {
  int Xo = 5; // Seed value
  int m =2147483647 ;  // Modulus parameter
  int a =16807;  // Multiplier term
  int c =0;  // Increment term
  double randout;
  string file_name="linear_congruential.txt";
  ofstream ofs (file_name,ofstream::out);
  // Number of Random numbers
  // to be generated
  int noOfRandomNums = 10000;
  // To store random numbers
  vector<int> randomNums(noOfRandomNums);
  // Function Call
  linearCongruentialMethod(Xo, m, a, c, randomNums, noOfRandomNums);
  // Print the generated random numbers
  for (int i = 0; i < noOfRandomNums-1; i++) {
    randout=abs(randomNums[i]%1000*0.001);
    ofs << randout << " ";
  }
  randout=abs(randomNums[noOfRandomNums-1]%1000*0.001);
  ofs<<randout<<endl;
  ofs.close();
  return 0;
}
