#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int A[6][6], sum = 0, max = INT_MIN;
	for(int i = 0; i<6; i++){
		for(int j = 0; j<6; j++)
		{
			cin>>A[i][j];
		}
	}

	for(int i = 0; i<4; i++)
	{
		for(int j = 0; j<4; j++)
		{
			sum = A[i][j]+A[i][j+1]+A[i][j+2]+A[i+1][j+1]+A[i+2][j]+A[i+2][j+1]+A[i+2][j+2];
			if(sum>max)
			{
				max = sum;
			}
		}
	}
	cout<<max;


	return 0;
}