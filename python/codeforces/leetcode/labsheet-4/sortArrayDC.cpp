class Solution {
public:
void swap(int &a, int &b){
        int c = a;
        a = b;
        b = c;
    }
    int partition(vector<int>& arr, int p, int r) {
        int c = (p + r)/2;
        swap(arr[p], arr[c]);
        int l = p;
        int pivot = arr[p];
        for(int i = p + 1; i <= r; ++i) {
            if (arr[i] <= pivot) {
                l++;
                swap(arr[i], arr[l]);
            }
        }
        swap(arr[p], arr[l]);
        return l;
    }
    void quickSort(vector<int> &arr, int l, int r) {
        if (l < r) {
            int m = partition(arr, l, r);
            quickSort(arr, l, m - 1);
            quickSort(arr, m + 1, r);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int l = 0;
        int r = nums.size();
        quickSort(nums, l, r - 1);
        return nums;
    }
};