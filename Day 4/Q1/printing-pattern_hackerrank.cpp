
/*
Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   
Input Format

The input will contain a single integer .

Constraints


Sample Input 0

2
Sample Output 0

2 2 2
2 1 2
2 2 2
Sample Input 1

5
Sample Output 1

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
Sample Input 2

7
Sample Output 2

7 7 7 7 7 7 7 7 7 7 7 7 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 2 1 2 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 7 7 7 7 7 7 7 7 7 7 7 7 
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,minVerti,minHori,min,len;
	
		cin>>n;
		len = (2*n)-1;
		for(i=1;i<=len;i++)
		{
			for(j=1;j<=len;j++)
			{
				minVerti = i<=len-i?i-1:len-i;
				minHori  = j<=len-j?j-1:len-j;
				min = minVerti<=minHori?minVerti:minHori;
				cout<<n-min;
			}

			cout<<endl;
		}
	
}

//in output we are printing n-minimum distance of element stored at that index from top down right and left
//minVerti finds min distance from top and bottom(i.e along vertical)
//minHori finds min  distance from right and left(i.e along Horizontal)


