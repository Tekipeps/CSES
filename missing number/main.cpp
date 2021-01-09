#include <iostream>
using namespace std;

int main(){
  long long n; cin >> n;
  long long sum = 0;
  for(long long i = 0; i < n-1; i++){
    long long x;
    cin >> x;
    sum += x;
  }
  cout << (- sum + (n * (n+1))/2) << endl;

  return 0;
}
