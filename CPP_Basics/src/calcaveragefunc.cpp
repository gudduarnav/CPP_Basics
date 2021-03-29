#include <iostream>
#include <conio.h>

using namespace std;

void waitkey()
{
	cout<<endl<<"Press any key to exit..."<<endl;
	if(!_getch())
		_getch();
}

int getAve(int a[], int n)
{
	int ave = 0;
	for(int index=0; index<n; index++)
	{
		ave += a[index];
	}
	ave /= n;
	return ave;
}


int main()
{
	int arr[100];
	int n;

	cout<<"Enter number of entries to make:";
	fflush(stdin);
	cin>>n;

	cout<<"Enter "<<n<<" integers:";
	fflush(stdin);
	for(int index=0; index<n; index++)
	{
		cin>>arr[index];
	}

	cout<<"Average = "<<getAve(arr, n)<<endl;

	waitkey();

	return 0;

}