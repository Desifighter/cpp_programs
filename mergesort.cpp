#include<iostream>
using namespace std;
void mergeSort(int a[],int lb,int ub);
void merge(int a[],int lb,int mid,int ub);
int main()
{
    int a[6] = {12,4,2,43,76,4};
    mergeSort(a,0,5);
    for (int i = 0; i < 6; i++)
    {
        cout<<a[i]<<endl;;
    }
    
    
    return 0;
}
void mergeSort(int a[],int lb,int ub){
    int mid ;
    if (lb>ub)
    {
        mid = (lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,lb);
        merge(a,lb,mid,ub);
    }
    
}
void merge(int a[],int lb,int mid,int ub){
    int i = lb;
    int j = mid+1;
    int k = lb;
    int b[lb+ub];

    while (i<= mid && j<=ub)
    {
        if (a[i]<=a[j])
        {
            b[k] = a [i] ;i++;
        }
        else
        {
            b[k] = a[j];j++;
        }
        k++;
    }
    if (i>mid)
    {
        while(j<=ub){b[k] = a[j]; j++ ; k++;}
    }
    else
    {
        while(i<=mid){b[k] = a[j]; i++ ; k++;}
    }
    for (k  = lb; k <= ub; k++)
    {
        a[k] = b[k];
    }
    
}