/* 
 * CS:APP Data Lab 
 * 
 * Jack Li
 * 9 April 2018
 * CS 33 (1D)
 * 
 * bits.c - Source file with your solutions to the Lab.
 *          This is the file you will hand in to your instructor.
 *
 * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 * compiler. You can still use printf for debugging without including
 * <stdio.h>, although you might get a compiler warning. In general,
 * it's not good practice to ignore compiler warnings, but in this
 * case it's OK.  
 */

#if 0
/*
 * Instructions to Students:
 *
 * STEP 1: Read the following instructions carefully.
 */

You will provide your solution to the Data Lab by
editing the collection of functions in this source file.

INTEGER CODING RULES:
 
  Replace the "return" statement in each function with one
  or more lines of C code that implements the function. Your code 
  must conform to the following style:
 
  int Funct(arg1, arg2, ...) {
      /* brief description of how your implementation works */
      int var1 = Expr1;
      ...
      int varM = ExprM;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

  Each "Expr" is an expression using ONLY the following:
  1. Integer constants 0 through 255 (0xFF), inclusive. You are
      not allowed to use big constants such as 0xffffffff.
  2. Function arguments and local variables (no global variables).
  3. Unary integer operations ! ~
  4. Binary integer operations & ^ | + << >>
    
  Some of the problems restrict the set of allowed operators even further.
  Each "Expr" may consist of multiple operators. You are not restricted to
  one operator per line.

  You are expressly forbidden to:
  1. Use any control constructs such as if, do, while, for, switch, etc.
  2. Define or use any macros.
  3. Define any additional functions in this file.
  4. Call any functions.
  5. Use any other operations, such as &&, ||, -, or ?
  6. Use any form of casting.
  7. Use any data type other than int.  This implies that you
     cannot use arrays, structs, or unions.

 
  You may assume that your machine:
  1. Uses 2s complement, 32-bit representations of integers.
  2. Performs right shifts arithmetically.
  3. Has unpredictable behavior when shifting an integer by more
     than the word size.

EXAMPLES OF ACCEPTABLE CODING STYLE:
  /*
   * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
   */
  int pow2plus1(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     return (1 << x) + 1;
  }

  /*
   * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
   */
  int pow2plus4(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     int result = (1 << x);
     result += 4;
     return result;
  }

FLOATING POINT CODING RULES

For the problems that require you to implent floating-point operations,
the coding rules are less strict.  You are allowed to use looping and
conditional control.  You are allowed to use both ints and unsigneds.
You can use arbitrary integer and unsigned constants.

You are expressly forbidden to:
  1. Define or use any macros.
  2. Define any additional functions in this file.
  3. Call any functions.
  4. Use any form of casting.
  5. Use any data type other than int or unsigned.  This means that you
     cannot use arrays, structs, or unions.
  6. Use any floating point data types, operations, or constants.


NOTES:
  1. Use the dlc (data lab checker) compiler (described in the handout) to 
     check the legality of your solutions.
  2. Each function has a maximum number of operators (! ~ & ^ | + << >>)
     that you are allowed to use for your implementation of the function. 
     The max operator count is checked by dlc. Note that '=' is not 
     counted; you may use as many of these as you want without penalty.
  3. Use the btest test harness to check your functions for correctness.
  4. Use the BDD checker to formally verify your functions
  5. The maximum number of ops for each function is given in the
     header comment for each function. If there are any inconsistencies 
     between the maximum ops in the writeup and in this file, consider
     this file the authoritative source.

/*
 * STEP 2: Modify the following functions according the coding rules.
 * 
 *   IMPORTANT. TO AVOID GRADING SURPRISES:
 *   1. Use the dlc compiler to check that your solutions conform
 *      to the coding rules.
 *   2. Use the BDD checker to formally verify that your solutions produce 
 *      the correct answers.
 */


#endif
/* 
 * negate - return -x 
 *   Example: negate(1) = -1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 5
 *   Rating: 2
 */
int negate(int x) {
  return ~x + 1; //two's complement negation
}
/* 
 * bitAnd - x&y using only ~ and | 
 *   Example: bitAnd(6, 5) = 4
 *   Legal ops: ~ |
 *   Max ops: 8
 *   Rating: 1
 */
int bitAnd(int x, int y) {
   return ~(~x | ~y); //De Morgan's law
}
/* 
 * anyOddBit - return 1 if any odd-numbered bit in word set to 1
 *   Examples anyOddBit(0x5) = 0, anyOddBit(0x7) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 2
 */
int anyOddBit(int x) {
    //since 0xaa is made up of the bit pattern 10101010, masking it with a 
    //byte sequence allows us to detect any odd-numbered bit in it that is
    // a 1. NOTE: For the spec's purposes, each bit is 1-indexed, NOT 
    //0-indexed, and the count starts from MSB to LSB.
    int mask = 0xaa; 
    //byten, 1 <= n <= 4, where 1 is LSB and 4 is MSB
    int byte1 = x & mask; //check for odd bits in byte 1
    int byte2 = (x >> 8) & mask; //check for odd bits in byte 2
    int byte3 = (x >> 16) & mask; //check for odd bits in byte 3
    int byte4 = (x >> 24) & mask; //check for odd bits in byte 4
    //The tricky part was figuring out how to return 1 in case any of the 
    //bytes has at least one odd bit that is a 1. The idea is to perform 
    //a bitwise OR to see if the mask detected any odd bit 1's in all 4 
    //bytes. We can use the fact that the ! operator returns either a 1 
    //or 0 only so performing !! on any non-zero integer will produce a 1,
    //indicating the presence of at least one odd-bit 1 or 0, which indicates
    //no odd-bit 1's in x.
    return !!(byte1 | byte2 | byte3 | byte4);
}
/* 
 * divpwr2 - Compute x/(2^n), for 0 <= n <= 30
 *  Round toward zero
 *   Examples: divpwr2(15,1) = 7, divpwr2(-33,4) = -2
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 2
 */
int divpwr2(int x, int n) {
    //This function is very similar to the one in lab0. The basic approach
    //is to add an appropriate bias when x < 0 due to division rounding 
    //towards negative infinity. 
    int sign = x >> 31; //see if x is negative
    //For nonnegative  numbers, the following expression will do nothing, as 
    //most significant bit is 0, adding a bias of 0. But for negative values,
    //this the sign will be 1 and thus the bias is computed as 2 to the power
    //power of n - 1.
    x += (((sign & 0x1) << n) + (sign));
    return (x >> n); 
}
/* 
 * addOK - Determine if can compute x+y without overflow
 *   Example: addOK(0x80000000,0x80000000) = 0,
 *            addOK(0x80000000,0x70000000) = 1, 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 20
 *   Rating: 3
 */
int addOK(int x, int y) {
    int xMSBit = (x >> 31) & 0x1; 
    int yMSBit = (y >> 31) & 0x1;
    int sumMSBit = ((x + y) >> 31) & 0x1;
    //x+y over/underflows if:
    //1.they're both very negative values; and the result is nonnegative
    //2. they're both very large positive balues and the result is negative
    return !((sumMSBit ^ xMSBit) & (sumMSBit ^ yMSBit));
}
/* 
 * isGreater - if x > y  then return 1, else return 0 
 *   Example: isGreater(4,5) = 0, isGreater(5,4) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 *   Rating: 3
 */
int isGreater(int x, int y) {
    int equal = !(x ^ y);
    int difference = x + ~y + 1;  // x - y
    int xMSBit = (x >> 31) & 0x1; 
    int yMSBit = (y >> 31) & 0x1;
    int sameSign = !(xMSBit ^ yMSBit); 
    int diffMSBit = (difference >> 31) & 0x1;
    //x > y if:
    //1. x and y are not equal
    //2. x is either the same sign as y and their difference is positive
    //3. x is positive and y is negative. We can simply use y's most 
    //significant bit to indicate x is greater. This also takes into 
    //account of underflow.
    //Previous logic alos applies for the case where x is negative and 
    //y is positive. Overflow is nicely and subtlely taken into account
    //as well.
    return ((!diffMSBit) & sameSign & (!equal)) | (yMSBit & (!sameSign));
}
/* 
 * replaceByte(x,n,c) - Replace byte n in x with c
 *   Bytes numbered from 0 (LSB) to 3 (MSB)
 *   Examples: replaceByte(0x12345678,1,0xab) = 0x1234ab78
 *   You can assume 0 <= n <= 3 and 0 <= c <= 255
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 10
 *   Rating: 3
 */
int replaceByte(int x, int n, int c) {
    //since we are dealing with bytes here, we must multiply n by 8 to
    //shift correctly
    int shiftAmt = n << 3; 
    int nByte = (x >> (shiftAmt) & 0xff) << shiftAmt; //obtain target byte to be replaced
    c <<= shiftAmt; //shift the replacing byte to correct byte location
    //XOR nicely zeroes out the target byte without affecting any of the other
    //bytes, whether x is signed or not. 
    return (x ^ nByte) | c;  
}
/* 
 * tc2sm - Convert from two's complement to sign-magnitude 
 *   where the MSB is the sign bit
 *   You can assume that x > TMin
 *   Example: tc2sm(-5) = 0x80000005.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 4
 */
int tc2sm(int x) {
  int sign = (x >> 31);
  int signExtension = sign << 31;
  int negation = ~x + 1;
  //If x is negative, we need to obtain its absolute value (if it doesn't 
  //overflow). and then OR it with the approriate sign extension given by 
  //left shifting by 31. AND with sign takes care of cases where x is positive
  //in which we use the fact that negation of sign produces the mask 0xffffffff
  //which nicely maintains the original positive value of x. This also prevents
  //erroneously negating a positive value, which will generate the wrong sign bit.
  return ((signExtension | negation) & sign) | (~sign & x);
}
