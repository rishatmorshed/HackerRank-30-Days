#include<iostream>
using namespace std;

void reverse(int A[], int size)
{
    int i, j, temp;
    j = size-1;
    for(int i = 0; i<j; i++)
    {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        j--;
    }
}
void display(int A[], int length)
{
    for(int i = 0; i<length; i++)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{
    int A[1000], size, i, j;
    cin>>size;
    for(i = 0; i<size; i++)
    {
        cin>>A[i];
    }
    reverse(A, size);
    display(A, size);
}
