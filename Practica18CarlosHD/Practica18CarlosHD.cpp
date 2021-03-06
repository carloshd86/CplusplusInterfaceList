// Practica18CarlosHD.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TList.h"
#include "CTest.h"
#include <windows.h>


int main()
{
	//Creating the list
	TList * list = new TList();
	int iTemp = 0;
	const ITest * objTemp = nullptr;

	printf("List created. Current size: %d", list->Size());

	ITest * obj1 = new CTest(1);
	ITest * obj2 = new CTest(2);
	ITest * obj3 = new CTest(3);
	ITest * obj4 = new CTest(4);

	// Pushing elements
	
	iTemp = list->Push(obj1);
	printf("\n\nAdded element (result %d). Current size: %d", iTemp, list->Size());	
	iTemp = list->Push(obj2);
	printf("\nAdded element (result %d). Current size: %d", iTemp, list->Size());
	iTemp = list->Push(obj3);
	printf("\nAdded element (result %d). Current size: %d", iTemp, list->Size());
	iTemp = list->Push(obj4);
	printf("\nAdded element (result %d). Current size: %d", iTemp, list->Size());


	// Iterating through elements
	printf("\n\nIterating starting first element:\n");
	objTemp = list->First();
	while (objTemp)
	{
		printf("\nNext element: %d", objTemp->GetField());
		objTemp = list->Next();
	}

	printf("\n\nList current size: %d", list->Size());

	//Pop elements
	objTemp = list->Pop();
	printf("\n\nPop element: %d", objTemp->GetField());
	Sleep(200);
	printf("\nDelete popped element");
	delete objTemp;
	objTemp = list->Pop();
	printf("\nPop element: %d", objTemp->GetField());
	Sleep(200);
	printf("\nDelete popped element");
	delete objTemp;

	printf("\n\nList current size: %d", list->Size());

	// Iterating through elements after pop
	printf("\n\nAfter Pop");
	printf("\n\nIterating starting first element:\n");
	objTemp = list->First();
	while (objTemp)
	{
		printf("\nNext element: %d", objTemp->GetField());
		objTemp = list->Next();
	}

	//Reset
	list->Reset();
	printf("\n\nList size after reset: %d", list->Size());

	// Iterating through elements after reset
	printf("\n\nAfter Reset");
	printf("\n\nIterating starting first element:\n");
	objTemp = list->First();
	while (objTemp)
	{
		printf("\nNext element: %d", objTemp->GetField());
		objTemp = list->Next();
	}

	iTemp = list->Push(obj1);
	iTemp = list->Push(obj2);

	//Destroying test elements
	delete obj1;
	delete obj2;
	delete obj3;
	delete obj4;

	// Destroying the list
	delete list;
	list = nullptr;

	printf("\n\nList destroyed.");

	printf("\n\nPress Enter to quit...");
	getchar();
}

