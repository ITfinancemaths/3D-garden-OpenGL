#include "cout.h"

void coutline()
{
	cout << "-----------------------------------------------------------------" << endl;
}

void coutstat()
{
	system("cls");
	cout << "��ӭ����MyGarden������5120379068" << endl;
	cout << "ϵͳ״̬��" << endl;
	cout << "  ����������" << flower_display_list.size() << "\t\t";
	cout << "  ����������" << tree_display_list.size() << endl;
	cout << "  ��ѩЧ����" << (is_snow ? "��" : "��") << "\t\t";
	cout << "  ѩ����С��" << snowlevel << endl;
	cout << "  �糡Ч����" << (have_wind ? "��" : "��") << endl;
	coutline();
	cout << "������ʾ��" << endl;
	cout << "������Ҽ������º����ת�ӽ�" << "\t";
	cout << "�������������º�ɶԵ������޸�" << endl;
	cout << "��W,�Ϸ��������ǰ����" << "\t\t";
	cout << "��A,���������������" << endl;
	cout << "��S,�·�������������" << "\t\t";
	cout << "��D,�ҷ��������������" << endl;
	cout << "��Q��������ת" << "\t\t\t";
	cout << "��E��������ת" << endl;
	cout << "��P��������ѩ��Ч" << "\t\t";
	cout << "��O�����Ʒ糡��Ч" << endl;
	cout << "��J����Сѩ��" << "\t\t\t";
	cout << "��K������ѩ��" << endl;
	cout << "��Z�����浱ǰ״̬" << "\t\t";
	cout << "��L����ȡ�ѱ����״̬" << endl;
	cout << "��I��ѩ����Ч��" << "\t\t\t";
	cout << "��ESC���˳�" << endl;
	if (CreatFlower == true)
	{
		coutline();
		cout << "��ǰΪ��������״̬" << endl;
		cout << "  ����������" << flower_display_list[flower_display_list.size() - 1]->petalNum << endl;
		cout << "  ��ɫ��R(" << flower_display_list[flower_display_list.size() - 1]->mat_petal[0] << ")  G("
			<< flower_display_list[flower_display_list.size() - 1]->mat_petal[1] << ")  B("
			<< flower_display_list[flower_display_list.size() - 1]->mat_petal[2] << ")" << endl;
		cout << "��R,G,B���޸Ļ����RGBֵ" << endl;
		cout << "��N�����ӻ�������" << endl;
		cout << "��M�����ٻ�������" << endl;
		cout << "����굥����ȷ�ϴ�������" << endl;
	}
	else if (CreatTree == true)
	{
		coutline();
		cout << "��ǰΪ������״̬" << endl;
		cout << "  ���Ĳ�����" << tree_display_list[tree_display_list.size() - 1]->nLevels << endl;
		cout << "��N���������Ĳ���" << endl;
		cout << "��M���������Ĳ���" << endl;
		cout << "����굥����ȷ�ϴ�����" << endl;
	}
	else
	{
		cout << "��F������һ�仨" << "\t\t\t";
		cout << "��T������һ����" << endl;
	}
}