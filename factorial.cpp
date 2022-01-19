/*
Write a program to find the factorial value of any number entered by the user.

Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains an integer N.

Output
For each test case, display the factorial of the given number N in a new line.

Constraints
1 ≤ T ≤ 1000
0 ≤ N ≤ 20
Example
Input
3 
3 
4
5

Output

6
24
120
*/

Code:
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,fact;
    cin>>n;
   
    while(n--)
    {
        fact=1;
        cin>>k;
        for(int i=1;i<=k;i++)
        {
        fact=fact*i;
        }
        cout<<fact<<endl;
    }
    
    
}
