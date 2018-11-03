#ifndef EXTRACTFROMFILE_H
#define EXTRACTFROMFILE_H

#include "windows.h"
#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <list>
#include <vector>
#include <iterator>
#include "Marks.h"

using namespace std;

inline void func(vector <Marks> &stud) {

	ifstream fi1("students.txt");
	ifstream fi2("marks.txt");

	Marks m1;
	string tmp_str;

	int y; char x;
	double tmp;

	bool z = false;
	while ((!fi1.eof()) && (!fi2.eof())) {

		z = false;
		(fi1 >> x).get();

		if (x == '*') {
			z = true;
			(fi1 >> m1.id).get();

			m1.name = new char[20];
			fi1.getline(m1.name, 20);

			m1.surname = new char[20];
			fi1.getline(m1.surname, 20);

			m1.patr = new char[20];
			fi1.getline(m1.patr, 20);

			m1.addr = new char[20];
			fi1.getline(m1.addr, 20);

			m1.birthday = new char[20];
			fi1.getline(m1.birthday, 20);

			(fi1 >> m1.klass).get();

		}
		(fi2 >> x).get();
		if (x == '*') {
			(fi2 >> y).get();
			if (y == m1.id) {
				(fi2 >> m1.litr).get();
				(fi2 >> m1.history).get();
				(fi2 >> tmp).get();
				(fi2 >> m1.math).get();
				(fi2 >> m1.physics).get();
				(fi2 >> tmp).get();
				(fi2 >> tmp).get();
			}
		}
		if (z) {
			stud.push_back(m1);
		}
	}

	fi1.close(); fi2.close();
}

#endif