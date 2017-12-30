#include <iostream>
using namespace std;
void swap(int* list, int one, int two) {
	int temp = list[one];
	list[one] = list[two];
	list[two] = temp;
}

void insertSort(int* list, int n) {
  for(int i=1;i<n;i++) {
    //to insert `i`th element in its right place
    for(int j=i;j>0;j--) {
      if(list[j]<list[j-1])
        swap(list, j, j-1);
    }
  }
}

void bubbleSort(int* list, int n) {
  for(int i=0;i<n;i++)
    for(int j=n-1;j>0;j--)
      if(list[j]<list[j-1])
        swap(list, j, j-1);
}

void selectSort(int* list, int n) {
  int minIndex;
  for(int i=0;i<n;i++) {
    minIndex = i;
    // find the min value in the `i`th right part of the array
    for(int j=i;j<n;j++) {
      if(list[minIndex]>list[j])
        minIndex = j;
    }
    // get the min value in right place
    swap(list, i, minIndex);
  }
}

int main(int argc, char const *argv[])
{
	int arr[] = {1, 23, 4, 4, 56, 20, 12, 34, 3, 9};
	insertSort(arr, 10);
	for(int i=0;i<10;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	bubbleSort(arr, 10);
	for(int i=0;i<10;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	selectSort(arr, 10);
	for(int i=0;i<10;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}