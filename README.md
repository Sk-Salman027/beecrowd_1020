## Age in days

### Problem Statement
<p>
Read an integer value corresponding to a person's age (in days) and print it in years, months and days, followed by its respective message “ano(s)”, “mes(es)”, “dia(s)”.

Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month. In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364. This is just an exercise for the purpose of testing simple mathematical reasoning.
</p>

### Input
```c
 int days, year, month;
// take input
scanf("%d", &days);
```
### Calculate from days into year, month, days:
```c
year = days / 365; 
days %= 365;      
month = days / 30; 
days %= 30;  
```
### Output
```c
printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, days);
```

