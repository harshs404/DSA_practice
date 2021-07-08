#include<bits/stdc++.h>
using namespace std;
int main()
{
  int q;
  cin >> q;
  while(q--)
  {
    string s, t;
    cin >> s >> t;
    int ans = -1;
    bool flag = false;
    for(int i = 0; i < (int)s.size(); i ++)
    {
      int diff = (t[i] - s[i] + 26) % 26;
      if(ans == -1)
        ans = diff;
      if(diff == ans)
        continue;
      else
      {
        flag = true;
        break;
      }
    }
    if(flag)
      printf("-1\n");
    else
      printf("%d\n", ans);
  }
  return 0;
}