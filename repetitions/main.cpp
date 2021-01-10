#include <iostream>
#include <string>
using namespace std;

int main(){
  string n; cin >> n;
  int b = 1, l = 1;
  if(n.length() == 1){
    cout << 1 << endl;
  } else {
    for(int i = 0; i < n.length(); i++){
      if(n[i] == n[i-1]){
        b += 1;
        if(b > l) l = b;
      } else {
        b = 1;
      }
    }
    cout << l << endl;
  }
}
