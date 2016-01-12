# EECS 230 Homework 1

Due Thursday, January 14, at 11:59 PM

## Purpose

The primary goal of this assignment is to get you writing C++. As a secondary goal, completing this assignment will help you ensure that you have a properly configured and working C++ development environment, and that you can use the (TBD) submission system.

## Preliminaries

We have provided you with a private GitHub repository for this homework assignment, located at `https://github.com/eecs230/`*NETID*`-hw1`, where *NETID* is your six-character Northwestern NetID. For example, if your NetID were `abc123`, your HW1 repo would be at `https://github.com/eecs230/abc123-hw1`.

Because we've already forked your repository for you, you *must not* fork it on GitHub, as this would make your homework publicly readable. (Also, you will be submitting your homework via the repo we made for you.)

To start working, you need to clone a local copy of your HW1 repo. You can do this with CLion as in the lab: Choose *Checkout from Version Control* from the *VCS* menu or the ``Welcome to CLion'' window, and enter your repository URL.

## Your task

For this assigment you will write two small C++ programs. We've provided skeleton code to get you started in the `src/` subdirectory of this repository, so you needn't start from scratch.

### `convert.cpp`

Write a program `convert` that converts from inches to centimeters. Here is a sample of a working interaction, with the user input typeset in <tt><b><i>bold italic</i></b></tt>:

<pre>
    Enter length in inches:
    &gt; <b><i>12</i></b>
    12 in = 30.48 cm
</pre>

Your program should work correctly given correct input, but its behavior in the event of a user error is not specified. Here's what my solution does:

<pre>
    Enter length in inches:
    &gt; <b><i>three</i></b>
    error: You must enter a number
</pre>

### `stats.cpp`

Write a program `stats` that reads three integers from the user and then prints the smallest, the largest, and the average (mean). Here are two successful example interactions:

<pre>
    Enter three integers:
    &gt; <b><i>5 10 20</i></b>
    min: 5
    max: 20
    avg: 11.6667
</pre>

<pre>
    Enter three integers:
    &gt; <b><i>2 2 200</i></b>
    min: 2
    max: 200
    avg: 68
</pre>

If your program cannot successfully read three integers, for example because the user types a non-integer, it should exit with an error message like so:

<pre>
    Enter three integers:
    &gt; 3.5 9 10
    error: Could not read numbers
</pre>

Note that if the last number has a decimal point, C++ will read up to the decimal point and you won’t get an error. This is okay—it’s the default behavior of C++ iostreams, not a bug in your program.

## Reference

### How to exit with an error message

Error handling is a complex topic, so for now when our program encounters a situation that it's unprepared to handle, such as bad user input, it should just print an error message and exit. We'll use the function `simple_error` provided by the `eecs230` library (which is automatically included in your project):

```
    simple_error("I give up!");
```

### How to read numbers from the user

This code snippet reads a `double` into variable `var_with_bad_name` and then an `int` into variable `another_var`:

```
    double var_with_bad_name;
    int another_var;
    
    cin >> var_with_bad_name;
    cin >> another_var;
```

### How to check if reading numbers from the user worked

You can use `cin` as the test in an `if` statement---it will be true if no errors have occurred and false if there's a problem:

```
    if (! cin) {
        // Had an IO error of some kind. What do?
    }
```

(`!` means "not".)

## Grading

For this assignment, you will be graded on

 - whether your code implements the specification (functional correctness), and

 - the clarity of your code, good factoring in particular.

## Submission

TBD.
