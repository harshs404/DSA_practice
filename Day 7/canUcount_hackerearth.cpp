// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int tc,vowel,combinations;
	cin>>tc;
	while(tc--)
	{   
		string s;
		cin>>s;
        int a=0,e=0,I=0,o=0,u=0;
        combinations=1,vowel;
		for(int i=0;i<s.length();i++)
        {
			if(s[i]=='a')
            a=1;
            else if(s[i]=='e')
            e=1;
            else if(s[i]=='i')
            I=1;
            else if(s[i]=='o')
            o=1;
            else if(s[i]=='u')
            u=1;
			else if(s[i]=='_')
			{	
				vowel=a+e+I+o+u;
				combinations=combinations*vowel;
			}
        }
		cout<<combinations<<endl;
	}
}