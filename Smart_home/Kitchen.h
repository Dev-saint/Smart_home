#pragma once

void air_temp_kitch(int t); //������� �������� ����������� ������� �� �����
void air_hum_kitch(); //������� ��������� ��������� ������� �� �����
void conc_co2_kitch(); //������� ��������� ������������ CO2 �� �����
void brightness_kitch(); //������� ��������� ������� �� �����
void light_kitch(); //������� ���������/���������� ����� �� �����
void vent_speed_kitch(); //������� ��������� �������� ���������� �� �����
void coffee_machine(); //������� ������������� ����

struct kitchen
{
    float air_temp; //����������� �������
    float air_hum; //��������� �������
    int coffee; //������������� ���� ����� ���
    float conc_co2; //������������ CO2
    int vent_speed; //�������� ����������
    int brightness; //������� �����
    int light; //���������/���������� �����
}kitch;