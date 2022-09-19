#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int A[],int start, int end, int number)
{
    while(start<=end)
    {
        int mid= (start+end)/2;
        if(A[mid]==number)
            return mid;
        else if(A[mid]>number)
            end=mid-1;
        else
            start=mid+1;
    }
    return -1;
}

int CountFrequency(int A[],int number, int index)
{
    if(index==-1)
        return 0;//index 1 represent that element is not present so '0' frequency
    
    int left = index-1, right=index+1;
    
    while(A[left]==number)
    {
        left--;
    }
    while(A[right]==number)
    {
        right++;
    }
    int frequency=right-left-1;
    return frequency;
}

void Solution(int A[], int start, int end)
{
    int freq_0=CountFrequency(A,0,BinarySearch(A,start,end,0)),
        freq_1=CountFrequency(A,1,BinarySearch(A,start,end,1)),
        freq_2=CountFrequency(A,2,BinarySearch(A,start,end,2));

    cout<<"Frequency of 0 : "<<freq_0<<endl;
    cout<<"Frequency of 1 : "<<freq_1<<endl;
    cout<<"Frequency of 2 : "<<freq_2<<endl;

    cout<<"Answer : ";
    if(freq_0>freq_1 && freq_0>freq_2)
        cout<<"X"<<endl;
    else if(freq_1>freq_0 && freq_1>freq_2)
        cout<<"Y"<<endl;
    else if(freq_2>freq_0 && freq_2>freq_1)
        cout<<"Z"<<endl;
    else
        cout<<"-1"<<endl;//if any two of the element has same frequency;

       
}

int main()
{
    int n;
    cout<<"Enter a Size of Array : ";
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
        A[i]=rand()%3;

    sort(A,A+n);
    cout<<"Displaying The Sorted  Array : ";
    for(int i=0; i<n; i++)
        cout<<A[i]<<", ";

    cout<<endl;    
    Solution(A,0,n-1);
}