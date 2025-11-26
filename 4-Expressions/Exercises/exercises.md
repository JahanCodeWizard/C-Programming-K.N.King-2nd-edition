# Overview
This Document contains the answer for the exercises in this chapter which doesn't needed to be written in C.
also in the same directory, the code for the exercises which needed to be written in C exist.
Enjoy.

---
# exercise no. 1
- see the `1-output.c` file (it exists in the same directory).

---
## exercise no. 2
No! this is implementation-defined behavior. and we can see this in action using a simple example. keep in mind `i` and `j` are `int`, and the value of `i` is `5` and the value of `j` is `3`.
the result of `(-i)\j` is `-5\3` which could be `-1` or `-2` (based on implementation definition). the result of `-(i\j)` would be `-(5/3)` which is `-1`.
so the short answer is NO!

---
## exercises no. 3 and no. 4
i explained the answer using the following table.
(the C89 column corresponds to exercise no.3 and the C99 column corresponds to exercise no.4)

|     | expression | C89          | C99  |
| --- | ---------- | ------------ | ---- |
| `a` | `8 / 5`    | `1`          | `1`  |
| `b` | `-8 / 5`   | `-1` or `-2` | `-1` |
| `c` | `8 / -5`   | `-1` or `-2` | `-1` |
| `d` | `-8 / -5`  | `1` or `2`   | `1`  |

---
## exercises no. 5 and no. 6
i explained the answer using the following table.
(the C89 column corresponds to exercise no.5 and the C99 column corresponds to exercise no.6)

|     | expression | C89         | C99  |
| --- | ---------- | ----------- | ---- |
| `a` | `8 % 5`    | `3`         | `3`  |
| `b` | `-8 % 5`   | `-3` or `2` | `-3` |
| `c` | `8 % -5`   | `3` or `-2` | `3`  |
| `d` | `-8 % -5`  | `-3` or `2` | `-3` |

---
## exercise no. 7
The second (and tempting) variant of the algorithm in question will mostly work but! sometimes it would produce the integer `10` which is not a single digit integer, therefore not suitable for our purpose. 
as you can comprehend, the main algorithm (the first one) ensures that the result would be an integer between `0` and `9` (but the later variant of the algorithm will result in an integer between `1` and `10`).

---
## exercise no. 8
If we were to use the numbers 1 to 10 instead of the variable total, we would get the same result as the original algorithm, hence, Yes it works. (but it is unnecessarily complex in comparison to the original algorithm.)

---
## exercise no. 9
- see the 9-output.c` file (it exists in the same directory).
the output of the printf function calls in each section is as follows (for them to be easy on the eyes, i used comma to separate numbers):
- a) `63, 8`
- b) `3, 2, 1`
- c) `2, -1, 3`
- d) `0, 0, 0`

---
## exercise no. 10
- see the 10-output.c` file (it exists in the same directory).
the output of the printf function calls in each section is as follows (for them to be easy on the eyes, i used comma to separate numbers):
- a) `12, 12`
- b) `3, 4`
- c) `2, 8`
- d) `6, 9`
 

---
## exercise no. 11
- see the 11-output.c` file (it exists in the same directory).
the output of the printf function calls in each section is as follows (for them to be easy on the eyes, i used comma to separate numbers. also each part of this exercise has two printf function calls):
- a) `0`
- a) `2`
- b) `4`
- b) `11, 6`
- c) `0`
- c) `8, 7`
- d) `3`
- d) `4, 5, 4`

---
## exercise no. 12
- see the 12-output.c` file (it exists in the same directory).
the output of the printf function calls in each section is as follows (for them to be easy on the eyes, i used comma to separate numbers):
- a) `6, 16`
- b) `6, -7`
- c) `6, 23`
- d) `6, 15`

---
## exercise no. 13
in the sense of  the return the same expression value, `i += 1` is as the same as `++i`.
let's see each expression returned value after the evaluation:
- `++i` expression: this expression evaluates to the incremented value of `i`.
- `i++` expression: this expression evaluates to the value of `i` before the incrementing.
- `i += 1` expression: this expression evaluates to the incremented value of `i`.

---
## exercise no. 14
using the appendix A, the C operators and their Precedence, we can provide parentheses.

a) `(((a * b) - (c * d)) + e)`
b) `(((a / b) % c) / d)`
c) `((((- a) - b) + c) - (+ d))`
d) `(((a * (- b)) / c) - d)`

---
## exercise no. 15
The values of `i` and `j` are given in the table below.

| expression | `i` | `j` |
| :--------: | :-: | :-: |
| `initial`  | `1` | `2` |
|    (a)     | `3` | `2` |
|    (b)     | `0` | `2` |
|    (c)     | `1` | `2` |
|    (d)     | `1` | `3` |

---
