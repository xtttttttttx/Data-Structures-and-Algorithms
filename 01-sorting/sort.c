#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "algorithms.h"

/**
 * @brief 打印数组
 * 
 * @param arr 数组
 * @param len 数组长度
 */
void print_arr(int arr[], int len)
{
    int i = 0;
    while (i < len)
        printf("%-3d ", arr[i++]);
    putchar('\n');
}

/**
 * @brief 用法提示
 */
void usage()
{
    printf(
        "     usage: sort algorithm [numbers...]\n\n"
        "   example: sort insertion 9 5 2 7\n\n"
        "            *NOTE*: invalid numbers will be treated as ZEROS.\n\n"
        "algorithms: insertion, selection, bubble, exchange, merge, heap, quick,\n"
        "            shell, counting, radix, bucket\n\n"
        "            *NOTE*: quick sort will be the DEFAULT sorting algorithm\n"
        "            if algorithm is not one of the above. \"sort 1 3 2 4\"\n"
        "            will output \"2 3 4\" because \"1\" is not a sorting algorithm.\n");
}

/**
 * @brief 默认数组
 * 
 * @return int* 默认数组
 */
int *default_array()
{
    static int arr[7] = {4, 2, 5, 7, 1, 3, 6};
    return arr;
}

int main(int argc, char const *argv[])
{
    if (argc == 1)  // 无输入
    {
        usage();
        return -1;
    }

    int *arr, len;
    if (argc == 2)  // 未输入数字，使用默认数组
    {
        len = 7;
        arr = default_array();
    }
    else  // 从命令行输入数字
    {
        len = argc - 2;
        arr = (int *)malloc(len * sizeof(int));
        int i;
        for (i = 0; i < len; i++)
            arr[i] = atoi(argv[i + 2]);
    }

    printf("before sorting: ");
    print_arr(arr, len);

    // 排序，如果第一个参数argv[1]不是排序算法，则使用快速排序
    // 对一个参数之后的输入进行排序
    if (!strcmp(argv[1], "insertion"))
        insertion_sort(arr, len);

    printf(" after sorting: ");
    print_arr(arr, len);

    return 0;
}
