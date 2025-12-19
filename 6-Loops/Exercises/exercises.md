# Overview  
This Document contains the answer for the exercises in this chapter which doesn't needed to be written in C.  
also in the same directory, the code for the exercises which needed to be written in C exist.  
Enjoy.

---
## exercise no. 1  
- see the `1-output.c` file (it exists in the same directory).

---
## exercise no. 2
- see the `2-output.c` file (it exists in the same directory).

---
## exercise no. 3
- see the `3-output.c` file (it exists in the same directory).

---
## exercise no. 4
-  the third for loop (c) is different.
	- a and b are the same, but in c, our loop increment the variable `i` just right after the evaluation expression as a side effect. as a result when the statement of the loop's body execute, the `i` variable is already incremented.
	- Note that the other two will increment the variable right after of the execution of for loop's body.
-  see the `4-output.c` file (it exists in the same directory). i have written a single program to illuminate the difference between these three loops (first two are essentially the same.)

---

## exercise no. 5
- (c) is different and the other two are equivalent. 
- the `do {...} while (i < 10);` executes it's body at least once before evaluating the variable `i`.

---
## exercise no. 6
here is the equivalent `for` loop:
```c
for (i = 1; i <= 128; i *= 2) {
	printf("%d ", i);
}
```

---

## exercise no. 7
here is the equivalent `for` loop:
```c
for (int i = 9384; i > 0; /= 10) {
	printf("%d ", i)
}
```

---

## exercise no. 8
- The output of given code snippet is `10 5 3 2 1 1 1 1 ...`.
- You can check it out using the `8-output.c` provided in the same directory
- This is an infinite loop.

---
## exercise no. 9
- The additional statement to the equivalent `while` loop of given `for` loop is the initilization of the variable `i`.
- Here is the code:
- ```c
  i = 10;
  while (i >= 1) {
	  printf("%d ", i++);
	  i /= 2;
  }
  ```

---
## exercise no. 10
- we can apply the logic of the `continue` statement with a labeled null statement and a simple `goto` statement. the place of the labeled null statement should be just before the end of the loop. using this method we can skip the rest of the loops body in that particular iteration of the loop, just like a continue statement.
- There's a program named `10-output.c` (in the same directory of this markdown file) which include an example of this solution.
- in a short answer, consider the following two loops:
- ```c
  while (...) {
	  ...
	  continue;
	  ...
  }
  
  while (...) {
	  ...
	  goto before_end;
	  ...
	  before_end: ; // null statement
  }
  ```

---
## exercise no. 11
- see the `11-output.c` file (it exists in the same directory). 
- the output should be `20`

---
## exercise no. 12
- see the `12-exercise.c` file (it exists in the same directory). 

---
## exercise no. 13
- we can use the comma operator in the for loop.
- the rewritten version is as follows:
```c
for (n = 0; m > 0; m /= 2, n++)
```

---
## exercise no. 14
- the semicolon after the `if` statement is the problem. deleting it would solve the problem and makes our conditional statement operable. 
- with the aforementioned extra semicolon present in the code, the `printf` function call would execute regardless of the `if` statement.
