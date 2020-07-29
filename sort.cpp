#include <bits/stdc++.h>
using namespace std;
int arr[10] = {1 ,3, 5, 6, 8, 9, 2, 7, 0, 4};
void quick_sort(int *a, int left, int right) {
  
    if (left >= right) {
        return ;
    }

    int pos = left + rand() % (right - left + 1); 
    int pivot = a[pos];
    a[pos] = a[left];
    a[left] = pivot;

    int idx = left;
   
    for (int i = left + 1; i <= right; i++) {
        
       
        if (a[i] <= pivot) {
            idx += 1;
            int temp = a[idx];
            a[idx] = a[i];
            a[i] = temp;
        }
    }

    a[left] = a[idx];
    a[idx] = pivot;

    quick_sort(a, left, idx - 1);
    quick_sort(a, idx + 1, right);

}
int main() {

    quick_sort(arr, 0, 9);
    for (int i = 0 ; i < 10; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}