#include <cmath>
#include <iostream>
#include <random>
#include <vector>
using namespace std;
//生成泊松随机数，其中lambda是到达率
int nextPoisson(default_random_engine r) {      
    int lambda=2;
    double L = exp(-lambda);
    double p = 1.0;
    int k = 0;
    do {
        k++;
        p *= r();
    } while (p > L);
    return k - 1;
}
//生成事件的到达时间
int main(){
    vector<int> arrival_time;
    default_random_engine r;
    arrival_time[0]=nextPoisson(r);
    for(int i=1;i<arrival_time.size();i++){
        arrival_time[i]=arrival_time[i-1]+nextPoisson(r);
    }
    for(int i=0;i<arrival_time.size();i++)
    cout<<arrival_time[i]<<endl;
}
