/* Sort a given set of N integer elements using Insertion Sort technique and compute its time taken.  */

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		a[i]=rand()%100;
	for(int i=1;i<n;i++)
	{
		int item=a[i];
		int j=i-1;
		while(j>=0 && a[j]>item)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=item;
	}
	cout<<"Sorted array is"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	return 0;
}

/* output
Enter the size of the array
10
Sorted array is
15
21
35
49
77
83
86
86
92
93
*/
