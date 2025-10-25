class Solution {
public:
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // choose the last element as pivot
    int i = low - 1;       // index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) { // elements smaller than pivot go to left
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // place pivot in correct sorted position
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // partition index

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
    void sortColors(vector<int>& nums)
    {
             int n = nums.size();

    quickSort(nums, 0, n - 1);  
    }
};