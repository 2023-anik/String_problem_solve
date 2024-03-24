#include<iostream>
using namespace std;
int main(){
  string s;
  cin>>s;
  int length=s.size();
  for(int i=0; i<=length/2; i++){
  if(s[i]!=s[length-1]){
  cout<<"NO"<<endl;
  return 0;
  }length--;
  }
  cout<<"YES"<<endl;
  return 0;
}
// Input: aaabbaaa
// Output: YES
