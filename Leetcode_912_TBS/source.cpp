#include <iostream>
#include <vector>

/*

10:28
23.07.2025

������ : ������������� ������

*/

/*

10:28
23.07.2025

����: Merge Sort. ������ ������ �� ������� �� ��� ���, ���� �� ��������� ����������� ������ �������� 1 ���
0. � ������ �� �������� ���� �������� ������� ��� ��� ����� � ���� ��������������� ������.

P.S. 11:23 ����� �� ������ ������� ������� �������� � �.�. ���� ������� ����� ������:

����� ����� ������ 5, 2, 1, 3.
                   0  1  2  3
Mid == (3 - 0)/2 + 0 == 1
����������� mergeSort(nums, 0, 1);

    ������� mergeSort(nums, 0, 1);
    Mid == (1-0)/2 + 0 == 0
    ����������� ������� mergeSort(nums, 0, 0);
        Low >= High return;
    ���� ������ mergeSort(nums, 1, 1);
        Low >= High return;


P.S.
25.07.2025
10:54
� ��� ��� �� ���� ������ mergeSort! ��� ������ ��� ������� ��������?!
     
P.S.
25.07.2025
13:27
�����, ����� � ���������
*/

class SolutionMergeSort
{
public:
    void outPlaceMerge(std::vector<int>& nums, int low, int mid, int high)
    {
        if (low >= high) return;
        int l = low, r = mid + 1, k = 0, size = high - low + 1;
        std::vector<int> sorted(size, 0);
        while (l <= mid && r <= high)
            sorted[k++] = nums[l] < nums[r] ? nums[l++] : nums[r++];
        while (l <= mid)
            sorted[k++] = nums[l++];
        while (r <= high)
            sorted[k++] = nums[r++];
        for (k = 0; k < size; k++)
            nums[k + low] = sorted[k];
    }

    void mergeSort(std::vector<int>& nums, int low, int high)
    {
        if (low >= high) return;
        int mid = (high - low) / 2 + low;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid + 1, high);
        outPlaceMerge(nums, low, mid, high);
    }

    std::vector<int> sortArray(std::vector<int>& nums)
    {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};


int main()
{
    std::vector<int> Nums = { 5,2,3,1 };
    SolutionMergeSort Merge;
    Merge.sortArray(Nums);
    return 0;
}

/*

Notes of repeats

// 31.07.2025 - Success
// 22:10      - Merge sort. I feel progress.
// P.S.       - Task +, Idea +, Solution +, Corner cases +

*/