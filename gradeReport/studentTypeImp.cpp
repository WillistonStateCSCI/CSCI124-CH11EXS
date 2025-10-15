//**********************************************************
// Author: D.S. Malik
//
// Implementation file studentTypeImp.cpp
// This file contains the definitions of the functions to
// implement the operations of the class studentType.
//**********************************************************
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

#include "personType.h"
#include "courseType.h"
#include "studentType.h"

using namespace std;

//The definitions of the member functions of the class
//studentType go here.

void studentType::setInfo(string fName, string lName, int ID, int nOfCourses, bool isTPaid, courseType courses[], char cGrades[])
{
    int i;
    setName(fName, lName); //set the name
    sId = ID; //set the student ID
    isTuitionPaid = isTPaid; //set isTuitionPaid
    numberOfCourses = nOfCourses; //set the number of courses
    //set the course information
    for (i = 0; i < numberOfCourses; i++)
    {
    coursesEnrolled[i] = courses[i];
    coursesGrade[i] = cGrades[i];
    }
    sortCourses(); //sort the array coursesEnrolled
} //end setInfo

studentType::studentType()
{
    numberOfCourses = 0;
    sId = 0;
    isTuitionPaid = false;
    for (int i = 0; i < 6; i++)
        coursesGrade[i] = '*';
} //end default constructor

//Need to add print function