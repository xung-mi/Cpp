#include <iostream>
#include <vector>

class LinearSearch
{
    public :  
    int linearSearch(std::vector<int> &arr, int k){
        for (int i = 0; i < arr.size(); i++){
            if (arr[i] == k){
                return i;
            }
        }
        return -1;
    }
};
int main(){
    LinearSearch ls;
    std::vector<int> arr = {1,2,3,4,5};
    std::cout << ls.linearSearch(arr, 3);
}


