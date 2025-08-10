# Multidimensional-Arrays-In-CPP
## Aim
To study and implement different multi-dimensional arrays/ matrix operations in C++.
## Tools
Visual Studio Code 
## Theory 
A multi-dimensional array can be defined as an array that has more than one dimension. Having more than one dimension means that it can grow in multiple directions. Some popular multidimensional arrays include 2D arrays which grows in two dimensions, and 3D arrays which grows in three dimensions.

2D Arrays:

<img width="622" height="343" alt="image" src="https://github.com/user-attachments/assets/b7525a93-2969-476b-a2a9-2ae7c019588c" />

3D Arrays:
<img width="1107" height="551" alt="image" src="https://github.com/user-attachments/assets/068d6385-1d64-49b8-bc27-1182861781ff" />

## Algorithms
### Addition of 2 matrices
1. Start.

2. Input number of rows and columns for Matrix 1 → r1, c1.

3. Input number of rows and columns for Matrix 2 → r2, c2.

4. Check if r1 != r2 or c1 != c2:

5. If true → print “Invalid rows or columns.” and exit.

6. Declare 2D arrays m1[r1][c1] and m2[r2][c2].

7. Input elements of Matrix 1.

8. Display Matrix 1.

9. Input elements of Matrix 2.

10. Display Matrix 2.

11.  corresponding elements of both matrices and print the result.

12. End.
### Multiplication of 2 matrices
1. Start

2. Input Dimensions

-Get the number of rows (r1) and columns (c1) for the first matrix (M1).

-Get the number of rows (r2) and columns (c2) for the second matrix (M2).

3. Validate Dimensions

-Check if the number of columns in M1 (c1) is equal to the number of rows in M2 (r2).

-If c1 is not equal to r2, display an error message and terminate the algorithm, as multiplication is not possible.

4. Input Matrix Elements

-Read the elements for the r1 x c1 matrix M1.

-Read the elements for the r2 x c2 matrix M2.

5. Initialize Result Matrix

-Create a result matrix of size r1 x c2.

-Initialize all elements of the result matrix to 0.

6. Perform Multiplication

-Use three nested loops to calculate the product:

--For each row i from 0 to r1-1:

--For each column j from 0 to c2-1:

--For each index k from 0 to c1-1:

-Calculate: result[i][j] = result[i][j] + (m1[i][k] * m2[k][j])

7. Output Result-Display the elements of the final result matrix.

8. End
### Adding diagonal elements of a matrix
1. Start

2. Input number of rows r1 and columns c1.

3. Declare matrix m[r1][c1].

4. Input all elements of the matrix.

5. Display the matrix.

6. Initialize sum = 0.

7. For each row i from 0 to r1 - 1:

8. Add the element at the main diagonal m[i][i] to sum.

9. Display the value of sum.

10. End
### Transpose of a matrix
1. Start

2. To input Dimensions prompt the user to enter the number of rows and columns.

3. Store these values in variables rows and cols.

4. Declare Matrices->Create an original matrix, m1, with dimensions rows x cols. And create a transpose matrix, t1, with swapped dimensions cols x rows.

5. Prompt the user to enter the elements for the matrix.

6. Using nested for loops, read each element and store it in the original matrix m1.

7. Display the Original Matrix and print the contents of m1 to the screen for verification.

8. For computing the Transpose iterate through each element of the original matrix m1 using nested loops (row i, column j).

9. For each element m1[i][j], assign its value to the transposed position in the second matrix: t1[j][i] = m1[i][j].

10. Display the Transpose Matrix

11. Print the contents of the newly computed transpose matrix t1.

12. End
## Conclusion
We learnt how to perform some basic mathematical operations on 1 or more matrices.



(Content reference from : https://www.geeksforgeeks.org/cpp/cpp-multidimensional-array/)
