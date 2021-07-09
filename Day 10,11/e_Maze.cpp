/*
 * Ankit is in maze. The command center sent him a string which decodes to come out from the maze. He is initially at (0, 0). String contains L, R, U, D denoting left, right, up and down. In each command he will traverse 1 unit distance in the respective direction.
 * For example if he is at (2, 0) and the command is L he will go to (1, 0).
 *
 * SAMPLE INPUT : LLRDDR
 * SAMPLE OUTPUT : 0 -2
 */

 
#include<bits/stdc++.h>

using namespace std;

int main() {
    int x=0,y=0;
    string directionString;
    cin>>directionString;
    for(int i=0;i<directionString.size();i++)
    {
        if(directionString[i]=='L')
            x=x-1;
        else if(directionString[i]=='R')
            x=x+1;
        else if(directionString[i]=='D')
            y=y-1;
        else if(directionString[i]=='U')
            y=y+1;
    }
    cout<<x<<" "<<y;
    return 0;
}