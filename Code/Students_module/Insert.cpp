#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>

#include "Marks.h"
#include "MyForm.h"


using namespace Students_module;
using namespace std;

void MyForm::insert() {
	int i = 1;
	ifstream fi("students.txt");
	char x;
	while (!fi.eof()) {
		fi >> x;
		if (x == '*') {
			fi >> i;
			i++;
		}
	}

	ofstream fo("copy_stud.txt");
	ifstream fii("students.txt");
	ofstream fo1("copy_marks.txt");
	ifstream fi1("marks.txt");

	string str;

	while (getline(fii, str))
		fo << str << '\n';

	while (getline(fi1, str))
		fo1 << str << '\n';

	fo.close(); fo1.close();
	fii.close(); fi1.close();


	ofstream f1("students.txt", ios::app);

	msclr::interop::marshal_context context;
	string tmp_str;
	Marks m;

	f1 << "\n*\n";

	m.id = i;
	f1 << m.id << "\n";

	tmp_str = context.marshal_as<string>(MyForm::textBox1->Text);
	m.name = new char[20];
	strcpy(m.name, tmp_str.c_str());
	f1 << m.name << "\n";

	tmp_str = context.marshal_as<string>(MyForm::textBox2->Text);
	m.surname = new char[20];
	strcpy(m.surname, tmp_str.c_str());
	f1 << m.surname << "\n";

	tmp_str = context.marshal_as<string>(MyForm::textBox3->Text);
	m.patr = new char[20];
	strcpy(m.patr, tmp_str.c_str());
	f1 << m.patr << "\n";

	tmp_str = context.marshal_as<string>(MyForm::textBox4->Text);
	m.addr = new char[20];
	strcpy(m.addr, tmp_str.c_str());
	f1 << m.addr << "\n";

	tmp_str = context.marshal_as<string>(MyForm::textBox5->Text);
	m.birthday = new char[20];
	strcpy(m.birthday, tmp_str.c_str());
	f1 << m.birthday << "\n";

	m.klass = Convert::ToInt32(MyForm::textBox6->Text);
	f1 << m.klass;

	f1.close();

	ofstream f2("marks.txt", ios::app);

	f2 << "\n*\n";

	f2 << m.id << "\n";
	m.litr = Convert::ToInt32(MyForm::textBox7->Text);
	f2 << m.litr << "\n";

	m.history = Convert::ToInt32(MyForm::textBox8->Text);
	f2 << m.history << "\n";

	f2 << m.avg_hum() << "\n";

	m.math = Convert::ToInt32(MyForm::textBox9->Text);
	f2 << m.math << "\n";

	m.physics = Convert::ToInt32(MyForm::textBox10->Text);
	f2 << m.physics << "\n";

	f2 << m.avg_tech() << "\n";
	f2 << m.avg() << "\n";

	f2.close();

	// =================
}