/*

Given the list of numbers, you are to sort them in non decreasing order.
Input
t – the number of numbers in list, then t lines follow [t <= 10^6].
Each line contains one integer: N [0 <= N <= 10^6]

Output
Output given numbers in non decreasing order.
Example
Input:

5
5
3
6
7
1
Output:

1
3
5
6
7
*/

Code:

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,i,j,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   /* for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }*/
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
