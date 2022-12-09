# ProgrammingAssignment2

## Project Goals
The goal of this project is to:
1.	Continued use of **makefiles**.
2.  Provide practice with new **class** building skills.
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For example, do not change the text from 
“Correct usage: ” to “correct”. 
Your assignment will be auto-graded and any changes in formatting will result in a loss in the grade.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
## Program
Your project should include the following files:
```
- driver.cpp
- student.cpp
- student.h
- makefile  
```
Your executable should be named ```student_mgmt```
## Programming Problem
Write a program for loading student information from a file. The name of the text file should be provided as a command line argument. If a filename is not provided, an error message should be displayed to the user. If the file cannot be open for reading, an error message should be displayed to the user.

If the file can be opened for reading, each student should be read from the file. The program should display the students to the screen. Finally, the program should then find the student with the highest GPA and display that student to the screen.

Here is an example of how the program could function using the following students.txt file as input:
```
516485 Keith Erin 3.47
854747 Lewis Joe 3.99
123456 Baker Anita 3.2
987654 Sites Seymour 2.65
258963 Butts Sandy 3.87
```
```
>./student_mgmt
Correct usage: 
./student_mgmt filename
>./student_mgmt poem.txt
Sorry, could not open poem.txt for reading
>./student_mgmt students.txt
First   Last    Number
======================
Erin    Keith   516485
Joe     Lewis   854747
Anita   Baker   123456
Seymour Sites   987654
Sandy   Butts   258963

The student with the highest gpa is: Joe Lewis
```
## Requirements
```
driver.cpp

```
*main()*  
**Functionality**: The main function should check for the correct number of command line arguments and display an error message (including the program name) if necessary. It should load the students from the file. If there are students, it should then display them to the screen. Finally, it should find the student with the highest GPA and display it to the screen. 

In addition to the main functions, your driver should have at minimum 3 more functions:

*getStudents()*  
**Input Parameters**: integer maximum size of the array, array of Students, string filename  
**Returned Output**: integer number of Students stored in the array  
**Functionality**: This function should accept a filename, an array of Students for storing each of the students, and a size parameter for the array of students. It should attempt to open the input file for reading. If it cannot open the input file for reading, it should display an error message (including the file name). If it can open the input file for reading, it should get each of the students from the file one at a time and store it into the array of Students. Finally, it should return the number of students it successfully pulled from the file.

*findMaxStudent()*  
**Input Parameters**: integer number of students, array of Students  
**Returned Output**: Student
**Functionality**: This function should accept an array of Students containing all the studnets. It should iterate through each Student to find the one which has the highest GPA. That Student should be returned to the calling function.

*printStudents()*  
**Input Parameters**: integer number of students, array of Students  
**Returned Output**: none  
**Functionality**: This function should display a table header and then each of the students available in the Student array.
```
students.h
```
**Functionality**: This file should contain the definition for the Student class, which includes the following attributes:  
```
int number
string firstName
string lastName
float gpa
```
```
students.cpp
```
**Functionality**: This file should contain the function definitions for the following functions:

*Constructors*  
- default constructor
- parameterized contructor
- copy constructor 

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute. 

*print()*  
**Input Parameters**: none  
**Returned Output**: none  
**Functionality**: This function should display the Student firstName in a field width of 8 left justified, lastName in a field width of 8 left justified, and number in a field width of 6 left justified. For more information look here: http://www.cplusplus.com/reference/ios/left/ 

## Submission details
To submit your project, you will have to use git on your VirtualBox installation:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type 
```git clone clone URL```
3.	cd into your new assignment directory
4.	After working on your files
5.	When you’re ready, type the following commands: 
```
git add .
git commit -m “a descriptive message!”
git push
```
## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:
Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.
Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official.
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic
dishonesty according to the code of this university. Academic dishonesty will not be tolerated and
penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
