#include<iostream>
#include<array>

using namespace std;


void sortArry()
{
}
int binarySearch(int start, int endp, int arr[], int x)
{

    cout << "start " << start <<" end " <<endp  << " target " << x <<endl;

    if(start > endp)
    {
        cout << "not found " <<endl;
        return -1;
    }
    int mid = (start + endp) /2;
    cout << "midpoint "<< mid <<endl;
    if(arr[mid] == x)
    {
        cout << "found index " << mid <<endl;
        return mid;
    }
    else if (arr[mid]> x)
    {
        binarySearch(start, mid-1, arr, x);
    }
    else
    {
        binarySearch (mid+1, endp, arr, x);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int arrSize =  sizeof(arr) /sizeof(arr[0]);
    cout << "sizeof array " << arrSize <<endl;
    binarySearch(0, arrSize -1, arr, 1);
    return 0;


}
