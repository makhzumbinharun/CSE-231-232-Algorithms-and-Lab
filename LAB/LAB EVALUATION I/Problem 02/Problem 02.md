Problem Statement:

Implement a stable sorting algorithm that divides the array into sub-problems and merges them back together. In the tree representation of the divide-and-conquer recursion, an in-order traversal naturally reflects the left-to-right sequential order of sub-arrays. Ensure that when merging two sorted halves containing duplicate elements, elements from the left sub-array take priority to guarantee that the relative order of equal values is preserved. 

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





