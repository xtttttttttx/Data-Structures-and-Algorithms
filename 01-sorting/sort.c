#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "algorithms.h"

// 打印数组
void print_arr(int arr[], int len)
{
    int i = 0;
    while (i < len)
        printf("%d ", arr[i++]);
    putchar('\n');
}

// 用法提示
void usage()
{
    printf(
        "     usage: sort numbers algorithm(quick sort is default) \n\n"
        "   example: sort 9 5 2 7 ins(insertion)\n\n"
        "            *NOTE*: invalid numbers will be treated as ZEROS.\n\n"
        "algorithms: ins(insertion), (sel)selection, (bub)bubble, (exg)exchange,\n"
        "            (mrg)merge, (hep)heap, (qik)quick, (shl)shell\n"
        "            (cnt)counting, (rdx)radix, (bkt)bucket\n");
}

int main(int argc, char const *argv[])
{
    if (argc == 1)  // 无输入
    {
        usage();
        return -1;
    }

    int *arr, i, len;
    // 从命令行读入剩余的参数作为数字，非法的输入将作为0处理
    len = argc - 1;
    arr = (int *)malloc(len * sizeof(int));
    for (i = 0; i < len; i++)
        arr[i] = atoi(argv[i + 1]);

    // 排序，默认使用快速排序
    int last = argc - 1;
    // 如果最后一个参数是排序算法，实际长度需要减一
    int real_len = len - 1;
    if (!strcmp(argv[last], "ins"))
        insertion_sort(arr, real_len);
    else if (!strcmp(argv[last], "sel"))
        selection_sort(arr, real_len);
    else if (!strcmp(argv[last], "bub"))
        bubble_sort(arr, real_len);
    else if (!strcmp(argv[last], "exg"))
        exchange_sort(arr, real_len);
    else if (!strcmp(argv[last], "mrg"))
        merge_sort(arr, real_len);
    else if (!strcmp(argv[last], "hep"))
        heap_sort(arr, real_len);
    else if (!strcmp(argv[last], "qik"))
        quick_sort(arr, real_len);
    else if (!strcmp(argv[last], "shl"))
        shell_sort(arr, real_len);
    else if (!strcmp(argv[last], "cnt"))
        counting_sort(arr, real_len);
    else if (!strcmp(argv[last], "rdx"))
        radix_sort(arr, real_len);
    else if (!strcmp(argv[last], "bkt"))
        bucket_sort(arr, real_len);
    else  // 未提供排序算法，实际长度不需要减一
    {
        real_len = len;
        quick_sort(arr, real_len);
    }

    print_arr(arr, real_len);

    return 0;
}
