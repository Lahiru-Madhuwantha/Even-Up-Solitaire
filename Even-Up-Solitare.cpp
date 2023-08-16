#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main(){

  int n;
  cin >> n; // Array size

  vector<int> array; // Array ek denne vector ekk vidiyt.Ethakota mulinm array eke size ek denda one na
  vector<int> remaining; // Ithuruwa dana array ek

  for(int i = 0; i < n; i++){
    int card ;
    cin >> card;       
    array.push_back(card); // Array ek ta element denwa
  }
  for(int card:array){
    if(!remaining.empty() && ((remaining.back()+ card)%2== 0)){
      remaining.pop_back();
    }
    else{
      remaining.push_back(card);
    }
  }

  cout << remaining.size() << endl;
  return 0;

}