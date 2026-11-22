# Problem 3: Team Formation

A coach wants to form a team from `N` students. Each student has a skill level.

To ensure proper mentoring, the coach wants the selected team members to appear in the **same order as given** and have **strictly increasing skill levels**.

Your task is to find the **maximum possible number of students** that can be selected.

### Input

- The first line contains an integer `N`, representing the number of students.
- The second line contains `N` integers representing the skill levels of the students in their given order.

### Output

Print a single integer representing the maximum number of students that can be selected.

### Sample Input
```text
8
10 22 9 33 21 50 41 60
```

### Sample Output
```text
5
```

### Explanation

The maximum possible team size is **5**.

Some possible strictly increasing sequences are:

1. **10 → 22 → 33 → 50 → 60** (Length = 5)
2. **10 → 22 → 33 → 41 → 60** (Length = 5)

Both sequences maintain the original order of students and have strictly increasing skill levels.
