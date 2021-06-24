#include<bits/stdc++.h>
using namespace std;
int firstOccurrence(vector<int> vec, int x)
{
    int start=0, end= vec.size()-1, result =-1,mid;
while(start<=end){
    mid = start + (end-start)/2;
    if(vec[mid]>x)
    {
        end = mid -1;
    }
    else if(vec[mid]<x){
        start = mid+1;
    }
    else{
        result=mid;
        end = mid-1;
    }
}
return result;
}
int lastOccurrence(vector<int> vec, int x)
{
int start=0, end= vec.size()-1, result =-1,mid;
while(start<=end){
    mid = start + (end-start)/2;
    if(vec[mid]>x)
    {
        end = mid -1;
    }
    else if(vec[mid]<x){
        start = mid+1;
    }
    else{
        result=mid;
        end = mid-1;
    }
}
return result;
}
pair<int,int> findFirstLastOccurrence(vector<int> vec,int x)
{
    int last= lastOccurence(vec,x);
    int first= firstOccurence(vec,x);
    return {first,last};

}
int main()
{
    vector<int> vec = {1,2,2,3,3,3,4,5,5,6,6};
    cout<<findFirstLastOccurrence(vec,2);
}