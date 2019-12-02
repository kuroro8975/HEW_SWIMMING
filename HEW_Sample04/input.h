
#pragma once

#include <Windows.h>
#define DIRECTINPUT_VERSION (0x0800)
#include <dinput.h>

/* game pad情報 */
#define BUTTON_UP		0x00000001l	// 方向キー上(.IY<0)
#define BUTTON_DOWN		0x00000002l	// 方向キー下(.IY>0)
#define BUTTON_LEFT		0x00000004l	// 方向キー左(.IX<0)
#define BUTTON_RIGHT	0x00000008l	// 方向キー右(.IX>0)
#define BUTTON_A		0x00000010l	// Ａボタン(.rgbButtons[0]&0x80)
#define BUTTON_B		0x00000020l	// Ｂボタン(.rgbButtons[1]&0x80)
#define BUTTON_X		0x00000040l	// Ｘボタン(.rgbButtons[2]&0x80)
#define BUTTON_Y		0x00000080l	// Ｙボタン(.rgbButtons[3]&0x80)
#define BUTTON_RB		0x00000100l	// RBボタン(.rgbButtons[4]&0x80)
#define BUTTON_LB		0x00000200l	// LBボタン(.rgbButtons[5]&0x80)
#define BUTTON_BACK		0x00000400l	// BACKボタン(.rgbButtons[6]&0x80)
#define BUTTON_START	0x00000800l	// STARTボタン(.rgbButtons[7]&0x80)
#define BUTTON_LSTICK		0x00001000l	// LSTICKボタン(.rgbButtons[8]&0x80)
#define BUTTON_RSTICK		0x00002000l	// RSTICKボタン(.rgbButtons[9]&0x80)
#define GAMEPADMAX		4			// 同時に接続するジョイパッドの最大数をセット


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
