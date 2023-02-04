#include<iostream>
using namespace std;

int binarySearch(int a[], int beg, int end, int val)    
{    
    int mid;    
    if(end >= beg)     
    {        mid = (beg + end)/2;    
/* if the item to be searched is present at middle */  
        if(a[mid] == val)    
        {                 
            return mid+1;    
        }    
            /* if the item to be searched is smaller than middle, then it can only be in left subarray */  
        else if(a[mid] < val)     
        {  
            return binarySearch(a, mid+1, end, val);    
        }    
            /* if the item to be searched is greater than middle, then it can only be in right subarray */  
        else     
        {  
            return binarySearch(a, beg, mid-1, val);    
        }          
    }    
    return -1;     
}   
int main() {  
  int a[100]; 
  int val;  
  
  int n;
  cin>>n;  
   for (int i = 0; i < n; i++)  
  {
  	
  cin>>a[i];
  
	 }   
	 cout<<"enter the value to be searched is "<<endl;
	 cin>>val;
  int res = binarySearch(a, 0, n-1, val);   
  cout<<"The elements of the array are - "<<endl;  
  for (int i = 0; i < n; i++)  
  cout<<a[i]<<" ";   
  cout<<"\nElement to be searched is - "<<val<<endl;  
  if (res == -1)  
  cout<<"\nElement is not present in the array"<<endl;  
  else  
  cout<<"Element is present at position of array at "<< res<<" position";  
  return 0;  
}
