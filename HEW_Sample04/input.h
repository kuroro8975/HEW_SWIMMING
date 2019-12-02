
#pragma once

#include <Windows.h>
#define DIRECTINPUT_VERSION (0x0800)
#include <dinput.h>

/* game pad��� */
#define BUTTON_UP		0x00000001l	// �����L�[��(.IY<0)
#define BUTTON_DOWN		0x00000002l	// �����L�[��(.IY>0)
#define BUTTON_LEFT		0x00000004l	// �����L�[��(.IX<0)
#define BUTTON_RIGHT	0x00000008l	// �����L�[�E(.IX>0)
#define BUTTON_A		0x00000010l	// �`�{�^��(.rgbButtons[0]&0x80)
#define BUTTON_B		0x00000020l	// �a�{�^��(.rgbButtons[1]&0x80)
#define BUTTON_X		0x00000040l	// �w�{�^��(.rgbButtons[2]&0x80)
#define BUTTON_Y		0x00000080l	// �x�{�^��(.rgbButtons[3]&0x80)
#define BUTTON_RB		0x00000100l	// RB�{�^��(.rgbButtons[4]&0x80)
#define BUTTON_LB		0x00000200l	// LB�{�^��(.rgbButtons[5]&0x80)
#define BUTTON_BACK		0x00000400l	// BACK�{�^��(.rgbButtons[6]&0x80)
#define BUTTON_START	0x00000800l	// START�{�^��(.rgbButtons[7]&0x80)
#define BUTTON_LSTICK		0x00001000l	// LSTICK�{�^��(.rgbButtons[8]&0x80)
#define BUTTON_RSTICK		0x00002000l	// RSTICK�{�^��(.rgbButtons[9]&0x80)
#define GAMEPADMAX		4			// �����ɐڑ�����W���C�p�b�h�̍ő吔���Z�b�g


bool Keyboard_Initialize(HINSTANCE hInstance, HWND hWnd);
void Keyboard_Finalize(void);
void Keyboard_Update(void);

bool Keyboard_IsPress(int nKey);
bool Keyboard_IsTrigger(int nKey);
bool Keyboard_IsRelease(int nKey);

//---------------------------- game pad
bool GamePad_Initialize(HINSTANCE hInstance, HWND hWnd);
void GamePad_Finalize(void);
void GamePad_Update(void);

BOOL GamePad_IsPress(int padNo, DWORD button);
BOOL GamePad_IsTrigger(int padNo, DWORD button);