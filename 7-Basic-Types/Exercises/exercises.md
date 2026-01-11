# Overview  
This Document contains the answer for the exercises in this chapter which doesn't needed to be written in C.  
also in the same directory, the code for the exercises which needed to be written in C exist.  
Enjoy.

---
## exercise no. 1
a) The octal value of `077` is equal to the decimal value of `63`.
b) The hexadecimal value of  `0x77` is equal to the decimal value of `119`.
c) The hexadecimal value of `0XABC` is equal to the decimal value of `2748`.

---
## exercise no. 2
a) `010E2` is a legal `floating-point` constant.
b) `32.1E+5` is a legal `floating-point` constant.
c) `0790` is an illegal constant. using the `0` at the beginning indicate that this number is going to be an `octal` value but since `9` isn't allowed in octal values, this constant is not legal in anyway.
d) `100_000` is not legal since we can not use the `_` character (underline) as a digit divider in C programming language.
e) `3.978e-2` is a legal `floating-point` constant.

---
## exercise no. 3
only the `short float` is not legal (b). all other types are legal in C.

---
## exercise no. 4
the `printf(c);`  expression is illegal since `printf`  function calls must contain conversion in the format string, but here the variable is passed to the function without any conversion or format string.

---
## exercise no. 5
the option `b` is not a legal way to write the number `65`.

---
## exercise no. 6
a) `short`
b) `short`
c) `short`
d) `long`

---
## exercise no. 7
a) `\010`
b) `\012`
c) `\015`
d) `\011`

---
## exercise no. 8
a) `\x08`
b) `\x0a`
c) `\x0d`
d) `\x09`

---
## exercise no. 9
The whole expression has the type of `int`. the character `'a'` actually has the type of char which is `int` in reality.

---
## exercise no. 10
based on what we've learned in this chapter about "integral promotion" we can assume that type of the expression would be `unsigned int`. 
let me elaborate: first the `cast` expression is applied to the variable `j`, which in turn make the type `int`. then the multiplication of `j * k` is calculated, since `j` has type `int` and `k` has type `unsigned int`, using the integral promotion the `j` value would change into `unsigned int`. then the addition operation is applied which uses integral promotion before calculating and changes variable `i`'s type into `unsigned int`. in the end our resulting expression would have the type `usigned int`.

---
## exercise no. 11
based on what we've learned in this chapter about "integral promotion" we can assume that type of the expression would be `double`. 

---
## exercise no. 12
based on what we've learned in this chapter about "integral promotion" we can explain the conversions for this expression to take place.
Our expression is `d = i + f;`. first the `i` is converted into `float` (because one of the operands of the binary addition operator has type `float`). after that, the assignment operator would convert the resulting value to `double` type in order for it to be able to match the type to the variable on the left of the assignment operator.

---
## exercise no. 13
a) `int`,  `-3`
b) `long`, `7`
c) `float`, `6.500`
d) `double`, `3.750`
e) `double`, `-1.000`
f) `int`, `6`

---
## exercise no. 14
if the fractional part of our value is out of range of the `float` precision, we might get the wrong value.

---
## exercise 15

```c
// this is the code for this exercise!
typedef int Int8    // IDK!?
```