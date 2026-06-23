# C++ Foundation & Algorithmic Problem Solving Portfolio

Welcome to my comprehensive C++ repository! This repository serves as a massive practice portfolio containing a collection of console applications, algorithm simulations, mathematical functions rebuilt from scratch, and interactive text games. 

The projects demonstrate strict logic, dynamic array manipulation, structural programming concepts, security basics (cryptography/brute-force), and defensive input validation.

## 🚀 Technologies & Environment
* **Language:** C++ (ISO C++14/C++17 Standard)
* **IDE:** Visual Studio 2022
* **Operating System:** Windows (Utilizes standard win32 utilities and console manipulation)

---

## 📂 Repository Contents

Here is the complete categorized index of all **58 modules** included in this repository:

### 🎮 1. Interactive Games & Mini-Systems
* **Gym Management System** (`Gym_Management_System.cpp`): A console-based menu-driven application for managing gym memberships, simulates local currency payments (DA), and processes subscription pricing packages.
* **Math Quiz Game** (`Math_Quiz_Game.cpp`): An interactive educational game that generates randomized math questions across various difficulty levels, tracks user answers, and evaluates final scores.
* **Stone Paper Scissors Game** (`Stone_Paper_Scissors_Game.cpp`): A fully implemented Rock-Paper-Scissors game played against an AI opponent, tracking rounds, wins, losses, and announcing the ultimate champion.

### 🔐 2. Cryptography, Passwords & Key Generators
* **Advanced Key Generator** (`Advanced_Key_Generator.cpp`): A tiered token generation system that utilizes character isolation through enumerations to build complex, segmented license keys.
* **Generate Keys In Array** (`Generate_Keys_In_Array.cpp`): An application that generates multiple cryptographic license keys and stores them efficiently inside an array structure for bulk operations.
* **Random Password Generator** (`Random_Password_Generator.cpp`): Generates strong, highly randomized passwords by combining capital letters, small letters, digits, and special characters.
* **String Encryption Decryption** (`String_Encryption_Decryption.cpp`): Demonstrates basic cryptography by masking and unmasking string data using custom character-shifting techniques.
* **Brute Force 3 Letter Password** (`Brute_Force_3_Letter_Password.cpp`): A security simulation that cracks a 3-letter password by exhaustively iterating through all possible combinations from AAA to ZZZ.
* **Guess 3 Letter Password** (`Guess_3_Letter_Password.cpp`): An algorithmic implementation that systematically checks a pre-defined 3-letter key, analyzing matching attempts and reporting optimization statistics.

