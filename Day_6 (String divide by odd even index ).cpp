#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string S;
        cin>>S;
        for(int i = 0; i<S.size(); i++)
        {
            if(i%2 == 0)
            {
                cout<<S[i];
            }
        }
        cout<<" ";
        for(int j = 0; j<S.size(); j++)
        {
            if(j%2 !=0 )
            {
                cout<<S[j];
            }
        }
        cout<<"\n";
    }
}
