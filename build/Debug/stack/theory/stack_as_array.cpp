//Implementing the stack as array
#include<iostream>
using namespace std;

int stacktop=-1;
int arr[5];

int push(int x)
{
    stacktop++;
    arr[stacktop]=x;
}

void pop()
{
    stacktop--;
}

int top()
{
    return arr[stacktop];
}

bool isEmpty()
{
    if(stacktop==-1)
    return true;
    else
    return false;
}