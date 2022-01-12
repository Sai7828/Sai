/*
You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, calculate the sum of digits of N, and display it in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
3 
12345
31203
2123
Output
15
9
8
*/

code:


#include<iostream>
using namespace std;
int main()
{
    int tc,num,k,s=0;
    cin>>tc;
    while(tc>0)
    {
        cin>>num;
        while(num!=0)
        {
            k=num%10;
            s=s+k;
            num=num/10;
            
            
        }
        cout<<s<<endl;;
        tc--;
        s=0;
    }
}
