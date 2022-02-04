#include<iostream>
#include <string>
#include<cmath>
using namespace std;
void StringManipulation();
void StringLength(string st1);
void StringConcatenation(string st1, string st2);
void Calculator();
void Addition(int x);
void Subtraction(int x);
void Multiplication(int x);
void Division(int x);
void Power(int num, int powe);
string StringCopy(string st1);
string StringEdit(string st1, char a, char b);
void SortingArray();
void BubbleSort(int arr[], int n);
void InsertionSort(int arr[], int n);
void SelectionSort(int arr[], int n);
void SearchingArray();
void LinearSearch(int arr[], int n, int key);
void BinarySearch(int arr[], int n, int key);
void StringManipulation()
{
	int x, y;
	string st1, st2, strcpy;
	char a, b;
	cout << "1) String Length\n2) String Concatenation\n3) String Copy\n4) String Edit" << endl;
	cin >> x;
	if (x == 1)
	{
		cout << "You have chosen string length. Please enter a string." << endl;
		cin.ignore();
		getline(cin, st1);
		StringLength(st1);
	}
	else if (x == 2)
	{
		cout << "You have chosen string concatention. Please enter two strings." << endl;
		cin.ignore();
		getline(cin, st1);
		getline(cin, st2);
		StringConcatenation(st1, st2);
	}
	else if (x == 3)
	{
		cout << "You have chosen string copy. Please enter a string." << endl;
		cin.ignore();
		getline(cin, st1);
		strcpy = StringCopy(st1);
		cout << "The entered string '" << strcpy << "' has been copied to the variable 'strcpy' " << endl;
	}
	else if (x == 4)
	{
		cout << "You have chosen string edit. Please enter a string." << endl;
		cin.ignore();
		getline(cin, st1);
		cout << "Enter the number of characters you want to replace in the above entered string." << endl;
		cin >> y;
		for (int i = 0; i < y; i++)
		{
			cout << "Enter the character you want to replace." << endl;
			cin >> a;
			cout << "Enter the character which you want the previous character replaced with." << endl;
			cin >> b;
			st1 = StringEdit(st1, a, b);
		}
		cout << "The edited string is: " << st1 << endl;
	}
	else
	{
		cout << "Invalid Input." << endl;
	}
}
void StringLength(string st1)
{
	cout << "The length of the string is: " << st1.size() << endl;
}
void StringConcatenation(string st1, string st2)
{
	string out;
	out = st1 + st2;
	cout << "The concatenated string is: " << out << endl;
}
string StringCopy(string st1)
{
	return st1;
}
string StringEdit(string st1, char a, char b)
{
	int k;
	k = st1.size();
	for (int i = 0; i < k; i++)
	{
		if (st1[i] == a)
		{
			st1[i] = b;
		}
	}
	return st1;
}
void Calculator()
{
	int x, num, powe;
	cout << "1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n5) Power" << endl;
	cin >> x;
	if (x == 1)
	{
		cout << "You have chosen Addition. Please enter the number of variables you would like to add." << endl;
		cin >> x;
		Addition(x);
	}
	else if (x == 2)
	{
		cout << "You have chosen Subtraction. Please enter the number of variables you would like to subtract." << endl;
		cin >> x;
		Subtraction(x);
	}
	else if (x == 3)
	{
		cout << "You have chosen Multiplication. Please enter the number of variables you would like to multiply." << endl;
		cin >> x;
		Multiplication(x);
	}
	else if (x == 4)
	{
		cout << "You have chosen Division. Please enter the number of variables you would like to divide." << endl;
		Division(x);
	}
	else if (x == 5)
	{
		cout << "You have chosen Power function. Please enter number and what power you would like to raise it to." << endl;
		cin >> num;
		cin >> powe;
		Power(num, powe);
	}
	else
	{
		cout << "Invalid Input." << endl;
	}
}
void Addition(int x)
{
	int num, out = 0;
	for (int i = 0; i < x; i++)
	{
		cout << "Enter the number you want to add." << endl;
		cin >> num;
		out = out + num;
	}
	cout << "The sum of the entered numbers is: " << out << endl;
}
void Subtraction(int x)
{
	int num, out = 0;
	for (int i = 0; i < x; i++)
	{
		cout << "Enter the number you want to subtract." << endl;
		cin >> num;
		if (i == 0)
		{
			out = num;
		}
		out = out - num;
	}
	cout << "The difference of the entered numbers is: " << out << endl;
}
void Multiplication(int x)
{
	int num, out = 1;
	for (int i = 0; i < x; i++)
	{
		cout << "Enter the number you want to multiply." << endl;
		cin >> num;
		out = out * num;
	}
	cout << "The multiple of the entered numbers is: " << out << endl;
}
void Division(int x)
{
	int num, out = 1;
	for (int i = 0; i < x; i++)
	{
		cout << "Enter the number you want to divide." << endl;
		cin >> num;
		out = out / num;
	}
	cout << "The division of the entered numbers is: " << out << endl;
}
void Power(int num, int powe)
{
	cout << num << " raised to the power of " << powe << " equals: " << pow(num, powe) << endl;
}
void SortingArray()
{
	int x, n;
	int arr[1000] = {};
	cout << "1) Bubble Sort\n2) Insertion Sort\n3) Selection Sort" << endl;
	cin >> x;
	if (x == 1)
	{
		cout << "You have chosen Bubble sort. Please enter the length of array." << endl;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "Enter an integer into the array." << endl;
			cin >> arr[i];
		}
		BubbleSort(arr, n);
	}
	else if (x == 2)
	{
		cout << "You have chosen Insertion sort. Please enter the length of array." << endl;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "Enter an integer into the array." << endl;
			cin >> arr[i];
		}
		InsertionSort(arr, n);
	}
	else if (x == 3)
	{
		cout << "You have chosen Selection sort. Please enter the length of array." << endl;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "Enter an integer into the array." << endl;
			cin >> arr[i];
		}
		SelectionSort(arr, n);
	}
	else
	{
		cout << "Invalid Input." << endl;
	}
}
void BubbleSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "Sorted array: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void InsertionSort(int arr[], int n)
{
	int key, j;
	for (int i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void SelectionSort(int arr[], int n)
{
	int min_idx;
	for (int i = 0; i < n - 1; i++)
	{
		min_idx = i;
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;
		int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void SearchingArray()
{
	int x, n, key;
	int arr[1000] = {};
	cout << "1) Linear Search\n2) Binary Search" << endl;
	cin >> x;
	if (x == 1)
	{
		cout << "You have chosen Linear Search. Please enter the length of array." << endl;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "Enter an integer into the array." << endl;
			cin >> arr[i];
		}
		cout << "Please enter the integer you want to search in array." << endl;
		cin >> key;
		LinearSearch(arr, n, key);
	}
	else if (x == 2)
	{
		cout << "You have chosen Binary Search. Please enter the length of array. (*Note: Array entered needs to be sorted in ascending order.)" << endl;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "Enter an integer into the array." << endl;
			cin >> arr[i];
		}
		cout << "Please enter the integer you want to search in array." << endl;
		cin >> key;
		BinarySearch(arr, n, key);
	}
	else
	{
		cout << "Invalid Input." << endl;
	}
}
void LinearSearch(int arr[], int n, int key)
{
	int check = 0, i;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == key)
		{
			check = 1;
			break;
		}
	}
	if (check == 1)
	{
		cout << "The integer value was found on the " << i << " index of the array." << endl;
	}
	else
	{
		cout << "Item was not present in the array." << endl;
	}
}
void BinarySearch(int arr[], int n, int key)
{
	int found = 0, failed = 0, first = 0, last = n - 1, middle;
	while (found == 0 && failed == 0)
	{
		middle = (first + last) / 2;
		if (arr[middle] == key)
		{
			found = 1;
		}
		else if (first >= last)
		{
			failed = 1;
		}
		else if (arr[middle] > key)
		{
			last = middle - 1;
		}
		else
		{
			first = middle + 1;
		}
	}
	if (found == 1)
	{
		cout << "The integer value was found on the " << middle << " index of the array." << endl;
	}
	else
	{
		cout << "Item was not present in the array." << endl;
	}
}
int main()
{
	int x = 1;
	while (x != 5)
	{
		cout << "1) String Manipulation\n2) Calculator\n3) Sorting an Array\n4) Searching in an Array\n5) Exit" << endl;
		cin >> x;
		if (x < 1 || x>5)
		{
			cout << "Incorrect Input. Please enter number again." << endl;
		}
		else if (x == 1)
		{
			cout << "You have chosen String Manipulation." << endl;
			StringManipulation();
		}
		else if (x == 2)
		{
			cout << "You have chosen Calculator." << endl;
			Calculator();
		}
		else if (x == 3)
		{
			cout << "You have chosen Sorting an Array." << endl;
			SortingArray();
		}
		else if (x == 4)
		{
			cout << "You have chosen Searching in an Array." << endl;
			SearchingArray();
		}
	}
}