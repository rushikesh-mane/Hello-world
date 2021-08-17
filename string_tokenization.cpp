#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<cstring>
using namespace std;
int i=0;
char* mystrtok(char* a,char delimiter)
{
	char*output=new char[strlen(a)+1];
	int k=0;
	if(a==NULL)
	{
		return NULL;
	}
	else
	{
		while(a[i]!=delimiter && a[i]!='\0')
		{
			output[k]=a[i];
			i++;
			k++;
		} 
		output[k]='\0';
		i++;
	//corner case 

		return &output[0];
	}

}
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
	//strtok function for tokenizing the string it 
	//will give all tokens seperated by delimiters 
	//on first call we will pass our input string and on subsequent calls we will pass the NULL
	//internally it store the input string in the buffer and return pointer to first token

	char s[100]="this is a rainy day";	
	
//this is implementation is using the inbuilt function 

	/*char*ptr=strtok(s," ");
	while(ptr!=NULL)
	{
		cout<<ptr<<"\n";
		ptr=strtok(NULL," ");
	}*/char *ptr=mystrtok(s,' ');
	cout<<ptr<<"\n";
	 ptr=mystrtok(s,' ');
	cout<<ptr<<"\n";
	ptr=mystrtok(s,' ');
	cout<<ptr<<"\n";
	ptr=mystrtok(s,' ');
	cout<<ptr<<"\n";
	ptr=mystrtok(s,' ');
	cout<<ptr<<"\n";
	ptr=mystrtok(s,' ');
	cout<<ptr<<"\n";
	
	/*while(ptr!=NULL){
	 cout<<ptr<<"\n";
	ptr=mystrtok(s,' ');
	}*/
return 0;

}