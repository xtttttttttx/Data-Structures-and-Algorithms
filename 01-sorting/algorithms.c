/** ======================辅助函数====================== **/

// 交换变量值
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/** ======================排序算法====================== **/

// 插入排序
void insertion_sort(int arr[], int len)
{
    int i, j, key;
    for (i = 1; i < len; i++)
    {
        key = arr[i];  // 当前元素
        for (j = i; j > 0; j--)
        {
            if (key < arr[j - 1])     // 前面的更大
                arr[j] = arr[j - 1];  // 把大的往后挪
            else                      // 找到正确位置
                break;
        }
        arr[j] = key;
    }
}

// 选择排序
void selection_sort(int arr[], int len)
{
    int i, j, min_idx;
    for (i = 0; i < len - 1; i++)
    {
        min_idx = i;
        // 寻找后面未排序子数组中最小元素
        for (j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        // 放入前面已排序的子数组中
        swap(&arr[i], &arr[min_idx]);
    }
}

// 冒泡排序
void bubble_sort(int arr[], int len)
{
    int i, j, swapped;
    for (i = len - 1; i > 0; i--)
    {
        swapped = 0;
        for (j = 0; j < i; j++)
        {
            // 大的放后面
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
        }
        // 未发生交换说明有序
        if (!swapped) break;
    }
}

// 交换排序
void exchange_sort(int arr[], int len)
{
    int i, j;
    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            // 大的放后面
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
}

void merge_sort(int arr[], int len) {}
void heap_sort(int arr[], int len) {}
void quick_sort(int arr[], int len) {}
void shell_sort(int arr[], int len) {}
void counting_sort(int arr[], int len) {}
void radix_sort(int arr[], int len) {}
void external_sort(int arr[], int len) {}
void bucket_sort(int arr[], int len) {}