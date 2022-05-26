#include<bits/stdc++.h>
using namespace std;
/*
    * In dynamic memory allocation memory crate in Heap.
    * Method For Create Dynamic memory:- int *arr=new int[n];
    * n is the size of array 
    * in stack memory memory release after complete the function.
    * in Heap memory memory not release after complete the function,].
    * clear the Heap memory use delete keywrod.
    * if i want to delete int i=5; then delete i;
    * in ARRAY delete []name of array.

*/
int getSum(int *arr,int n)//I can use both arr[] and *arr.
{
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    /*
        * If i craete
        * int i=5; it is the static memory allocation memory craete in stack.

    */
    string * name=new string[5];
    name[0]="absde";
    cout <<name[0]<<endl;
    int *arr=new int[n];//Dynamic memory allocation memory craete in Heap.
    /*
        * i am using Dynamic memory because of "int arr[n]" it's bad way to crate n size of array beacuse if 
        * i cretate then arr memory store in stack. 
        * Here *arr(pointer) it's memory crate in stack. 
        * new int[n] it's memory craete in Heap. 
    */
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=getSum(arr,n);
    cout <<ans<<endl;
    return 0;
}