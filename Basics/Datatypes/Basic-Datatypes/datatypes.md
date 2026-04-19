# Data Types Available in C++

## Only valid C++ data types are included, with their usual size in bytes

+--------------------+---------------------------+
| Data Type          | Size (in bytes)           |
+--------------------+---------------------------+
| char               | 1 byte                    |
| int                | 4 bytes                   |
| signed int         | 4 bytes                   |
| unsigned int       | 4 bytes                   |
| short int          | 2 bytes                   |
| long int           | 4 or 8 bytes              |
| signed long int    | 4 or 8 bytes              |
| unsigned long int  | 4 or 8 bytes              |
| float              | 4 bytes                   |
| double             | 8 bytes                   |
| long double        | 8 or 16 bytes             |
| string             | Implementation dependent* |
+--------------------+---------------------------+

##  string size represents the object size, not the length of the text stored.

## ⚠️ Note: Sizes may vary depending on compiler and system architecture.

---

# ❌ Data Types NOT Available in C++ (from the given list)

## The following data types do NOT exist in C++ and cannot be used:

unsigned float
signed float
short float
long float
unsigned long float
signed long float
unsigned double
signed double
short double
unsigned long double
signed long double

---

# 📝 Important Notes

Signed / unsigned are applicable only to integer types
Floating-point types (float, double, long double) are signed by default
C++ supports only three floating types:
float
double
long double

---

# One-Line Conclusion

C++ supports signed and unsigned integer types, but does not support signed or unsigned floating-point types.