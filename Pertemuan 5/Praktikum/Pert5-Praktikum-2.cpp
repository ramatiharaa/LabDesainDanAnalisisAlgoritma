#include <iostream>
using namespace std;

void show(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1); 

    for (int j = low; j < high; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int p = partition(arr, low, high);

        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}


int main()
{
    int size;
    cout << "\nmasukanjumlah elemen dalam array : ";

    cin >> size;

    int arr[size];


    for (int i = 0; i < size; ++i)
    {
        cout << "\n";
        cout<<"Elemen ke-"<<i+1<<": ";
        cin >> arr[i];
    }
    cout<< "Array Awal : ";
    for (int j = 0; j < size; ++j)
    {
        cout << arr[j]<<" ";
    }
    cout<<endl;
    
    quickSort(arr, 0, size);
    cout << "Array yang telah diurutkan : ";
    show(arr, size);
    return 0;
}
