#include<bits/stdc++.h>
using namespace std;

int ispalindrome(int n)
{
	int rem,revint=0,k=n;
	while(n!=0)
	 {
	 	  rem = n%10;
	 	  revint = revint * 10 + rem;
	 	  n=n/10;
	 }
	
	  if(revint == k)
	     return 1;
	     else
	       return 0;
	  
}

int main()
{
	int n,k,palin;
	cin>>n;
	k = n;
	
	for(int i = n, j = k;; i++,j--)
	{
		if( ispalindrome(i) )
		{
			palin = i;
			break;
		}
		
		if( ispalindrome(j) )
		{
			palin = j;
			break;
		}
	}
	
	cout<<"Nearest palindrome number is:"<<palin;
}
