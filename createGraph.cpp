#include"class.h"
void Graph_DG::createGraph() {
	ifstream fin("4.txt");
	cout << "������ÿ��·���������յ㣨·������Ŵ�1��ʼ���Լ���Ȩ��" << endl;
	int start;
	int end;
	int weight;
	int count = 0;
	while (count != this->edge) {
		fin >> start >> end >> weight;
		//�����ж�·������Ϣ�Ƿ�Ϸ�
		while (!this->check_edge_value(start, end, weight)) {
			cout << "�����·������Ϣ���Ϸ�������������" << endl;
			fin >> start >> end >> weight;
		}
		//���ڽӾ����Ӧ�ϵ�·������ֵ
		arc[start - 1][end - 1] = weight;
		//����������ͼ����ȫ����
		arc[end - 1][start - 1] = weight;
		++count;
	}
}