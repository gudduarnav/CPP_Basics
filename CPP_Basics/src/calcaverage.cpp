#include <iostream>
#include <conio.h>

using namespace std;

void waitkey()
{
	cout<<endl<<"Press any key to exit..."<<endl;
	if(!_getch())
		_getch();
}

int main()
{
	int arr[100];
	int n;
	int ave=0;

	cout<<"Enter number of entries to make:";
	fflush(stdin);
	cin>>n;

	cout<<"Enter "<<n<<" integers:";
	fflush(stdin);
	for(int index=0; index<n; index++)
	{
		cin>>arr[index];
	}

	// Calculate average
	for(int index=0; index<n; index++)
	{
		ave += arr[index];
	}
	ave /= n;

	cout<<"Average = "<<ave<<endl;

	waitkey();

	return 0;

}