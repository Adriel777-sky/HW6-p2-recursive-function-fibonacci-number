/*Adriel A. Okolo
HW6 p2 
fubonacci numbers */


#include <iostream>
using namespace std;
//declare a function named Fibonacci(n) 
int Fibonacci(int n)
{
        //declare some variables
        int fibo;
        int index = 0;
        //if n is 0 or 1 then return n
        if(n==1||n==0)
        {
                return n;
        }
        //otherwise obtain the fibonacci sequence
        else
        {
                fibo = Fibonacci(n-1)+Fibonacci(n-2);
        }
        //return thr nth integer(excluding 0)
        return fibo;
}
//declare the main()  method
int main()
{
        //input form the user
        int num;
        cout<<"Enter a number: ";
        cin>>num;
        //call the Fibonacci() method
        int f = Fibonacci(num);
        //print the nth number 
        cout<<"The fibonacci number at "<<num<<" is: "<<f<<endl;
}