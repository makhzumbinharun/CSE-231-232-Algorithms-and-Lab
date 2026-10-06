Problem Statement:

Implement an unstable sorting algorithm that selects a pivot element and partitions the array into two sub-arrays (elements less than/equal to the pivot, and elements greater than the pivot). Recursively sorting the left sub-array, the pivot, and the right sub-array follows an in-order structural traversal over the partition tree. Because long-distance swaps during partitioning can jump over identical values, relative stability of equal elements is not maintained. 

Input Format:

The first line contains an integer N, representing the number of elements in the array.
The second line contains N space-separated integers, representing the elements of the array.

Output Format:

Print the sorted array in ascending order.

Input Example:
```text
5
10 2 5 1 9
```
Output Example:
```text
1 2 5 9 10
```


