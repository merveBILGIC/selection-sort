// selelection sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
 void selection_sort()
{   
	 int arr[] = { 12,13,666,23,45,131,465 };
	 int n= sizeof(arr) / sizeof(arr[0]);

	int i, enkucuk, index, j;
	for (i = 0; i <( n - 1); i++)
	{
		enkucuk = arr[n - 1];
		index = n - 1;
		for (j = i; j <( n - 1); j++)
		{
			if (arr[j] < enkucuk)
			{
				enkucuk = arr[j];
				index = j;
			}
		}
		arr[index] = arr[i];
		arr[i] = enkucuk;

	} 
	for (int k = 0; k < n; k++)
	{
		cout << '\t' << arr[k] << endl;
	}

} 
 int main()
 {
	 selection_sort();
	 return 0;
  }
