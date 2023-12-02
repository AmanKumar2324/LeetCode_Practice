//Inmplementing Queue using an array

#include<iostream>
using namespace std;
const int n=100;
int arr[n];
int front=0;
int rear=0;
int count = 0;

int push(int x)
{
    if(count==n)
    return -1;
    arr[rear%n]=x;
    rear++;
    count++;
}

int pop()
{
    if(front==0)
    return -1;
    arr[front%n]=-1;
    count--;
    front++;
}

int top()
{
    if(front==0)
    return -1;
    return arr[front%n];
}