### 📊 3. Advanced Array Processing & Sorting Algorithms
* **Shuffle and Sort Array** (`Shuffle_And_Sort_Array.cpp`): Initializes a sequential array, randomizes the order, and re-orders it back using a custom-built Selection Sort algorithm.
* **Shuffle Ordered Array** (`Shuffle_Ordered_Array.cpp`): Features dynamic random index swapping to break up an array initialized with consecutive integers from 1 to N.
* **Append to Fixed Array** (`Append_To_Fixed_Array.cpp`): Demonstrates semi-dynamic array insertion, updating current array lengths using reference parameters (`&Length`) with boundary checks.
* **Dynamically Add Elements To Array** (`Dynamically_Add_Elements_To_Array.cpp`): Allows users to continuously feed inputs into a fixed-size array until they choose to terminate the loop.
* **Array Statistics Calculator** (`Array_Statistics_Calculator.cpp`): Generates a random array and applies modular functions to retrieve the absolute maximum, minimum, sum, and accurate floating-point average.
* **Array Min Max Sum** (`Array_Min_Max_Sum.cpp`): A streamlined analytical module focused purely on discovering extreme values (Min/Max) and cumulative metrics within a set of data.
* **Check Palindrome Array** (`Check_Palindrome_Array.cpp`): Assesses data symmetry by comparing elements from both ends of an array inward to verify if it reads the same backwards.
* **Copy Distinct Numbers To Array** (`Copy_Distinct_Numbers_To_Array.cpp`): Filters source array data to extract and copy unique, non-repeating numbers into a secondary destination array.
* **Copy Array And Filter Primes** (`Copy_Array_And_Filter_Primes.cpp`): Iterates through an array, subjects each element to a primality test, and duplicates only prime integers into a separate array.
* **Filter Prime Numbers Into Array** (`Filter_Prime_Numbers_Into_Array.cpp`): Isolates prime numbers from a raw randomized sequence and copies them into a targeted dataset.
* **Filter And Print Odd_Numbers** (`Filter_And_Print_Odd_Numbers.cpp`): Scans data elements and immediately pushes odd integers to the console streaming output.
* **Copy Array From Another** (`Copy_Array_From_Another.cpp`): Standard algorithmic demonstration of duplicating contiguous memory data between array structures.
* **Copy Array To Another** (`Copy_Array_To_Another.cpp`): Parallel implementation focused on data synchronization and array mirroring mechanics.
* **Copy Array Using Add Element** (`Copy_Array_Using_Add_Element.cpp`): Utilizes an abstract push-back function to copy elements step-by-step while monitoring array boundaries.
* **Reverse Array Into Another** (`Reverse_Array_Into_Another.cpp`): Transfers array indices inversely, placing the last element of the source array into the first slot of the destination array.
* **Search For Number In Array** (`Search_For_Number_In_Array.cpp`): Executes a linear search algorithm to locate user-specified values, returning boolean flags or index coordinates.
* **Check Number In Array** (`Check_Number_In_Array.cpp`): Verifies the presence of specific keys within integer collections.
* **Find Max And Min In Array** (`Find_Max_And_Min_In_Array.cpp`): Performs simultaneous single-pass detection of both upper and lower boundaries in an arbitrary data group.
* **Find Max Number In Array** (`Find_Max_Number_In_Array.cpp`): Dedicated function utilizing traditional conditional trapping to locate the largest array element.
* **Read And Print Array** (`Read_And_Print_Array.cpp`): Essential I/O modular pipeline designed to read dimensions, fill slots, and cleanly format the output array layout.

### 🔢 4. Data Counting, Frequency & Verification
* **Count Even Numbers In Array** (`Count_Even_Numbers_In_Array.cpp`): Scans datasets using the mathematical modulo operator (`% 2 == 0`) to count even integers.
* **Count Odd Numbers In Array** (`Count_Odd_Numbers_In_Array.cpp`): Isolates and counts numbers failing the even-integer divisibility check (`% 2 != 0`).
* **Count Negative Numbers In Array** (`Count_Negative_Numbers_In_Array.cpp`): Validates signed values within a dataset, tallying up values falling strictly below zero (`< 0`).
* **Count Number Repetitions In Array** (`Count_Number_Repetitions_In_Array.cpp`): Measures how many times a given target integer repeats across the entire array block.
* **Count Number Repetitions** (`Count_Number_Repetitions.cpp`): A standalone scalar tracking utility designed to record instance frequencies.
* **Count Digit Frequency** (`Count_Digit_Frequency.cpp`): Deconstructs large integers to analyze how frequently an isolated digit occurs within the number structure.

