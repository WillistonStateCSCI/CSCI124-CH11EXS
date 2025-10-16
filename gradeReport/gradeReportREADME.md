# Grade Report
*Note, to run this program you will need to use the terminal.*  
**Enter the line below to compile:**  
g++ gradeReport/gradeReport.cpp gradeReport/courseTypeImp.cpp gradeReport/personTypeImp.cpp gradeReport/studentTypeImp.cpp -o grades  
**Then enter the line below to run:**  
./grades  
*Remember to compile again after **EVERY** change.*
## Overview:  
This programming example further illustrates the concepts of inheritance and composition.  

The mid-semester point at your local university is approaching. The registrar’s office wants to prepare the grade reports as soon as the students’ grades are recorded.

However, some of the students enrolled have not yet paid their tuition.
1. If a student has paid the tuition, the grades are shown on the grade report together with the grade point average (GPA).
2. If a student has not paid the tuition, the grades are not printed. For these students, the grade report contains a message indicating that the grades have been held for nonpayment of the tuition. The grade report also shows the billing amount.

The registrar’s office and the business office want your help in writing a program that can analyze the students’ data and print the appropriate grade reports.  

The data is stored in a file *stData.txt*.  

It is clear from this output that the courses must be ordered according to the course number.  
To calculate the GPA, we assume that the grade A is equivalent to four points, B is equivalent to three points, C is equivalent to two points, D is equivalent to one point, and F is equivalent to zero points.  

**Input:** A file (*stData.txt*) containing the data in the form given previously.  
**Output:** A file (*stDataOut.txt*) containing the output in the form given previously.  

## Problem Analysis and Program Design