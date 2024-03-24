#include<iostream>
using namespace std;
int main(){
  string s1;
  cin>>s1;
  string rev_s1;
  for(int i=s1.size()-1; i>=0; i--){
  rev_s1.push_back(s1[i]);
  }
if(s1==rev_s1)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
