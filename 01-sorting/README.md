# 说明

在此目录下输入`make`进行编译得到可执行文件`sort`。

排序例子：

```bash
> ./sort insertion 9 5 2 7
before sorting: 9   5   2   7
 after sorting: 2   5   7   9
```

输入`./sort`查看帮助：

```bash
> ./sort
     usage: sort algorithm [numbers...]

   example: sort insertion 9 5 2 7

            *NOTE*: invalid numbers will be treated as ZEROS.

algorithms: insertion, selection, bubble, exchange, merge, heap, quick,
            shell, counting, radix, bucket

            *NOTE*: quick sort will be the DEFAULT sorting algorithm
            if algorithm is not one of the above. "sort 1 3 2 4"
            will output "2 3 4" because "1" is not a sorting algorithm.
```