#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        for(int i = 0;i<=string2.size();i++)
        {
            string1.erase(remove(string1.begin(), string1.end(), string2[i]), string1.end());
        }
        return string1;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}