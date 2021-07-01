#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str);
int main() {
  int t;
  cin>>t;
  while(t--)
  {
  string s;
  cin >> s;
  cout << reverseWord(s) << endl;
  }
  return 0; 
}

string reverseWord(string str){   
  //Your code here
  string str_rev;
  for(int i=str.size()-1;i>=0;i--){
      str_rev.push_back(str[i]);
  }
  return str_rev;
}