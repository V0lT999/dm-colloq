#include <stdio.h>
#include <stdlib.h>
//�������������� �������� � ����� (���� ����������� ����� 1)
//�� ������:
//������� ��������� ���������� ��. � 7307, ����
//https://sites.google.com/view/petrovaliza7307
//e-mail: ostenok@gmail.com


int* TRANS_Q_Z (int** fract){
    int* integer;
    int i;
    int div = fract[0][0]; //���������� ���� � ������� ����� ����� ��������� � ����������� ���� ��������� �������� ������������ �����
    int sign = fract[0][1]; //���� �������� ������ ����� ��������� �� ������ ��������� �������� ������������ �����

    integer = (int*)calloc(div + 2, sizeof(int));
    integer[0] = div;
    integer[1] = sign;
    for (i = 2; i < div + 2; i++){ //������� ����� ����� ����� ��������� � ���������� �������� ������������ �����
        integer[i] = fract[0][i];
    }
    return integer;
}
//����� ����������: 15 �����
//���������� ����� ����: 6 (???)
