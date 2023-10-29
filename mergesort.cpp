#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int>temp;
    int left = low;
    int right = mid + 1;
    int val;
    while(left <= mid && right <= high)
    {
        cout << "in merge"<<endl;
            for(int i = low; i <= high; i++)
    {
        printf("%d\t", arr[i]);
       // arr.push_back(val);
    }
    cout << endl;
        if(arr[left] <= arr[right])
        {
            //val = arr[left];
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
      while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = 0; i < high; i++)
    {
        arr[i]=temp[i];
    }

}

void mergesort( vector<int> &arr, int low, int high)
{
            cout << "in mergesort"<<endl;
            for(int i = 0; i <= high; i++)
    {
        printf("%d\t", arr[i]);
       // arr.push_back(val);
    }
    cout << endl;
    if(low==high)return;
    int mid = (low+high)/2;
    mergesort(arr, low, mid);
    mergesort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main()
{
    vector<int>arr;
    int val,n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        arr.push_back(val);
    }
        for(int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
       // arr.push_back(val);
    }
    cout << endl;
    mergesort(arr, 0, n-1);
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
       // arr.push_back(val);
    }
} // namespace std;
