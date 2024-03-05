// Q1. Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"enter the 1st number : ";
cin>>a;
cout<<"enter the 2nd number : ";
cin>>b;
int* p1 =&a;
int* p2 =&b;
int product = ((*p1) * (*p2));
cout<<"the product of two numbers is "<<product; 
}

// Q2. int *p, q;
// Ans) 1. p is a pointer and q is an integer.

// Q3. Find the output of the following code snippet.
// Ans) 11,10,11

// Q4. Find the output of the following code snippet.
// Ans) a get value of b.

// Q5. Is the following program snippet correct?
// Ans) yes

