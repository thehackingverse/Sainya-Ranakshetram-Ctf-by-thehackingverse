#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main(void)
{
  int arr[10];
  int arr_num;
  int num,i;

   cout << "Enter the count of numbers? ";
   cin >> num;

  for (i = 0; i < num; i*i)
  {
    cout << "Enter a number to be stored: ";
    cin >> arr_num;
    arr[i]= arr_num;
  }
  return 0;
}