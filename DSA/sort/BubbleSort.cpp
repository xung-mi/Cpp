#include<iostream>
#include<vector>
using namespace std;
class BubbleSort{
    public:
        void bubbleSort(std::vector<int>& arr){
            for (int i = 0; i < arr.size()-1; i++){
                bool swap_ = false;
                for (int j = 0; j < arr.size()-1 - i; j++ ){
                    if (arr[j] > arr[j+1]){
                        std::swap(arr[j], arr[j+1]);
                        swap_ = true;
                    }
                }
                if (!swap_) break;
            }
        }

        bool check(int n){
            if (n % 3 == 0 && n % 5 == 0){
                std::cout << "true" << std::endl;
                return true;
            } else {
                return false;
            }
        }
};

int main(){
    BubbleSort bs;
    std::cout << bs.check(15) << std::endl;
    std::vector<int> arr = {2,3,6,4,2,4,1};
    bs.bubbleSort(arr);
    for (int num : arr){
        std::cout << num << ", ";
    }
}
