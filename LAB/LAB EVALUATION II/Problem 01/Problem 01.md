# Problem 1: 0/1 Knapsack Problem

An explorer has discovered `N` treasures in an ancient cave. Each treasure has a weight and a value. The explorer's backpack can carry at most `W` units of weight.

Your task is to determine the **maximum total value** that can be collected without exceeding the backpack's weight capacity.

## Input

- The first line contains two integers `N` and `W`, representing the number of treasures and the maximum weight capacity of the backpack.
- The next `N` lines each contain two integers `weight` and `value`, representing the weight and value of each treasure.

## Output

Print a single integer representing the maximum total value that can be collected.

## Sample Input
```text
4 7
1 1
3 4
4 5
5 7
```

## Sample Output
```text
9
```

## Explanation

The maximum total value is **9**.

This can be achieved by taking **treasures 2 and 3**.

- Treasure 2: Weight = 3, Value = 4
- Treasure 3: Weight = 4, Value = 5

**Total Weight:** 3 + 4 = 7

**Total Value:** 4 + 5 = 9
