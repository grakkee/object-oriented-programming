# ProgrammingAssignment3

## Project Goals
The goal of this project is to:
1.	Continued use of **makefiles**.
2.  Continued use of **class** building skills.
3.  Provide practice with new **class aggregation** skills.
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
- course.cpp
- course.h
- makefile  
```
Your executable should be named ```student_mgmt```
## Programming Problem
Write a program for loading student information from a file. The name of the text file should be provided as a command line argument. If a filename is not provided, an error message should be displayed to the user. If the file cannot be open for reading, an error message should be displayed to the user.

If the file can be opened for reading, each student should be read from the file. The program should display the menu to the screen. Here's a video demonstrating correct usage of the executable: https://youtu.be/q6Qql28My68.

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a “permission denied” error when attempting to run the executable, type ```chmod u+x studentExecutable``` into the terminal and try running the executable again  
## Requirements
```
driver.cpp

```
*main()*  
**Functionality**: The main function should check for the correct number of command line arguments and display an error message (including the program name) if necessary. It should load the students from the file. It should display the program menu and get the user's choice. Based on the user's choice, it should call the appropriate functions and display the appropriate output.  

If the user chooses Option 1, the program should display the student table to the screen. If the user chooses Option 2, it should get the number of the chosen student from the user and allow the user to add classes to that student's schedule. If the user chooses Option 3, it should get the number of the chosen student from the user and display that student's schedule. If the user chooses Option 4, it should find the student with the largest GPA and display that sutdent to the screen.

In addition to the main functions, your driver should have at minimum 6 more functions:

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

*getMenuChoice()*  
**Input Parameters**: none    
**Returned Output**: integer user choice  
**Functionality**: This function should display the program title and menu options. It should get the user's menu choice and return it to the calling function.

*getStudentOption()*  
**Input Parameters**: integer number of students, array of Students  
**Returned Output**: integer student option  
**Functionality**: This function should display a table header and then each of the students available in the Student array, along with an option number. It should get the user's student option and return it to the calling function.  

*addCourses()*  
**Input Parameters**: a Student  
**Returned Output**: none  
**Functionality**: This function should accept a student as a parameter. If this student has less than the maximum number of classes then we can add courses, otherwise it should display that the student's schedule if full. When adding courses, the user should be prompted for the number of courses to add. If the number of new courses combined with the current number of courses is less than the maximum number of courses, then you can prompt the user for the course information for each course being adding to the schedule, otherwise display the numer of remaining courses to the user.  
```
student.h
```
**Functionality**: This file should contain the definition for the Student class, which includes the following attributes:  
```
int number
int numCourses
string firstName
string lastName
float gpa
Course schedule array
```
```
student.cpp
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
Note: Do not create setter functions for the Schedule and numCourses attributes. These attributes are set when adding classes.

*print()*  
**Input Parameters**: none  
**Returned Output**: none  
**Functionality**: This function should display the Student firstName, then the lastName with a space in between.

*printSchedule()*  
**Input Parameters**: none  
**Returned Output**: none  
**Functionality**: This function should display the Student's schedule. For the number of Courses in the schedule, it should print that course.

*addCourse()*  
**Input Parameters**: Course  
**Returned Output**: true or false for success  
**Functionality**: This function accept a Course as a parameter. If the current number of courses is less than the maximum number of courses, the new Course should be saved in the next available spot in the Schedule array and the current number of courses should be increased. If a course was added the function should return true, otherwise it should return false. 

```
course.h
```
**Functionality**: This file should contain the definition for the Course class, which includes the following attributes:  
```
string prefix
int number
string name
```
```
course.cpp
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
**Functionality**: This function should display the Course prefix and number, a colon, then the Course name. 

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
