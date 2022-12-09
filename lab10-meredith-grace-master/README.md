# CS202-Lab10

## Lab Goals
The goal of this Lab is to:
1.	Allow students to practice creating **data structures**.
### Important Notes:
1.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
2. **Executable**: The executable should be named ```lab10```  
## Program
Papa's got a brand new bag.

The following files have been provided:
```
- driver.cpp  
- bag.h
- makefile  
```

**You are responsible for implementing a Bag class using an array**  
Given the BagInterface class, you should implement an ArrayBag class so that it can be used by the main driver.

## Requirements
```
arraybag.h
```
**Functionality**: Implement the interface functions using an array to store the data items.  
```
arraybag.cpp
```
Also include the following private function:  
*getIndexOf() const*  
**Input Parameters**: const ItemType reference  
**Returned Output**: integer index  
**Functionality**: This function should iterate through the array and find the first index of the specified object. If the item can't be found, the function should return a -1 value. 

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
