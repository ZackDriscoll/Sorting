#include "BubbleSort.h"
#include "QuickSort.h"
#include <ctime>
#include <ratio>
#include <chrono>

using namespace chrono;

//Main function
int main()
{
	//Create an array of 10 random numbers
	int arrTen[10];
	for (int i = 0; i < 10; i++)
	{
		arrTen[i] = rand() % 1000;
	}
	int n = sizeof(arrTen) / sizeof(arrTen[0]);
	cout << "\nThis is the start of the progam." << endl;
	cout << "This is the given array: " << endl;
	BubbleSort b;

	//Print array before any sorting to show the difference afterwards
	if (n < 11)
	{
		b.printArray(arrTen, n);
	}
	else
	{
		//Array is over 10
		//A larger array could honestly be printed, but this is to try and prevent any errors in the array creation
		cout << "The array is too big to print out." << endl;
	}

	//Skip a line and pause for good UX
	cout << "\n" << endl;
	system("pause");


	//************Bubble Sort of 10 Numbers************

	cout << "\n\n\t\tBubble Sort Start." << endl;

	//Timer code for the bubble sort
	//Starting the timer
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	b.bubbleSort(arrTen, n);

	//Ending the timer
	high_resolution_clock::time_point t2 = high_resolution_clock::now();

	//Seeing how much time passed
	duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
	cout << "This is the array sorted: \n" << endl;

	//Print array after sorting
	if (n < 11)
	{
		b.printArray(arrTen, n);
	}
	else
	{
		//Array is over 10
		//A larger array could honestly be printed, but this is to try and prevent any errors in the array creation
		cout << "The array is too big to print out." << endl;
	}

	//Skip a line, tell the user how long it took to sort, and pause.
	cout << "\n" << endl;
	cout << "It took me " << time_span.count() << " seconds to run Bubble Sort with 10 numbers.\n" << endl;
	system("pause");


	//************Bubble Sort of 100 Numbers************

	//Create an array of 100 random numbers
	int arrB100[100];
	for (int i = 0; i < 100; i++)
	{
		arrB100[i] = rand() % 1000;
	}
	int n2 = sizeof(arrB100) / sizeof(arrB100[0]);
	cout << "\nThis is the start of the progam." << endl;
	cout << "This is the given array: " << endl;
	//BubbleSort b;

	//Print array before any sorting to show the difference afterwards
	if (n2 < 101)
	{
		b.printArray(arrB100, n2);
	}
	else
	{
		//Array is over 100
		//A larger array could honestly be printed, but this is to try and prevent any errors in the array creation
		cout << "The array is too big to print out." << endl;
	}

	//Skip a line and pause for good UX
	cout << "\n" << endl;
	system("pause");

	cout << "\n\n\t\tBubble Sort Start." << endl;

	//Timer code for the bubble sort
	//Starting the timer
	high_resolution_clock::time_point t3 = high_resolution_clock::now(); 
	b.bubbleSort(arrB100, n2);

	//Ending the timer
	high_resolution_clock::time_point t4 = high_resolution_clock::now(); 

	//Seeing how much time passed
	duration<double> time_span2 = duration_cast<duration<double>>(t2 - t1); 
	cout << "This is the array sorted: \n" << endl;

	//Print array after sorting
	if (n2 < 101)
	{
		b.printArray(arrB100, n2);
	}
	else
	{
		//Array is over 100
		//A larger array could honestly be printed, but this is to try and prevent any errors in the array creation
		cout << "The array is too big to print out." << endl;
	}

	//Skip a line, tell the user how long it took to sort, and pause.
	cout << "\n" << endl;
	cout << "It took me " << time_span2.count() << " seconds to run Bubble Sort with 100 numbers.\n" << endl;
	system("pause");
	
	//************Bubble Sort of 1000 Numbers************

	////Create an array of 1000 random numbers
	int arrB1000[1000];
	for (int i = 0; i < 1000; i++)
	{
		arrB1000[i] = rand() % 10000;
	}
	int n3 = sizeof(arrB1000) / sizeof(arrB1000[0]);
	cout << "\nThis is the start of the progam." << endl;
	cout << "This is the given array: " << endl;
	//BubbleSort b;

	//Print array before any sorting to show the difference afterwards
	if (n3 < 1001)
	{
		b.printArray(arrB1000, n3);
	}
	else
	{
		//Array is over 1000
		//A larger array could honestly be printed, but this is to try and prevent any errors in the array creation
		cout << "The array is too big to print out." << endl;
	}

	//Skip a line and pause for good UX
	cout << "\n" << endl;
	system("pause");

	cout << "\n\n\t\tBubble Sort Start." << endl;

	//Timer code for the bubble sort
	//Starting the timer
	high_resolution_clock::time_point t5 = high_resolution_clock::now();
	b.bubbleSort(arrB1000, n3);

	//Ending the timer
	high_resolution_clock::time_point t6 = high_resolution_clock::now();

	//Seeing how much time passed
	duration<double> time_span3 = duration_cast<duration<double>>(t6 - t5);
	cout << "This is the array sorted: \n" << endl;

	//Print array after sorting
	if (n3 < 1001)
	{
		b.printArray(arrB1000, n3);
	}
	else
	{
		//Array is over 1000
		//A larger array could honestly be printed, but this is to try and prevent any errors in the array creation
		cout << "The array is too big to print out." << endl;
	}

	//Skip a line, tell the user how long it took to sort, and pause.
	cout << "\n" << endl;
	cout << "It took me " << time_span3.count() << " seconds to run Bubble Sort with 1000 numbers.\n" << endl;
	system("pause");


	//************Quick Sort of 10 Numbers************

	//Create a new array of 10 random numbers for the quick sort
	int arrQ10[10];
	for (int i = 0; i < 10; i++)
	{
		arrQ10[i] = rand() % 1000;
	}
	int n4 = sizeof(arrQ10) / sizeof(arrQ10[0]);
	cout << "\nThis is the start of the progam." << endl;
	cout << "This is the given array: " << endl;
	QuickSort q;

	//Print array before any sorting to show the difference afterwards
	if (n4 < 11)
	{
		q.printArray(arrQ10, n4);
	}
	else
	{
		//Array is over 10
		//A larger array could honestly be printed, but this is to try and prevent any errors in the array creation
		cout << "The array is too big to print out." << endl;
	}

	//Skip a line and pause for good UX
	cout << "\n" << endl;
	system("pause");

	cout << "\n\n\t\tQuick Sort Start.\n" << endl;

	//Create a timer for the quick sort
	//Starting the timer
	high_resolution_clock::time_point t7 = high_resolution_clock::now();
	q.quickSort(arrQ10, 0, n4 - 1);

	//Ending the timer
	high_resolution_clock::time_point t8 = high_resolution_clock::now();

	//Seeing how much time passed
	duration<double> time_span4 = duration_cast<duration<double>>(t8 - t7);
	cout << "This is the array sorted: \n" << endl;

	//Print array after sorting
	if (n4 < 11)
	{
		b.printArray(arrQ10, n4);
	}
	else
	{
		//Array is over 100
		//A larger array could honestly be printed, but this is to try and prevent any errors in the array creation
		cout << "The array is too big to print out." << endl;
	}

	//Skip a line, tell the user how long it took to sort, and pause.
	cout << "\n" << endl;
	cout << "It took me " << time_span4.count() << " seconds to run Quick Sort of 10 numbers.\n" << endl;
	system("pause");


	//************Quick Sort of 100 Numbers************

	//Create a new array of 100 random numbers for the quick sort
	int arrQ100[100];
	for (int i = 0; i < 100; i++)
	{
		arrQ100[i] = rand() % 1000;
	}
	int n5 = sizeof(arrQ100) / sizeof(arrQ100[0]);
	cout << "\nThis is the start of the progam." << endl;
	cout << "This is the given array: " << endl;

	//Print array before any sorting to show the difference afterwards
	if (n5 < 101)
	{
		q.printArray(arrQ100, n5);
	}
	else
	{
		//Array is over 100
		//A larger array could honestly be printed, but this is to try and prevent any errors in the array creation
		cout << "The array is too big to print out." << endl;
	}

	//Skip a line and pause for good UX
	cout << "\n" << endl;
	system("pause");

	cout << "\n\n\t\tQuick Sort Start.\n" << endl;

	//Create a timer for the quick sort
	//Starting the timer
	high_resolution_clock::time_point t9 = high_resolution_clock::now(); 
	q.quickSort(arrQ100, 0, n5 - 1);

	//Ending the timer
	high_resolution_clock::time_point t10 = high_resolution_clock::now(); 

	//Seeing how much time passed
	duration<double> time_span5 = duration_cast<duration<double>>(t10 - t9); 
	cout << "This is the array sorted: \n" << endl;

	//Print array after sorting
	if (n5 < 101)
	{
		q.printArray(arrQ100, n5);
	}
	else
	{
		//Array is over 100
		//A larger array could honestly be printed, but this is to try and prevent any errors in the array creation
		cout << "The array is too big to print out." << endl;
	}

	//Skip a line, tell the user how long it took to sort, and pause.
	cout << "\n" << endl;
	cout << "It took me " << time_span5.count() << " seconds to run Quick Sort of 100 numbers.\n" << endl;
	system("pause");


	//************Quick Sort of 1000 Numbers************

	//Create a new array of 1000 random numbers for the quick sort
	int arrQ1000[1000];
	for (int i = 0; i < 1000; i++)
	{
		arrQ1000[i] = rand() % 10000;
	}
	int n6 = sizeof(arrQ1000) / sizeof(arrQ1000[0]);
	cout << "\nThis is the start of the progam." << endl;
	cout << "This is the given array: " << endl;

	//Print array before any sorting to show the difference afterwards
	if (n6 < 1001)
	{
		q.printArray(arrQ1000, n6);
	}
	else
	{
		//Array is over 1000
		//A larger array could honestly be printed, but this is to try and prevent any errors in the array creation
		cout << "The array is too big to print out." << endl;
	}

	//Skip a line and pause for good UX
	cout << "\n" << endl;
	system("pause");

	cout << "\n\n\t\tQuick Sort Start.\n" << endl;

	//Create a timer for the quick sort
	//Starting the timer
	high_resolution_clock::time_point t11 = high_resolution_clock::now();
	q.quickSort(arrQ1000, 0, n6 - 1);

	//Ending the timer
	high_resolution_clock::time_point t12 = high_resolution_clock::now();

	//Seeing how much time passed
	duration<double> time_span6 = duration_cast<duration<double>>(t12 - t11);
	cout << "This is the array sorted: \n" << endl;

	//Print array after sorting
	if (n6 < 1001)
	{
		q.printArray(arrQ1000, n6);
	}
	else
	{
		//Array is over 100
		//A larger array could honestly be printed, but this is to try and prevent any errors in the array creation
		cout << "The array is too big to print out." << endl;
	}

	//Skip a line, tell the user how long it took to sort, and pause.
	cout << "\n" << endl;
	cout << "It took me " << time_span6.count() << " seconds to run Quick Sort of 1000 numbers.\n" << endl;
	system("pause");
	return 0;
}