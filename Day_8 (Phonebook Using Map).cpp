#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string, int>phonebook;
    map<string, int>:: iterator it;
    for(int i = 0; i<n; i++){
        string name;
        int number;
        cin>>name>>number;
        phonebook.insert(pair<string, int>(name, number));
    }
    
    string query;
    while(cin>>query){
        it = phonebook.find(query);
        if(it == phonebook.end()){
            cout <<"Not found"<<endl;
        }
        else{
            cout<<it->first<<"="<<it->second<<endl;
        }
    }

}
