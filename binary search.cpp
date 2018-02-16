#include <iostream>
using namespace std;

int bsearch(int arr[],int l,int g,int x)
{
int mid;
if(g>0)
{
	mid=(l+g)/2;
	if(x==arr[mid])
	    return mid;
	else if(x>arr[mid])
	    return bsearch(arr,mid+1,g,x);
	else 
	    return bsearch(arr,l,mid-1,x);
}

else return -1;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 7, 8, 10, 13, 49};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int x = 10;
   cout<<bsearch(arr, 0, n-1, x);
   return 0;
}
