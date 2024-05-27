#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int n;
    heap()
    {
        arr[0]=-1;
        n=0;
    }
    void insert(int x)
    {
        n=n+1;
        int i=n;
        arr[n]=x;
        while(i>1)
        {
            int parent=i/2; 
            if(arr[parent]<arr[i])
            {
               swap(arr[parent],arr[i]);
               i=parent;
            }
            else
            {
                return;
            }
        }
    }
    void deleteh()
    {
        arr[1]=arr[n];
        n--;
        int i=1;
        while(i<n)
        {
            int left=2*i;
            int right=2*i+1;
            if(left<n && arr[left]>arr[i])
            {
                swap(arr[left],arr[i]);
                i=left;
            }
            else if(right<n&&arr[right]>arr[i])
            {
                swap(arr[right],arr[i]);
                i=right;
            }
             else
            {
                return;
            }
        }
    }
    void print()
    {
        for(int i=1; i<=n; i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};
void heapify(int arr[], int n, int i)
    {
        int largest=i;
        int left=2*i;
        int right=2*i+1;
    
            if(left<n && arr[left]>arr[largest])
            largest=left;
            if(right<n && arr[right]>arr[largest])
            largest=right;
            if(largest!=i)
            {
                swap(arr[i],arr[largest]);
                heapify(arr,n,largest);
            }
    }
int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteh();
    h.print();
    int a[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2; i>0; i--)
    {
         heapify(a,n,i);
    }
    cout<<"after heapify"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
}