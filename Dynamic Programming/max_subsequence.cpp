#include<bits/stdc++.h>
using namespace std;
int my_max(int a, int b){
	return a>b?a:b;
}
int main(){
	string s1 = "gbfgywefy";
	string s2 = "fhgykwe";

	int n = s2.size();
	int m = s1.size();
	int max = -999;
	int a[n+1][m+1];

	for(int i = 0; i <= m; i++)a[0][i] = 0;
	for(int i = 0; i <= n; i++)a[i][0] = 0;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(s2[i-1] == s1[j-1]){
				a[i][j] = a[i-1][j-1]+1;	
			}else {
				a[i][j] =my_max(a[i-1][j], a[i][j-1]);
			}

			if(a[i][j] > max) max = a[i][j];
		}
	}

/*
	for(int i = 0; i < n+1; i++){
		for(int j = 0; j < m+1; j++){
			cout << a[i][j] << " ";		
		}		
		cout << endl;
	}
*/	
	cout << "Length of maximum common subsequence is " << max << endl;	
	return 0;
}
