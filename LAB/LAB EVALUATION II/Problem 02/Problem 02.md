# Problem 2: Exam Preparation

Alice has only `T` hours left before her final examination. There are `N` chapters available for study.

Studying chapter `i` requires `time_i` hours and is expected to contribute `marks_i` marks in the exam. A chapter can either be studied completely or skipped entirely.

Your task is to help Alice **maximize the total marks** she can gain without exceeding the available study time.

### Input

- The first line contains two integers `N` and `T`, representing the number of chapters and the total available study time.
- Each of the next `N` lines contains two integers `time_i` and `marks_i`, representing the time required to study a chapter and its expected marks.

### Output

Print a single integer representing the maximum total marks Alice can obtain without exceeding the available study time.

### Sample Input
```text
4 5
2 3
1 2
3 4
2 2
```

### Sample Output
```text
7
```

### Explanation

There are two ways to achieve the maximum marks:

1. **Chapters 1 and 3**
   - Time = 2 + 3 = 5 hours
   - Marks = 3 + 4 = **7**

2. **Chapters 1, 2, and 4**
   - Time = 2 + 1 + 2 = 5 hours
   - Marks = 3 + 2 + 2 = **7**

No valid combination gives more than **7 marks** within the available 5 hours.
