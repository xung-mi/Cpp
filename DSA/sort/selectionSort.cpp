#include <iostream>
#include <vector>
class SelectionSort
{
public:
    void selectionSort(std::vector<int> &arr)
    {
        for (size_t i = 0; i < arr.size() - 1; i++)
        {
            size_t minIdx = i;
            for (size_t j = i + 1; j < arr.size(); j++)
            {
                if (arr[j] < arr[minIdx])
                {
                    minIdx = j;
                }
            }
            std::swap(arr[minIdx], arr[i]); // Hoán đổi phần tử nhỏ nhất lên đầu
        }
    }
};

int main()
{
    std::vector<int> arr = {14, 4, 2, 7, 2, 4};
    SelectionSort sl;
    sl.selectionSort(arr);
    for (int num : arr) {
        std::cout << num << " ";
    }
}