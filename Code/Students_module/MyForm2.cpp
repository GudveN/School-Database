#include "windows.h"
#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <list>
#include <vector>
#include <iterator>
#include "ExtractFromFile.h"
#include "MyForm.h"
#include "MyForm2.h"

using namespace Students_module;
using namespace std;

void MyForm2::select(std::vector <Marks> stud) {

	MyForm^ f = safe_cast<MyForm^>(this->Owner);
	f->richTextBox1->Clear();

	msclr::interop::marshal_context context;
	string tmp_str;

	int ii = 0;
	vector <Marks>::iterator p = stud.begin();

	switch (this->comboBox1->SelectedIndex) {
	case 0: {
		while (p != stud.end()) {
			tmp_str = context.marshal_as<string>(MyForm2::textBox1->Text);
			if (!strcmp(p->name, tmp_str.c_str())) {
				f->scr_out(p);

			}
			p++;
		}
		break;
	}

	case 1: {
		while (p != stud.end()) {
			tmp_str = context.marshal_as<string>(MyForm2::textBox1->Text);

			if (!strcmp(p->surname, tmp_str.c_str())) {
				f->scr_out(p);

			}
			p++;
		}
		break;
	}

	case 2: {
		while (p != stud.end()) {
			tmp_str = context.marshal_as<string>(MyForm2::textBox1->Text);

			if (!strcmp(p->patr, tmp_str.c_str())) {
				f->scr_out(p);

			}
			p++;
		}
		break;
	}

	case 3: {
		while (p != stud.end()) {
			tmp_str = context.marshal_as<string>(MyForm2::textBox1->Text);

			if (!strcmp(p->addr, tmp_str.c_str())) {
				f->scr_out(p);

			}
			p++;
		}
		break;
	}

	case 4: {
		while (p != stud.end()) {
			tmp_str = context.marshal_as<string>(MyForm2::textBox1->Text);

			if (!strcmp(p->birthday, tmp_str.c_str())) {
				f->scr_out(p);

			}
			p++;
		}
		break;
	}
	case 5: {
		while (p != stud.end()) {

			if (p->klass == Convert::ToInt32(MyForm2::textBox1->Text)) {
				f->scr_out(p);

			}
			p++;
		}
		break;
	}

	}
}

Void MyForm2::Search_Click(System::Object^  sender, System::EventArgs^  e) {

	vector <Marks> stud;
	func(stud);

	select(stud);

	this->Close();
}