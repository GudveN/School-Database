
#include "windows.h"
#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <list>
#include <vector>
#include <iterator>
#include "Marks.h"
#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"

//int i=1;

using namespace Students_module;
using namespace std;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}


Void MyForm::button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->insert();
}


void func(vector <Marks> &stud) {
	
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

void MyForm::scr_out(vector <Marks>::iterator p) {
	
	richTextBox1->Text += "ID Û˜ÂÌËÍ‡: ";
	richTextBox1->Text += p->id;
	richTextBox1->Text += "\n»Ïˇ: ";
	richTextBox1->Text += gcnew String(p->name);
	richTextBox1->Text += "\n‘‡ÏËÎËˇ: ";
	richTextBox1->Text += gcnew String(p->surname);
	richTextBox1->Text += "\nŒÚ˜ÂÒÚ‚Ó: ";
	richTextBox1->Text += gcnew String(p->patr);
	richTextBox1->Text += "\n¿‰ÂÒ: ";
	richTextBox1->Text += gcnew String(p->addr);
	richTextBox1->Text += "\nƒ‡Ú‡ –ÓÊ‰ÂÌËˇ: ";
	richTextBox1->Text += gcnew String(p->birthday);
	richTextBox1->Text += "\n Î‡ÒÒ: ";
	richTextBox1->Text += p->klass;
	richTextBox1->Text += "\nŒˆÂÌÍ‡ ÔÓ ÎËÚÂ‡ÚÛÂ: ";
	richTextBox1->Text += p->litr;
	richTextBox1->Text += "\nŒˆÂÌÍ‡ ÔÓ ËÒÚÓËË: ";
	richTextBox1->Text += p->history;
	richTextBox1->Text += "\n—Â‰ÌËÈ ·‡ÎÎ ÔÓ „ÛÏ‡ÌËÚ‡Ì˚Ï: ";
	richTextBox1->Text += p->avg_hum();
	richTextBox1->Text += "\nŒˆÂÌÍ‡ ÔÓ Ï‡ÚÂÏ‡ÚËÍÂ: ";
	richTextBox1->Text += p->math;
	richTextBox1->Text += "\nŒˆÂÌÍ‡ ÔÓ ÙËÁËÍÂ: ";
	richTextBox1->Text += p->physics;
	richTextBox1->Text += "\n—Â‰ÌËÈ ·‡ÎÎ ÔÓ ÚÂıÌË˜ÂÒÍËÏ: ";
	richTextBox1->Text += p->avg_tech();
	richTextBox1->Text += "\n—Â‰ÌËÈ ·‡ÎÎ Ó·˘ËÈ: ";
	richTextBox1->Text += p->avg();
	richTextBox1->Text += "\n\n";
}

Void MyForm::‚ÒÂıToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	richTextBox1->Clear();

	vector <Marks> stud;
	func(stud);
		
	vector <Marks>::iterator p = stud.begin();
	while (p != stud.end()) {
		this->scr_out(p);
			p++;
	}
		
}

Void MyForm::Â‰‡ÍÚËÓ‚‡ÌËÂToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1 ^f1;
	f1 = gcnew MyForm1();
	f1->Show();
	f1->Owner = this;
	
	ofstream fo("copy_stud.txt");
	ifstream fi("students.txt");
	ofstream fo1("copy_marks.txt");
	ifstream fi1("marks.txt");

	string str;

	while (getline(fi, str))
		fo << str << '\n';

	while (getline(fi1, str))
		fo1 << str << '\n';

	fo.close(); fo1.close();
	fi.close(); fi1.close();

	
}


Void MyForm1::button1_Click(System::Object^  sender, System::EventArgs^  e) {
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

Void MyForm::ÓÚÏÂÌ‡ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	ifstream fi("copy_stud.txt");
	ofstream fo("students.txt");
	ifstream fi1("copy_marks.txt");
	ofstream fo1("marks.txt");

	string str;

	while (getline(fi, str)) 
		fo << "\n" << str;

	while (getline(fi1, str))
		fo1 << "\n" << str ;

	fo.close(); fo1.close();
	fi.close(); fi1.close();

	richTextBox1->Clear();

}
 

Void MyForm::ÔÓËÒÍToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm2 ^f2;
	f2 = gcnew MyForm2();
	f2->Owner = this;
	f2->Show();
}


Void MyForm2::button1_Click(System::Object^  sender, System::EventArgs^  e) {

	vector <Marks> stud;
	func(stud);

	select(stud);
	
	this->Close();
}


Void MyForm::Û‰‡ÎÂÌËÂToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	MyForm3 ^f3;
	f3 = gcnew MyForm3();
	f3->Owner = this;
	f3->Show();
	
	ofstream fo("copy_stud.txt");
	ifstream fi("students.txt");
	ofstream fo1("copy_marks.txt");
	ifstream fi1("marks.txt");

	string str;

	while (getline(fi, str))
		fo << str << '\n';

	while (getline(fi1, str))
		fo1 << str << '\n';

	fo.close(); fo1.close();
	fi.close(); fi1.close();

}


Void MyForm3::button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
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

Void MyForm::ıÓÓ¯Ëı”˜ÂÌËÍÓ‚ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	richTextBox1->Clear();

	vector <Marks> stud;
	func(stud);

	vector <Marks> stud_good;
	
	vector <Marks>::iterator p = stud.begin();
	while (p != stud.end()) {
		if (p->avg() > 8) {		
			stud_good.push_back(stud[p-stud.begin()]);
			
		}
		p++;
	}

	p = stud_good.begin();
	while (p != stud_good.end()) {
		this->scr_out(p);
		p++;
	}
}

Void MyForm::ÔÎÓıËı”˜ÂÌËÍÓ‚ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->Clear();

	vector <Marks> stud;
	func(stud);

	vector <Marks> stud_bad;

	vector <Marks>::iterator p = stud.begin();
	while (p != stud.end()) {
		if (p->avg() < 4) {
			stud_bad.push_back(stud[p - stud.begin()]);

		}
		p++;
	}

	p = stud_bad.begin();
	while (p != stud_bad.end()) {
		this->scr_out(p);
		p++;
	}
}