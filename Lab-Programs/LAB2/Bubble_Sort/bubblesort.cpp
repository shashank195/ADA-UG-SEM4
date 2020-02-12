#include<iostream>
#include<time.h>
//#include<chrono>
//#include<algorithm>
using namespace std;
//using namespace std::chrono;

void bub(int *,int );

int main()
{
	clock_t start,end;
	int n,i=-1;
	cout<<"Enter size:";
	cin>>n;
	int arr[n];
	cout<<"\nEnter the array :";
	while(i<n-1)
	{
		i++;
		cin>>arr[i];
	}
	//n = sizeof(arr)/sizeof(n);
	//auto start = high_resolution_clock::now();
	start = clock();
	bub(&arr[0],n);
	
	//auto stop = high_resolution_clock::now();
	
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t\t";
		
	end = clock();
	double cpu_time_used = 1000000*((double)(end - start))/CLOCKS_PER_SEC;
	cout<<"\n TIME USED(milli):"<<cpu_time_used<<"\n";
	//auto duration = duration_cast<milliseconds>(stop-start);
	//cout<<"Time taken by function: "<<duration.count()<<" nanoseconds"<<endl;
	return 0;
}

void bub(int *arr,int n)
{	
	int temp;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;	
			}
		}
		
	}
}
