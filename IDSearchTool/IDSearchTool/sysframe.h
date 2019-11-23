#ifndef _SYS_FRAME_H_
#define _SYS_FRAME_H_

#include"common.h"
//���ù��λ��
void SetCurPos(int x, int y);
void HideCursor();
void RecoverCursor();

//�������
void DrawRow(int x, int y);
void DrawCol(int x, int y);
void DrawFrame(const char *title);
void DrawMenu();
//void DrawSysMenu();

void SystemEnd();


#endif /* _SYS_FRAME_H_ */