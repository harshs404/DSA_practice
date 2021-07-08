#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  set<string>countVar;
  cin >> n;
  while(n--)
  {
    string s,sNew="";
    cin>>s;
    for(int i = 0 ; i<s.size();i++)
    {
      if(s[i]=='=')
        {
        break;
        }
        sNew=sNew+s[i];
     
    }
    if(sNew==" ")
      continue;
    countVar.insert(sNew);
  }
   cout<<countVar.size()<<endl;
  return 0;
}