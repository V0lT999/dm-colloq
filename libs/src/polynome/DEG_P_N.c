#include <stdio.h>
#include <stdlib.h>
//������� ����������
//�� ������:
//������� ��������� ���������� ��. � 7307, ����
//https://sites.google.com/view/petrovaliza7307
//e-mail: ostenok@gmail.com


long long DEG_P_N (struct mod_4* pol){
    int i;
    long long pow = pol.m; //��������� ������� ������� ����������

    for (i = 0; i < pow; i++){
        if (pol.numeratot[i][0] != 0){ //���� ����������� ��� ������� ������� �� ����� ����, �� ������� ������� ������� �������� �������
            return pow;
        }
        else{   //���� ����������� ��� ������� ����� ����, �� ��������� �������� �������
            pow = pow - 1;
        }
    }
    return pow;
}
//����� ����������: 10 �����
//���������� ����� ����: 6 (???)
