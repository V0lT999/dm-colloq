#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "../../integer.h"

//���������� �������� �����, ��������� - �����������
//�� ������:
//������� ��������� ���������� ��. � 7307, ����
//https://sites.google.com/view/petrovaliza7307
//e-mail: ostenok@gmail.com


int* ABS_Z_N(int* num) {
    int* result_num;
    int i;
    int div = num[0]; //���������� ���� � ����������� �����

    result_num = (int*)calloc(div + 1, sizeof(int));
    result_num[0] = div;  //���������� ���� � ������ ����� ��������� � ����������� ���� � ����� �����
    for (i = 1; i < div + 1; i++){  //�������� ����� ��������� ����� � ������� �����������, ������� �� ������� �������� � �������
        result_num[i] = num[i + 1];
    }
    return result_num;
}
//����� ����������: 10 �����
//���������� ����� ����: 3 (???)
