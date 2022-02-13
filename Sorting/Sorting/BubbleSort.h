#pragma once
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class BubbleSort
{
public:
	//Swap function
	void swap(int* xp, int* yp)
	{
		int temp = *xp;
		*xp = *yp;
		*yp = temp;
	}

	//Bubble sort function
	void bubbleSort(int arr[], int n)
	{
		int i, j;
		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - i - 1; j++)
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
	//void printArray(int arr[], int size);

	// Function to print an array
	void printArray(int arr[], int size)
	{
		int i;
		for (i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

};

