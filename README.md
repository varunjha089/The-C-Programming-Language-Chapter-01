# The C Programming Language
#### **by Brian W. Kernighan, Dennis M. Ritchie**

## Calculating the fahrenheit-celsius

Here we are calculating the fahrenheit to celsius using various datatype and precision.

### Calculating the fahrenheit-celsius using while loop.

#### Integer arithmetic

```c
int main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = -40;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%d \t %d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
```

#### Floating point arithmetic

```c
int main() {
    float fahr, celsius;                                    // Changed the datatype from int to float
    ...
    ...
    while (fahr <= upper){
        celsius = (5.0 * (fahr - 32.0) / 9.0);              // converted integers to floating point values
        printf("%3.0f \t %6.1f\n", fahr, celsius);          // precision expression changed
        ...
    }
    ...
}
```

Some important notes on precision

```c
%d      // Print as decimal integer

%6d     // Print as decimal integer, at least 6 characters wide

%f      // Print as floating point

%6f     // Print as floating point, at least 6 characters wide

%.2f    // Print as floating point, 2 character after decimal point

%6.2f   // Print as floating point, at least 6 character wide and 2 character after decimal point
```

### Calculating the fahrenheit-celsius using for loop

```c
int main() {
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20){
        printf("%3d \t %6.1f \n", fahr, (5.0 /9.0)*(fahr-32));
    }
    return 0;
}
```

## Exercises for Chapter 01

| No. | Question | Status |
|--- |--- |--- |
| Exercise 1-1. |  | X |
| Exercise 1-2. |  | X |
| Exercise 1-3. | Modify the temperature conversion program to print a heading above table. | X |
| Exercise 1-4. | Write a program to print the corresponding Celsius to Fahrenheit table. | X |
| Exercise 1-5. |  | X |
| Exercise 1-6. |  | X |
| Exercise 1-7. |  | X |
| Exercise 1-8. |  | X |
| Exercise 1-9. |  | X |
| Exercise 1-10. |  | X |
| Exercise 1-11. |  | X |
| Exercise 1-12. |  | X |
| Exercise 1-13. |  | X |
| Exercise 1-14. |  | X |
| Exercise 1-15. |  | X |
| Exercise 1-16. |  | X |
| Exercise 1-17. |  | X |
| Exercise 1-18. |  | X |
| Exercise 1-19. |  | X |
| Exercise 1-20. |  | X |
| Exercise 1-22. |  | X |
| Exercise 1-23. |  | X |
| Exercise 1-25. |  | X |
| Exercise 1-25. |  | X |
