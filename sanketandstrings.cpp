#include<iostream>
#include<string>
using namespace std;

// C++ program to find maximum length equal 
// character string with k changes 

// function to find the maximum length of 
// substring having character ch 
int findLen(string& A, int n, int k, char ch) 
{ 
	int maxlen = 1; 
	int cnt = 0; 
	int l = 0, r = 0; 
	
	// traverse the whole string 
	while (r < n) { 
	
		/* if character is not same as ch 
		increase count */
		if (A[r] != ch) 
			++cnt; 

		/* While count > k traverse the string 
		again until count becomes less than k 
		and decrease the count when characters 
		are not same */
		while (cnt > k) { 
			if (A[l] != ch) 
				--cnt; 
			++l; 
		} 

		/* length of substring will be rightIndex - 
		leftIndex + 1. Compare this with the maximum 
		length and return maximum length */
		maxlen = max(maxlen, r - l + 1); 
		++r; 
	} 
	return maxlen; 
} 

// function which returns maximum length of substring 
int answer(string& A, int n, int k) 
{ 
	int maxlen = 1; 
	 
		maxlen = max(maxlen, findLen(A, n, k, 'b')); 
		maxlen = max(maxlen, findLen(A, n, k, 'a')); 
	
	return maxlen; 
} 


int main() {
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	string str;
	int k;
	cin>>k;
	cin>>str;
	int n=str.length();
	cout<<answer(str,n,k);
	return 0;
}