/*
Kattapa, as you all know was one of the greatest warriors of his time. The kingdom of Maahishmati had never lost a battle under him (as army-chief), and the reason for that was their really powerful army, also called as Mahasena.

Kattapa was known to be a very superstitious person. He believed that a soldier is "lucky" if the soldier is holding an even number of weapons, and "unlucky" otherwise. He considered the army as "READY FOR BATTLE" if the count of "lucky" soldiers is strictly greater than the count of "unlucky" soldiers, and "NOT READY" otherwise.

Given the number of weapons each soldier is holding, your task is to determine whether the army formed by all these soldiers is "READY FOR BATTLE" or "NOT READY".

Note: You can find the definition of an even number here.

Input
The first line of input consists of a single integer N denoting the number of soldiers. The second line of input consists of N space separated integers A1, A2, ..., AN, where Ai denotes the number of weapons that the ith soldier is holding.

Output
Generate one line output saying "READY FOR BATTLE", if the army satisfies the conditions that Kattapa requires or "NOT READY" otherwise (quotes for clarity).

Constraints
1 ≤ N ≤ 100
1 ≤ Ai ≤ 100
Example 1
Input:
1
1

Output:
NOT READY
Example 2
Input:
1
2

Output:
READY FOR BATTLE
Example 3
Input:
4
11 12 13 14

Output:
NOT READY
Example 4
Input:
3
2 3 4

Output:
READY FOR BATTLE
Example 5
Input:
5
1 2 3 4 5

Output:
NOT READY
*/

Code:

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,i;
	cin>>n;
	int a[n],b[n],c[n],k=0,l=0,s1=0,s2=0;
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]%2==0)
	       b[k++]=a[i];
	    else
	        c[l++]=a[i];
	    
	}
/*	for(i=0;i<k;i++)
	s1+=b[i];
		for(i=0;i<l;i++)
	s2+=c[i];*/
	
	if(k>l)
	cout<<"READY FOR BATTLE";
	else
	cout<<"NOT READY";
	
	return 0;
}
