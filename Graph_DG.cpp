#include"class.h"
Graph_DG::Graph_DG(int vexnum, int edge) {
	//��ʼ��·��������·����
	this->vexnum = vexnum;
	this->edge = edge;
	//Ϊ�ڽӾ��󿪱ٿռ�͸���ֵ

	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			arc[i][j] = INT_MAX;
		}
		dis[i].path = "";
		dis[i].value = INT_MAX;
		dis[i].visit = true;
	}

}