/*
If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.

Input
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the sum of first and last digits of N in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
3 
1234
124894
242323

Output
5
5
5
*/

Code:


#include<iostream>
using namespace std;
int main()
{
    int tc,num,k,s=0,p,l,t,a,b;
    cin>>tc;
    while(tc--)
    {
        cin>>num;
        b=a=num;
        
        while(num!=0)
        {
            k=num%10;
            s=(s*10)+k;
            num=num/10;
            
        }
        while(b!=0)
        {
            l=b%10;
            break;
        }
        //cout<<s<<endl;
        while(a!=0)
        {
            p=s%10;
            break;
        }
        s=0;
       cout<<p+l<<endl;
      /* printf("\n");
       cout<<l<<endl;
       printf("\n");*/
       
        
    }
    
}
