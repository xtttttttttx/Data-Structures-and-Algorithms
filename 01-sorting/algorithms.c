/**
 * @brief 插入排序
 * 
 * @param arr 数组
 * @param len 数组长度
 */
void insertion_sort(int arr[], int len)
{
    int i, j, cur;
    for (i = 1; i < len; i++)
    {
        cur = arr[i];
        for (j = i; j > 0; j--)
        {
            if (cur < arr[j - 1])
                arr[j] = arr[j - 1];
            else
                break;
        }
        arr[j] = cur;
    }
}
