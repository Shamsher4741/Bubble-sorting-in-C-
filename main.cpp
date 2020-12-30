#include <iostream>
using namespace std;
#define MAX 20
int main()
{
	int arr[MAX], i, j, k, temp, n, xchanges;
	cout << "Enter the number of elements : ";
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cout << "Enter element " << i + 1 << "\t:";
		cin >> arr[i];
	}
	cout << "Unsorted list is :\n";
	for (i = 0; i < n; i++)
		cout << arr[i] << "\t";


	/* Bubble sort*/
	for (i = 0; i < n - 1; i++)
	{
		xchanges = 0;
		for (j = n; j > 0 
			; j--)
		{
			if (arr[j] > arr[j - 1])
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
				xchanges++;
			}/*End of if*/
		}/*End of inner for loop*/
		if (xchanges == 0) /*If list is sorted*/
			break;
		cout << "\nAfter Pass " << i + 1 << "  elements are :  ";
		for (k = 0; k < n; k++)
			cout << arr[k] << "\t";
		cout << endl;
	}/*End of outer for loop*/

	cout << "Sorted list is :\n";
	for (i = 0; i < n; i++)
		cout << arr[i] << "\t";
	cout << endl;
}/*End of main()*/
