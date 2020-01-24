#include<iostream>
using namespace std;

int permutation(int n, int r)
{
	if(r>1)
	{
		return n*permutation(n-1,r-1);
	}
	else if(r==1)
	{
		return n;	
	}
	else if(r==0)
	{
		return 1;
	}
	
}

int combination(int n, int r)
{
	if(r==1)
	{
		return n;
	}
	else
	{
		return n*combination(n-1,r-1)/r;
	}
}

int main()
{
	int n,r;
	cout<<"Enter the values of n ::    "<<endl;
	cin>>n;
	cout<<"Enter the value of r ::     "<<endl;
	cin>>r;
	try
	{
		if(n<=0||r<0||n<r)
		throw"INVALID";
	}
	catch ( const char *str)
    {
	   cout<<str;
    }
    int choice;
    cout<<"What you wanna do?"<<endl;
    cout<<"Press 1 for permutation and 2 for combination"<<endl;
    cin>>choice;
    switch(choice)
    {
    	case 1:
    		{
			   int P=permutation(n,r);
    		   cout<<"Permutation result::  "<<P;
    		   break;
    	    }
    	case 2:
    		{
    			int C=combination(n,r);
    		    cout<<"Combination result:: "<<C;
    		    break;
			}
    	default:
    		{ 
			    "Invalid Choice Entered";
    		     break;		
	        }
	}
    return 0;
}
