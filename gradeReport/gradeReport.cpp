//************************************************************
// Author: D.S. Malik
//
// This program reads students' data from a file and outputs
// the grades. If student has not paid the tuition, the
// grades are not shown, and an appropriate message is
// output. The output is stored in a file.
//************************************************************
#include <iostream>
#include <fstream>
#include <string>

#include "studentType.h"

using namespace std;

const int MAX_NO_OF_STUDENTS = 10;

void getStudentData(ifstream& infile, studentType studentList[], int numberOfStudents);
void printGradeReports(ofstream& outfile, studentType studentList[], int numberOfStudents, double tuitionRate);
int main()
{
    studentType studentList[MAX_NO_OF_STUDENTS];
    
    int noOfStudents;
    double tuitionRate;

    ifstream infile;
    ofstream outfile;

    infile.open("stData.txt");

    if (!infile)
    {

        cout << "The input file does not exist. " << "Program terminates." << endl;

        return 1;

    }

    outfile.open("sDataOut.txt");

    infile >> noOfStudents; //get the number of students
    infile >> tuitionRate; //get the tuition rate

    getStudentData(infile, studentList, noOfStudents);
    printGradeReports(outfile, studentList, noOfStudents, tuitionRate);

    return 0;
}
//Place the definitions of the functions getStudentData and
//printGradeReports here.