### 🧮 5. Mathematics, Primes & Digit Manipulations
* **Sum Of Digits** (`Sum_Of_Digits.cpp`): Extracts individual units from a positive integer through continuous division and modulo steps, computing their cumulative sum.
* **Reverse Positive Number** (`Reverse_Positive_Number.cpp`): Mathematically reverses digit positioning (e.g., transforming 1234 into 4321) using pure numerical algorithms.
* **Check Palindrome Number** (`Check_Palindrome_Number.cpp`): Combines digits reversal logic with equality checks to determine if an integer is a numeric palindrome.
* **Check Perfect Number** (`Check_Perfect_Number.cpp`): Validates if a number is equal to the sum of its proper positive divisors (excluding itself), such as 6 or 28.
* **Print Perfect Numbers From 1 To N** (`Print_Perfect_Numbers_From_1_To_N.cpp`): Runs nested conditional loops to list all perfect numeric structures within a user-defined scope.
* **Print Prime Numbers From 1 To N** (`Print_Prime_Numbers_From_1_To_N.cpp`): Evaluates ranges for primality, delivering clean sequences of prime integers up to ceiling $N$.
* **Print Digits In Order With Validation** (`Print_Digits_In_Order_With_Validation.cpp`): Intercepts inputs, rejects malicious character strings, and sequences digits from left to right.
* **Print Digits In Order** (`Print_Digits_In_Order.cpp`): Isolates individual integer places and presents them in their standard reading order.
* **Print Digits In Reverse** (`Print_Digits_In_Reverse.cpp`): Uses basic stack-like modular mathematics to peel and print digits starting from the ones column.
* **Print Multiplication Table** (`Print_Multiplication_Table.cpp`): Uses basic loops to render neat, formatted $1 \times 1$ to $10 \times 10$ grids for mathematical lookup.

### 📐 6. Rebuilding Custom Standard Functions (No Math Header)
* **Custom Sqrt Function** (`Custom_Sqrt_Function.cpp`): Approximates square roots using pure algorithmic logic, bypassing the standard library's `<cmath>` `sqrt()`.
* **Custom Round Function** (`Custom_Round_Function.cpp`): Manually manages decimal points to round floating-point values to their closest whole integer counterparts.
* **Custom Ceil Function** (`Custom_Ceil_Function.cpp`): Replicates ceiling operations, forcing floating-point elements up to the next highest immediate integer.
* **Custom Floor Function** (`Custom_Floor_Function.cpp`): Cuts off fraction trailing, dropping floating values to the nearest lower bounding whole number.
* **Custom Absolute Value** (`Custom_Absolute_Value.cpp`): Employs basic sign bit extraction to convert negative integers into their absolute positive forms.
* **Random Number In Range** (`Random_Number_In_Range.cpp`): Normalizes raw pseudorandom yields into strict user-guided intervals ($[Min, Max]$).
* **Generate Multiple Random Numbers** (`Generate_Multiple_Random_Numbers.cpp`): Exercises system timers to continuously seed and fire random integers.

### ✍️ 7. CLI Patterns & Character Streams
* **Print Capital And Small Letters** (`Print_Capital_And_Small_Letters.cpp`): Iterates through ASCII code tables to output uppercase ($65-90$) and lowercase ($97-122$) alphabet tables.
* **Print Letter Pattern** (`Print_Letter_Pattern.cpp`): Uses nested indexing loops to output escalating right-angle geometric patterns built out of alphabetic letters.
* **Inverted Letter Pattern** (`Inverted_Letter_Pattern.cpp`): Renders descending geometric character blocks changing layout per tier.
* **Print Number Pattern** (`Print_Number_Pattern.cpp`): Creates structured visual pyramids using numerical sequences mapped against step heights.
* **Print Inverted Number Pattern** (`Print_Inverted_Number_Pattern.cpp`): Reverses triangle heights, rendering decreasing line sequences.

---

## 🛠️ Key Coding Practices Demonstrated
* **Input Failure Sanitization:** Heavily leverages standard validation logic (`cin.fail()`, `cin.clear()`, and `cin.ignore()`) to safeguard apps from crashes caused by illegal inputs.
* **Pure Functional Separation:** Follows strict programming separation principles; operations compute and return values, while standard I/O is contained separately.
* **Memory Safety Constraints:** Works safely inside fixed array partitions, utilizing exact pointer tracking parameters to completely mitigate buffer overflow risks.

## 👤 Author
* **Dehane Oussama** - *Law Student & Passionate Software Engineer*
