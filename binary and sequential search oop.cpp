
#include<iostream>
using namespace std;

class linear_search
{
public:
    void linear(int A[],int n,int value)
        {
            int pnt,flag=0,i;
            for(i=0;i<n;i++)
            {
                if(A[i]==value)
                {
                    pnt=i;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                cout<<"Element is present at index "<<pnt<<endl;
            else
                cout<<"Element is not found"<<endl;
        }

};

class bin_search
{
public:
    int binary(int arr[], int left, int right, int val)
    {
        if (right>=left)
            {
                int mid = left+(right-left)/2;
                if (arr[mid]==val)
                    return mid;
                if (arr[mid]>val)
                    return binary(arr, left,mid-1,val);
                return binary(arr,mid+1,right,val);
            }
        return -1; //When element not present in the array
    }
};



int main()
{
    int A[20],n,key,i,chs,ch=1,ele;
    linear_search l1;
    bin_search b1;
    while(ch==1)
    {
        cout<<"Number of elements in Array: ";
        cin>>n;
        cout<<"Enter Array elements: "<<endl;
        for(i=0;i<n;i++)
        {
            cin>>A[i];
        }
        cout<<"Enter search element: ";
        cin>>key;
        cout<< "1.Linear Search  2.Binary Search  3.Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>chs;
        switch(chs)
        {
        case 1:
            l1.linear(A,n,key);
            break;
        case 2:
            ele=b1.binary(A,0,n-1,key);
            if(ele==-1)
            {
                cout<<"Element is not found"<<endl;
            }
            else
            {
                cout<<"Element is found at index: "<<ele<<endl;
            }
            break;
        default:
            cout<<"Invalid Input"<<endl;
        }
        cout<<"Do you wish to continue(1/0): ";
        cin>>ch;
    }
    return 0;
}

