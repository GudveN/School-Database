
#include <vector>
#include <iterator>
#include "Marks.h"
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