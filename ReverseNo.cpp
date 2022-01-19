/*

Given an Integer N, write a program to reverse it.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the reverse of the given number N, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Sample Input 1 
4
12345
31203
2123
2300
Sample Output 1 
54321
30213
3212
32
*/


Code:
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k,count,rev=0,s;
    
    while(n--)
    {
        rev=0;
       count=0;
        cin>>k;
        while(k>0)
        {
            s=k%10;
            rev=(rev*10)+s;
            k=k/10;
            
        }
        
    cout<<rev<<endl;
    }
}
