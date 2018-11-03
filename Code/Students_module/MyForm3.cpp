#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <list>
#include <vector>
#include <iterator>
#include "ExtractFromFile.h"
#include "MyForm.h"
#include "MyForm3.h"

using namespace Students_module;
using namespace std;

void MyForm3::delete_stud(std::vector <Marks> &stud) {

	MyForm^ f = safe_cast<MyForm^>(this->Owner);
	f->richTextBox1->Clear();

	int idd = Convert::ToInt32(this->textBox1->Text);

	vector <Marks>::iterator p = stud.begin();
	while (p != stud.end()) {
		if (p->id == idd) {
			stud.erase(p);
			break;
		}
		p++;
	}
}

Void MyForm3::Delete_Click(System::Object^  sender, System::EventArgs^  e) {

	vector <Marks> stud;
	func(stud);

	delete_stud(stud);
	ofstream f1("students.txt"); ofstream f2("marks.txt");
	vector <Marks>::iterator p = stud.begin();

	while (p != stud.end()) {
		f1 << "\n*\n";
		f1 << p->id << "\n";
		f1 << p->name << "\n";
		f1 << p->surname << "\n";
		f1 << p->patr << "\n";
		f1 << p->addr << "\n";
		f1 << p->birthday << "\n";
		f1 << p->klass;

		f2 << "\n*\n";
		f2 << p->id << "\n";
		f2 << p->litr << "\n";
		f2 << p->history << "\n";
		f2 << p->avg_hum() << "\n";
		f2 << p->math << "\n";
		f2 << p->physics << "\n";
		f2 << p->avg_tech() << "\n";
		f2 << p->avg();
		p++;
	}

	f1.close(); f2.close();

	this->Close();
}