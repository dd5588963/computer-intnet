#include"class.h"
void Graph_DG::addnode(int num) {
	if (num > vexnum) {
		vexnum++;
		dis[vexnum - 1].exist = true;
		cout << "����������·����Ŀ:";
		int numb;
		cin >> numb;
		cout << "���·��������������·������ż�Ȩֵ����·����֮����룩Ϊ:";
		for (int i = 0; i < numb; i++) {
			int m, n;//mΪ����·������,nΪȨֵ
			cin >> m >> n;
			arc[num - 1][m-1] = n;
			arc[m-1][num - 1] = n;
		}
	}
	else {
		dis[num - 1].exist = true;
		cout << "����������·����Ŀ:";
		int numb;
		cin >> numb;
		cout << "���·��������������·������ż�Ȩֵ����·����֮����룩Ϊ:";
		for (int i = 0; i < numb; i++) {
			int m, n;//mΪ����·������,nΪȨֵ
			cin >> m >> n;
			arc[num - 1][m-1] = n;
			arc[m-1][num - 1] = n;
		}
	}
}