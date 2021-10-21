#pragma once

void water_bath(); //������� ������ ���� ������������ ����������� � ������
void air_temp_bath(int t); //������� �������� ����������� ������� � ������
void air_hum_bath(); //������� ��������� ��������� ������� � ������
void conc_co2_bath(); //������� ��������� ������������ CO2 � ������
void brightness_bath(); //������� ��������� ������� � ������
void light_bath(); //������� ���������/���������� ����� � ������
void vent_speed(); //������� ��������� �������� ���������� � ������

struct bathroom
{
    float water_temp; //����������� ����
    float air_temp; //����������� �������
    float air_hum; //��������� �������
    int flag_water; //���� ������ ����
    float conc_co2; //������������ CO2
    int brightness; //������� �����
    int light; //���������/���������� �����
    int vent_speed; //�������� ����������
}bath;

