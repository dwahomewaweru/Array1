// Array1 Class Exercise


#include <iostream>
using namespace std;

int main()
{
	int nums[5];
cout << "Enter five intergers " << endl;
cin >> nums[0]; // Capture 1st number
cin >> nums[1]; // Capture 2nd number
cin >> nums[2]; // Capture 3rd number
cin >> nums[3]; // Capture 4th number
cin >> nums[4]; // Capture 5th number
cout << "The five values/intergers entered are\n ";
// Print numbers stored in the array
cout << nums[0]; cout << " ";
cout << nums[1]; cout << " ";
cout << nums[2]; cout << " ";
cout << nums[3]; cout << " ";
cout << nums[4] << endl;

return 0;
}