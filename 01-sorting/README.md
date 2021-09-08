# 说明

在此目录下输入`make`进行编译得到可执行文件`sort`。

排序例子：

```bash
> ./sort 9 5 2 7
2 5 7 9
```

输入`./sort`查看帮助：

```bash
> ./sort
     usage: sort numbers algorithm(quick sort is default)

   example: sort 9 5 2 7 ins(insertion)

            *NOTE*: invalid numbers will be treated as ZEROS.

algorithms: ins(insertion), (sel)selection, (bub)bubble, (exg)exchange,
            (mrg)merge, (hep)heap, (qik)quick, (shl)shell
            (cnt)counting, (rdx)radix, (bkt)bucket
```
