#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string interpret(string command) {
        string v;
        for(int i=0;i<=command.size()-1;i++)
        {
            if(command[i]=='('&& command[i+1]==')')
            {
                v.push_back('o');
            }
           else if(command[i] == '(' && command[i+1] != ')')
                continue;
           else if(command[i] == ')')
                continue;
           else 
               v.push_back(command[i]);       
        }
        return v;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string command;
        cin >> command;
        Solution ob;
        cout << ob.interpret(command) << endl;
    }
    return 0;
}