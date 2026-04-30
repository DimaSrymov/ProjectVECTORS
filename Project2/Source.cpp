#include "Header.h"

int main()
{
	vector<int> vec;
	string choice;
	cout << "====== MENU =======\n";
	cout << "1.Input vector\n2.Find min element\n3.Find max element\n";
	do
	{
		cout << "Enter your choice: ";
		cin >> choice;
		if (choice == "1")
		{
		InputVector(vec);
		}
		if (vec.empty())
		{
			cout << "Vector is empty. Please input the vector first." << endl;
			continue;
		}
		if (choice == "2")
		{
			int minElement = findMinElement(vec);
			cout << "Minimum element: " << minElement << endl;
		}
		if (choice == "3")
		{
			int maxElement = findMaxElement(vec);
			cout << "Maximum element: " << maxElement << endl;
		}
		if (choice != "1" && choice != "2" && choice != "3")
		{
			cout << "Invalid choice. Please try again." << endl;
		}
	} while (true);
	return 0;
}