#include"class.h"
void Graph_DG::print_path(int begin) {
	ofstream fout("1.txt");
	string str;
	str = "v" + to_string(begin);
	fout << "��" << str << "Ϊ���ľ����������·��Ϊ��" << endl;
	for (int i = 0; i != this->vexnum; i++) {
		if (dis[i].value != INT_MAX)
			fout << dis[i].path << "=" << dis[i].value << endl;
		else {
			fout << dis[i].path << "�������·����" << endl;
		}
	}
	fout.close();
}