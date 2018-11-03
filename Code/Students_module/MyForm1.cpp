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
#include "MyForm1.h"

using namespace Students_module;
using namespace std;

void MyForm1::update(std::vector <Marks> &stud) {

	msclr::interop::marshal_context context;
	string tmp_str;
	vector <Marks>::iterator p = stud.begin();
	int ii = 0;

	switch (this->comboBox1->SelectedIndex) {
	case 0: {
		while (p != stud.end()) {
			if (p->id == Convert::ToInt32(MyForm1::textBox1->Text)) {
				tmp_str = context.marshal_as<string>(MyForm1::textBox2->Text);
				switch (this->comboBox2->SelectedIndex) {
				case 0: {
					strcpy(p->name, tmp_str.c_str());
					break; }
				case 1: {
					strcpy(p->surname, tmp_str.c_str());
					break; }
				case 2: {
					strcpy(p->patr, tmp_str.c_str());
					break; }
				case 3: {
					strcpy(p->addr, tmp_str.c_str());
					break; }
				case 4: {
					strcpy(p->birthday, tmp_str.c_str());
					break; }
				case 5: {
					p->klass = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 6: {
					p->litr = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 7: {
					p->history = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 8: {
					p->math = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 9: {
					p->physics = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				}

			}
			p++;
		}
		break;
	}
	case 1: {
		while (p != stud.end()) {
			tmp_str = context.marshal_as<string>(MyForm1::textBox1->Text);
			if (!strcmp(p->name, tmp_str.c_str())) {
				tmp_str = context.marshal_as<string>(MyForm1::textBox2->Text);
				switch (this->comboBox2->SelectedIndex) {
				case 0: {
					strcpy(p->name, tmp_str.c_str());
					break; }
				case 1: {
					strcpy(p->surname, tmp_str.c_str());
					break; }
				case 2: {
					strcpy(p->patr, tmp_str.c_str());
					break; }
				case 3: {
					strcpy(p->addr, tmp_str.c_str());
					break; }
				case 4: {
					strcpy(p->birthday, tmp_str.c_str());
					break; }
				case 5: {
					p->klass = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 6: {
					p->litr = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 7: {
					p->history = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 8: {
					p->math = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 9: {
					p->physics = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				}

			}
			p++;
		}
		break;
	}

	case 2: {
		while (p != stud.end()) {
			tmp_str = context.marshal_as<string>(MyForm1::textBox1->Text);
			if (!strcmp(p->surname, tmp_str.c_str())) {
				tmp_str = context.marshal_as<string>(MyForm1::textBox2->Text);
				switch (this->comboBox2->SelectedIndex) {
				case 0: {
					strcpy(p->name, tmp_str.c_str());
					break; }
				case 1: {
					strcpy(p->surname, tmp_str.c_str());
					break; }
				case 2: {
					strcpy(p->patr, tmp_str.c_str());
					break; }
				case 3: {
					strcpy(p->addr, tmp_str.c_str());
					break; }
				case 4: {
					strcpy(p->birthday, tmp_str.c_str());
					break; }
				case 5: {
					p->klass = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 6: {
					p->litr = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 7: {
					p->history = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 8: {
					p->math = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 9: {
					p->physics = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				}

			}
			p++;
		}
		break;
	}

	case 3: {
		while (p != stud.end()) {
			tmp_str = context.marshal_as<string>(MyForm1::textBox1->Text);

			if (!strcmp(p->patr, tmp_str.c_str())) {
				tmp_str = context.marshal_as<string>(MyForm1::textBox2->Text);
				switch (this->comboBox2->SelectedIndex) {
				case 0: {
					strcpy(p->name, tmp_str.c_str());
					break; }
				case 1: {
					strcpy(p->surname, tmp_str.c_str());
					break; }
				case 2: {
					strcpy(p->patr, tmp_str.c_str());
					break; }
				case 3: {
					strcpy(p->addr, tmp_str.c_str());
					break; }
				case 4: {
					strcpy(p->birthday, tmp_str.c_str());
					break; }
				case 5: {
					p->klass = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 6: {
					p->litr = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 7: {
					p->history = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 8: {
					p->math = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 9: {
					p->physics = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				}

			}
			p++;
		}
		break;
	}

	case 4: {
		while (p != stud.end()) {
			tmp_str = context.marshal_as<string>(MyForm1::textBox1->Text);

			if (!strcmp(p->addr, tmp_str.c_str())) {
				tmp_str = context.marshal_as<string>(MyForm1::textBox2->Text);
				switch (this->comboBox2->SelectedIndex) {
				case 0: {
					strcpy(p->name, tmp_str.c_str());
					break; }
				case 1: {
					strcpy(p->surname, tmp_str.c_str());
					break; }
				case 2: {
					strcpy(p->patr, tmp_str.c_str());
					break; }
				case 3: {
					strcpy(p->addr, tmp_str.c_str());
					break; }
				case 4: {
					strcpy(p->birthday, tmp_str.c_str());
					break; }
				case 5: {
					p->klass = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 6: {
					p->litr = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 7: {
					p->history = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 8: {
					p->math = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 9: {
					p->physics = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				}

			}
			p++;
		}
		break;
	}
	case 5: {
		while (p != stud.end()) {
			tmp_str = context.marshal_as<string>(MyForm1::textBox1->Text);

			if (!strcmp(p->birthday, tmp_str.c_str())) {
				tmp_str = context.marshal_as<string>(MyForm1::textBox2->Text);
				switch (this->comboBox2->SelectedIndex) {
				case 0: {
					strcpy(p->name, tmp_str.c_str());
					break; }
				case 1: {
					strcpy(p->surname, tmp_str.c_str());
					break; }
				case 2: {
					strcpy(p->patr, tmp_str.c_str());
					break; }
				case 3: {
					strcpy(p->addr, tmp_str.c_str());
					break; }
				case 4: {
					strcpy(p->birthday, tmp_str.c_str());
					break; }
				case 5: {
					p->klass = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 6: {
					p->litr = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 7: {
					p->history = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 8: {
					p->math = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 9: {
					p->physics = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				}

			}
			p++;
		}
		break;
	}
	case 6: {
		while (p != stud.end()) {
			if (p->klass = Convert::ToInt32(MyForm1::textBox1->Text)) {
				tmp_str = context.marshal_as<string>(MyForm1::textBox2->Text);
				switch (this->comboBox2->SelectedIndex) {
				case 0: {
					strcpy(p->name, tmp_str.c_str());
					break; }
				case 1: {
					strcpy(p->surname, tmp_str.c_str());
					break; }
				case 2: {
					strcpy(p->patr, tmp_str.c_str());
					break; }
				case 3: {
					strcpy(p->addr, tmp_str.c_str());
					break; }
				case 4: {
					strcpy(p->birthday, tmp_str.c_str());
					break; }
				case 5: {
					p->klass = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 6: {
					p->litr = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 7: {
					p->history = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 8: {
					p->math = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				case 9: {
					p->physics = Convert::ToInt32(MyForm1::textBox2->Text);
					break; }
				}

			}
			p++;
		}
		break;
	}

	}
}

Void MyForm1::Edit_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1 ^f1;
	f1 = gcnew MyForm1();

	MyForm^ f = safe_cast<MyForm^>(this->Owner);
	f->richTextBox1->Clear();

	vector <Marks> stud;
	func(stud);

	vector <Marks>::iterator p = stud.begin();
	update(stud);

	ofstream fs("students.txt");
	ofstream fm("marks.txt");

	p = stud.begin();

	while (p != stud.end()) {
		fs << "\n*\n";
		fs << p->id << "\n";
		fs << p->name << "\n";
		fs << p->surname << "\n";
		fs << p->patr << "\n";
		fs << p->addr << "\n";
		fs << p->birthday << "\n";
		fs << p->klass;
		fm << "\n*\n";
		fm << p->id << "\n";
		fm << p->litr << "\n";
		fm << p->history << "\n";
		fm << p->avg_hum() << "\n";
		fm << p->math << "\n";
		fm << p->physics << "\n";
		fm << p->avg_tech() << "\n";
		fm << p->avg();
		p++;
	}


	fs.close();
	this->Close();
}