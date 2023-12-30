#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#include "ChangeView.h"
#include "Keyboard.h"
#include "Flower.h"
#include "Tree.h"
#include "Background.h"
extern GLfloat mouse_angle_lr;				//������ת�Ƕ�
extern GLfloat mouse_angle_ud;				//������ת�Ƕ�
extern GLfloat mouse_last_x, mouse_last_y;	//��һ֡���������
extern GLfloat mouse_x, mouse_y;	//��һ֡���������
extern bool mouse_clicked_left;
extern bool mouse_clicked_right;	//������ҵ���


void getMouseClick(int button, int state, int x, int y);
void getMouseMove(int x, int y);


void get_Groung_position(int mousex, int mousey, int &gx, int &gy, int &gz);
void initMouse();