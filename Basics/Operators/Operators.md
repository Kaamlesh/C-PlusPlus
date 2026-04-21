📂 Operators Covered
Arithmetic Operators
Unary Operators
Relational Operators
Logical Operators
Assignment Operators
Bitwise Operators
Conditional (Ternary) Operator
1️⃣ Arithmetic Operators

Arithmetic operators are used to perform basic mathematical operations.

Operator	Description
+	Addition
-	Subtraction
*	Multiplication
/	Division
%	Modulus (remainder)

Example:
If a = 10 and b = 3

a + b = 13
a % b = 1
2️⃣ Unary Operators

Unary operators operate on a single variable.

🔹 Unary Minus (-)
Reverses the sign of a number
Example: x = 5 → -x = -5
🔹 Increment Operator (++)

Used to increase a value by 1.

✅ Pre-Increment (++x)
First increments the value
Then uses the updated value

Example:

int x = 5;
++x;   // x becomes 6

✔ Value changes before it is used or printed

✅ Post-Increment (x++)
First uses the current value
Then increments the value

Example:

int x = 5;
x++;   // prints 5, then x becomes 6

✔ Value changes after it is used or printed

🔹 Decrement Operator (--)

Used to decrease a value by 1.

✅ Pre-Decrement (--x)
First decrements the value
Then uses the updated value
int x = 5;
--x;   // x becomes 4
✅ Post-Decrement (x--)
First uses the current value
Then decrements the value
int x = 5;
x--;   // prints 5, then x becomes 4
⭐ Easy Way to Remember
Pre → Change first, then use
Post → Use first, then change
3️⃣ Relational Operators

Relational operators are used to compare two values.
They return true (1) or false (0).

Operator	Meaning
<	Less than
<=	Less than or equal
>	Greater than
>=	Greater than or equal
==	Equal to
!=	Not equal

Example:
10 < 20 → 1 (true)

4️⃣ Logical Operators

Logical operators are used to combine conditions.

Operator	Meaning
&&	Logical AND
`	
!	Logical NOT

Example:
(x < y && x > 0) → true only if both conditions are true

5️⃣ Assignment Operators

Assignment operators are used to assign or update values.

Operator	Example	Meaning
=	a = 10	Assign value
+=	a += 5	a = a + 5
-=	a -= 3	a = a - 3
*=	a *= 2	a = a * 2
/=	a /= 4	a = a / 4
%=	a %= 3	a = a % 3
6️⃣ Bitwise Operators

Bitwise operators work at the binary (bit) level.

Operator	Meaning
&	Bitwise AND
`	`
^	Bitwise XOR
~	Bitwise NOT
<<	Left shift
>>	Right shift

Example:
5 & 3 = 1
(Binary: 0101 & 0011 = 0001)

7️⃣ Conditional (Ternary) Operator ? :

The conditional operator is a short form of if–else.

🔹 Syntax
condition ? value_if_true : value_if_false;
🔹 Example
max = (a > b) ? a : b;
If condition is true → first value is chosen
If condition is false → second value is chosen

✔ Supports expressions and nested conditionsgit