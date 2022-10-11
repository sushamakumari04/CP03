/*3. Peak Index in a Mountain Array

Problem Statement:
An array arr a mountain if the following properties hold:
arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr , return the index i such that arr[0] < arr[1] < ... < arr[i-1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1] .
You must solve it in O(log(arr.length)) time complexity.*/
#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"Enter the size of array"<<endl;
cin>>n;
int arr[n];
cout<<"enter the numbers in the array"<<endl;
for(int i=0;i<n;i++)
{
 cin>>arr[i];
}
cout<<endl;
int start = 0, End = n-1, mid = (start+End)/2;
while(start<End){
if(arr[mid]>arr[mid-1])
{
  if(arr[mid+1]<arr[mid])
   {
     //cout<<mid<<endl;
     break;
   }
  start=mid+1;
}
else
{
 End = mid-1;
}
 mid = (start+mid)/2;
}
cout<<mid<<endl;
return 0;
}
