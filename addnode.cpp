#include"class.h"
void Graph_DG::addnode() {
	vexnum++;
	cout << "����������·����Ŀ:";
	int numb;
	cin >> numb;
	cout << "���·��������������·������ż�Ȩֵ����·����֮����룩Ϊ:";
	for (int i = 0; i < numb; i++) {
		int m, n;//mΪ����·������,nΪȨֵ
		cin >> m >> n;
		arc[vexnum - 1][m] = n;
		arc[m][vexnum - 1] = n;
	}

}