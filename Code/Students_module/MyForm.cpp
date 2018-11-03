#include "windows.h"
#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <list>
#include <vector>
#include <iterator>
#include "ExtractFromFile.h"
#include "Marks.h"
#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"

using namespace Students_module;
using namespace std;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

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
}

Void MyForm::Add_Click(System::Object^  sender, System::EventArgs^  e) {
	this->insert();
}

void MyForm::scr_out(vector <Marks>::iterator p) {
	
	richTextBox1->Text += "ID ó÷åíèêà: ";
	richTextBox1->Text += p->id;
	richTextBox1->Text += "\nÈìÿ: ";
	richTextBox1->Text += gcnew String(p->name);
	richTextBox1->Text += "\nÔàìèëèÿ: ";
	richTextBox1->Text += gcnew String(p->surname);
	richTextBox1->Text += "\nÎò÷åñòâî: ";
	richTextBox1->Text += gcnew String(p->patr);
	richTextBox1->Text += "\nÀäðåñ: ";
	richTextBox1->Text += gcnew String(p->addr);
	richTextBox1->Text += "\nÄàòà Ðîæäåíèÿ: ";
	richTextBox1->Text += gcnew String(p->birthday);
	richTextBox1->Text += "\nÊëàññ: ";
	richTextBox1->Text += p->klass;
	richTextBox1->Text += "\nÎöåíêà ïî ëèòåðàòóðå: ";
	richTextBox1->Text += p->litr;
	richTextBox1->Text += "\nÎöåíêà ïî èñòîðèè: ";
	richTextBox1->Text += p->history;
	richTextBox1->Text += "\nÑðåäíèé áàëë ïî ãóìàíèòàðíûì: ";
	richTextBox1->Text += p->avg_hum();
	richTextBox1->Text += "\nÎöåíêà ïî ìàòåìàòèêå: ";
	richTextBox1->Text += p->math;
	richTextBox1->Text += "\nÎöåíêà ïî ôèçèêå: ";
	richTextBox1->Text += p->physics;
	richTextBox1->Text += "\nÑðåäíèé áàëë ïî òåõíè÷åñêèì: ";
	richTextBox1->Text += p->avg_tech();
	richTextBox1->Text += "\nÑðåäíèé áàëë îáùèé: ";
	richTextBox1->Text += p->avg();
	richTextBox1->Text += "\n\n";
}

Void MyForm::ðåäàêòèðîâàíèåToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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

Void MyForm::îòìåíàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

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
 
Void MyForm::ïîèñêToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm2 ^f2;
	f2 = gcnew MyForm2();
	f2->Owner = this;
	f2->Show();
}

Void MyForm::óäàëåíèåToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

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

Void MyForm::âñåõToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	richTextBox1->Clear();

	vector <Marks> stud;
	func(stud);

	vector <Marks>::iterator p = stud.begin();
	while (p != stud.end()) {
		this->scr_out(p);
		p++;
	}

}

Void MyForm::õîðîøèõÓ÷åíèêîâToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

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

Void MyForm::ïëîõèõÓ÷åíèêîâToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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