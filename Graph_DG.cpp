#include"class.h"
Graph_DG::Graph_DG(int vexnum, int edge) {
	//初始化路由器数和路径数
	this->vexnum = vexnum;
	this->edge = edge;
	//为邻接矩阵开辟空间和赋初值

	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			arc[i][j] = INT_MAX;
		}
		dis[i].path = "";
		dis[i].value = INT_MAX;
		dis[i].visit = true;
	}

}