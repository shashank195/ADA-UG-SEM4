/*There is one meeting room in a firm. There are N meetings in the form of (Si, Fi) where Si is the start time of meeting i and Fi is finish time of meeting i. The task is to find the maximum number of meetings that can be accommodated in the meeting room. Print all meeting numbers*/

#include<iostream>
using namespace std;
void sort(int a[],int b[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int bele=b[i];
		int small=a[i];
		int pos=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<small)
			{
				bele=b[j];
				small=a[j];
				pos=j;
			}
		}
		int temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
		int tempb=b[i];
		b[i]=b[pos];
		b[pos]=tempb;
	}
}
int main()
{
	int n;
	cout<<"Enter the total no of meetings"<<endl;
	cin>>n;
	int s[n],f[n],resst[n],resf[n],mnum[n];
	cout<<"Enter the start times of the meetings"<<endl;
	for(int i=0;i<n;i++)
		cin>>s[i];
	cout<<"Enter the finish times of the meetings"<<endl;
	for(int i=0;i<n;i++)
		cin>>f[i];
	sort(f,s,n);
	resst[0]=s[0];
	resf[0]=f[0];
	int kf=0;
	int ks=0;
	mnum[0]=1;
	for(int i=1;i<n;i++)
	{
		if(s[i]>resf[kf])
		{
			resst[++ks]=s[i];
			resf[++kf]=f[i];
			mnum[ks]=i+1;
		}
	}
	cout<<"Maximum no. of meetings : "<<ks+1<<endl;
	cout<<"Meeting numbers are : ";
	for(int i=0;i<=ks;i++)
		cout<<mnum[i]<<" ";
	cout<<"\n";
	for(int i=0;i<=ks;i++)
	{
		cout<<resst[i]<<","<<resf[i]<<endl;
	}
	return 0;
}

/* output
Enter the total no of meetings
6
Enter the start times of the meetings
1 3 0 5 8 5
Enter the finish times of the meetings
2 4 6 7 9 9
Maximum no. of meetings : 4
Meeting numbers are : 1 2 4 5 
1,2
3,4
5,7
8,9
*/

