# Overview  
This Document contains the answer for the exercises in this chapter which doesn't needed to be written in C.  
also in the same directory, the code for the exercises which needed to be written in C exist.  
Enjoy.

---
## exercise no. 1
The problem is that, the reader should check the a's type to make sure it's elements are the same type as the given t (type). it makes our program more complicated to read and understand.

---
## exercise no. 2
to use a digit as a subscript we could use `[digit - '0']` (assuming digits have consecutive code in the underlying character set)

---
## exercise no. 3
```c
bool weekend[7] = {true, false, false, false, false, false, true};
```

---
## exercise no. 4
```c
bool weekend[7] = {[0] = true, [6] = true}; // C99 only
```

---
## exercise no. 5
```c
int i;
int fib_numbers[40] = {[0] = 0, [1] = 1};

for (i = 2; i <= 40; i++) 
    fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];

```

---
## exercise no. 6
```c
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                             {0, 1, 1, 0, 0, 0, 0},
                             {1, 1, 0, 1, 1, 0, 1},
                             {1, 1, 1, 1, 0, 0, 1},
                             {0, 1, 1, 0, 0, 1, 1},
                             {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1},
                             {1, 1, 1, 0, 0, 0, 0},
                             {1, 1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 0, 1, 1}};
```
---
## exercise no. 7
```c
const int segments[10][7] = {{1, 1, 1, 1, 1, 1},
                             {0, 1, 1},
                             {1, 1, 0, 1, 1, 0, 1},
                             {1, 1, 1, 1, 0, 0, 1},
                             {0, 1, 1, 0, 0, 1, 1},
                             {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1},
                             {1, 1, 1},
                             {1, 1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 0, 1, 1}};
```
---
## exercise no. 8
```c
int temperature_readings[30][24];
```

---
## exercise no. 9
```c
int avg = 0, sum = 0;
int i, j;

for (i = 0; i <= 29; i++) {
    for (j = 0; j <= 6; j++) {
        sum += temperature_readings[i][j];
    }
}

avg = (float) sum / (30 * 7);
```

---
## exercise no. 10

```c
char chess_board[8][8] = {
    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
    {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
    {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
    {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
};
```

---
## exercise no. 11
```c
int i, j;
char checker_board[8][8];

for (i = 0; i <= 7; i++) {
    for (j = 0; j <= 7; j++) {
        if ((i + j) % 2 == 0)
            checker_board[i][j] = 'B';
        else
            checker_board[i][j] = 'R';
    }
}
```
