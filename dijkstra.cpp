#include"class.h"
void Graph_DG::Dijkstra() {
	int i;
	int count = 1;
	//����ʣ���·���������·����ʣ��this->vexnum-1�����㣩
	while (count != this->vexnum) {
		//temp���ڱ��浱ǰdis��������С���Ǹ��±�
		//min��¼�ĵ�ǰ����Сֵ
		int temp = 0;
		int min = INT_MAX;
		for (i = 0; i < this->vexnum; i++) {
			if (!dis[i].visit && dis[i].value < min) {
				min = dis[i].value;
				temp = i;
			}
		}
		//cout << temp + 1 << "  "<<min << endl;
		//��temp��Ӧ�Ķ�����뵽�Ѿ��ҵ������·���ļ�����
		dis[temp].visit = true;
		++count;
		for (i = 0; i < this->vexnum; i++) {
			//ע�����������arc[temp][i]!=INT_MAX����ӣ���Ȼ�����������Ӷ���ɳ����쳣
			if (!dis[i].visit && arc[temp][i] != INT_MAX && (dis[temp].value + arc[temp][i]) < dis[i].value) {
				//����µõ���·������Ӱ������Ϊ���ʵ�·�������Ǿ;͸����������·���ͳ���
				dis[i].value = dis[temp].value + arc[temp][i];
				dis[i].path = dis[temp].path + "-->v" + to_string(i + 1);
			}
		}
	}
}