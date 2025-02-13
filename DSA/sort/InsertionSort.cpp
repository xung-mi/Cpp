#include <iostream>
#include <vector>
using namespace std;

class Main {
    public:
        void insertionSort(vector<int> &arr){
            for (int i = 1; i < arr.size(); i++){
                int key = arr[i];
                int j = i - 1;
                while (j >= 0 && key < arr[j]){
                    arr[j+1] = arr[j];
                    j--;
                }
                arr[j+1] = key; 
            }
        }
};
int main(){
    vector<int> arr = {1,4,6,3,2,87};
    Main m;
    m.insertionSort(arr);
    for ( int num : arr){
        cout << num << ", ";
    }
}
