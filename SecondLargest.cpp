/*
Three numbers A, B and C are the inputs. Write a program to find second largest among them.

Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three integers A, B and C.

Output
For each test case, display the second largest among A, B and C, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B,C ≤ 1000000
Example
Input
3 
120 11 400
10213 312 10
10 3 450

Output

120
312
10
*/


Code:
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    while(n--)
    {int a[3];
       for(i=0;i<3;i++) 
       {
           cin>>a[i];
       }
       sort(a,a+3);
       //for()
       cout<<a[1]<<endl;
       
    }
    
}
