#ifndef RASTERIZER_CAMERACLASS_H
#define RASTERIZER_CAMERACLASS_H

#include "ProjectHeader.h"

class CameraClass {
//�������ݳ�Ա
public:
	//����
	Vector3 Position;

	Vector3 Rotation;
	//x -> pitch
	//y -> yaw
	//z -> roll

	//����ľ��룬��Զ��ʾ�ľ���
	float NearZ, FarZ;
	//Field of View
	float FOV;

	//��Ļ�߿���
	//���ݻ����ֱ�������
	float screenAspect;

	//������ƶ��ٶ�
	float speed;

	//������ǰ�����
	//���ܸ߿��� �� FOV ��Ӱ��
	Matrix4 ViewToHomo;
public:
	//��������߿���
	CameraClass(float aspect, float fov);
	~CameraClass();

	//��������
	//0��������
	void Update(float newAspect, float newFOV);
	void Update();

	//��������ת�������������
	//���ӿ�����
	Matrix4 GetWorldToViewMatrix4();
	//���������ת������μ��ʿռ�����
	Matrix4 GetViewToHomoMatrix4();
};

#endif