#pragma once

void air_temp_kitch(float t); //������� �������� ����������� ������� �� �����
void air_hum_kitch(float hum); //������� ��������� ��������� ������� �� �����
void conc_co2_kitch(float co2); //������� ��������� ������������ CO2 �� �����
void brightness_kitch(int bright); //������� ��������� ������� �� �����
void light_kitch(); //������� ���������/���������� ����� �� �����
void vent_speed_kitch(int speed); //������� ��������� �������� ���������� �� �����
void coffee_machine(); //������� ������������� ����
void menu_kitch(); // ������� ������ ���� ���������� ��� �����

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