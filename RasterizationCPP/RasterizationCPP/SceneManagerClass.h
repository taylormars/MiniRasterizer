﻿#ifndef RASTERIZER_SCENEMANAGERCLASS_H
#define RASTERIZER_SCENEMANAGERCLASS_H

#include "ProjectHeader.h"

#include "ModelInfo.h"
#include "Hierarchy.h"

//保存场景有什么物体
class SceneManager {
public:
	static SceneManager *s_ptr_scene_manager;

	vector<shared_ptr<Object>> objects_all;
	map<string, ModelInfo> map_models;

	Camera *main_camera;
public:
	SceneManager();

	//对所有object初始化
	SceneManager& init();

	shared_ptr<Object> createClass(string class_name);

	//每帧调用
	//更新所有物体的情况
	SceneManager& update();

	Object* findElementByName(string name);
};

#endif