# ATM Simulation using C++

A menu-driven ATM simulation developed in C++ for practicing basic banking operations and fundamental programming concepts.

## Features

- Check account balance
- Deposit money
- Withdraw money
- Validate deposit and withdrawal amounts
- Prevent withdrawal when the balance is insufficient
- Menu-driven user interaction
- Exit option

## Technologies Used

- C++
- Visual Studio Code
- MinGW/G++

## Concepts Demonstrated

- `while` loops
- `switch` statements
- `if-else` conditional statements
- Variables and data types
- User input using `cin`
- Console output using `cout`
- Basic arithmetic operations
- Input validation
- Menu-driven program flow

## How to Run

Compile the program:

```bash
g++ ATM_Simulation_using_CPP.cpp -o ATM_Simulation.exe
```

Run it in PowerShell:

```powershell
.\ATM_Simulation.exe
```

## Example Menu

```text
=============================
        ATM SIMULATION
=============================
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice:
```

## Example Operations

### Check Balance

```text
Enter your choice: 1
Current Balance: Rs. 10000
```

### Deposit

```text
Enter your choice: 2
Enter deposit amount: Rs. 2000
Deposit successful.
Updated Balance: Rs. 12000
```

### Withdrawal

```text
Enter your choice: 3
Enter withdrawal amount: Rs. 1500
Withdrawal successful.
Updated Balance: Rs. 10500
```

### Insufficient Balance

```text
Enter your choice: 3
Enter withdrawal amount: Rs. 20000
Insufficient balance.
```

## Project Files

- `ATM_Simulation_using_CPP.cpp` — C++ source code
- `README.md` — project documentation


