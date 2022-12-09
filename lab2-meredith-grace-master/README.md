# CS202-Lab2

## Lab Goals
The goal of this Lab is to:
1.	Familiarize students with submitting through **git**.
2.	Allow students to create a program which uses **FileIO**.
### Important Notes:
1.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
2.  **Filename**: Save your program as ```copy.c```
## Program
If you could get me a copy of that TPS report, that would be great.

**The program should behave as follows:**  
The program should accept two filenames as command line arguments, first the input file then the output file. It should verify there are the proper amount of arguments. If there are, the input file should be copied to the output file.

Here is an example of how the program could function using the following files as input:

```
>./copy
Correct usage: 
./copy inputFile outputFile
>./copy input.txt output.txt
```
## Requirements
In addition to the main functions, your driver should have at minimum 1 more functions:  
*copy()*  
**Input Parameters**: string, string  
**Returned Output**: none  
**Functionality**: This function should accept two string filenames. The first filename should be used to open a file for reading. The second should be used to open a file for writing. Each line of the first file should be read in and copied to the second file. Finaly, the files should be closed.
## Submission details
To submit your project, you will have to use git on your VirtualBox installation:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type 
```git clone clone_URL```
3.	cd into your new assignment directory
4.	After working on your files
5.	When you’re ready, type the following commands: 
```
git add .
git commit -m “your commit message”
git push
```
## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:
Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.
Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official.
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic
dishonesty according to the code of this university. Academic dishonesty will not be tolerated and
penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
