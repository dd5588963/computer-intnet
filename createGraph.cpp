#include"class.h"
void Graph_DG::createGraph() {
	cout << "������ÿ��·���������յ㣨·������Ŵ�1��ʼ���Լ���Ȩ��" << endl;
	int start;
	int end;
	int weight;
	int count = 0;
	while (count != this->edge) {
		cin >> start >> end >> weight;
		//�����ж�·������Ϣ�Ƿ�Ϸ�
		while (!this->check_edge_value(start, end, weight)) {
			cout << "�����·������Ϣ���Ϸ�������������" << endl;
			cin >> start >> end >> weight;
		}
		//���ڽӾ����Ӧ�ϵ�·������ֵ
		arc[start - 1][end - 1] = weight;
		//����������ͼ����ȫ����
		arc[end - 1][start - 1] = weight;
		++count;
	}
}