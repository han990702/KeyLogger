#include <iostream>
#include <windows.h>
void print_key(short);
int main()
{
	for (unsigned char c = 0; true; c++) if (GetAsyncKeyState(c) == (short)0x8001) print_key(c);
	//키를 누르는 순간만 포착할 것이므로 & (short)0x8000 이 아닌 == (short)0x8001을 사용
	//키를 길게 누를경우 연속입력이 되는데 연속입력은 일정 (매우 짧은)시간 간격으로 새로 누르는 것과 같은 상태이다.
	//즉 GetAsyncKeyState가 0x8001을 리턴할 때 마다 해당 키를 입력한 것으로 할 수 있다.
}

void print_key(short c)
{
	if (c == VK_CONTROL || c == VK_SHIFT || c == VK_MENU) return;	//좌우버튼 구분하여 출력할것이므로 무시
	if (c >= 0x30 && c <= 0x5A) std::cout << (char)c;
	else if (c >= 0x60 && c <= 0x69) std::cout << c - 0x60;
	else if (c >= 0x70 && c <= 0x87) std::cout << 'F' << c - 111;
	switch (c)
	{
	case VK_LBUTTON:
		std::cout << "[LBUTTON]";
		break;
	case VK_RBUTTON:
		std::cout << "[RBUTTON]";
		break;
	case VK_MBUTTON:
		std::cout << "[MBUTTON]";
		break;
	case VK_XBUTTON1:
		std::cout << "[XBUTTON1]";
		break;
	case VK_XBUTTON2:
		std::cout << "[XBUTTON2]";
		break;
	case VK_BACK:
		std::cout << "[BACKSPACE]";
		break;
	case VK_TAB:
		std::cout << "[TAB]";
		break;
	case VK_CLEAR:
		std::cout << "[CLEAR]";
		break;
	case VK_RETURN:
		std::cout << "[ENTER]";
		break;
	case VK_PAUSE:
		std::cout << "[PAUSE]";
		break;
	case VK_CAPITAL:
		std::cout << "[CAPSLOCK]";
		break;
	case VK_HANGUL:
		std::cout << "[IME HANGUL]";
		break;
	case VK_IME_ON:
		std::cout << "[IME ON]";
		break;
	case VK_JUNJA:
		std::cout << "[IME JUNJA]";
		break;
	case VK_FINAL:
		std::cout << "[IME FINAL]";
		break;
	case VK_HANJA:
		std::cout << "[IME HANJA]";
		break;
	case VK_IME_OFF:
		std::cout << "[IME OFF]";
		break;
	case VK_ESCAPE:
		std::cout << "[ESC]";
		break;
	case VK_CONVERT:
		std::cout << "[IME CONVERT]";
		break;
	case VK_NONCONVERT:
		std::cout << "[IME NONCONVERT]";
		break;
	case VK_ACCEPT:
		std::cout << "[IME ACCEPT]";
		break;
	case VK_MODECHANGE:
		std::cout << "[IME MODE CHANGE REQUEST]";
		break;
	case VK_SPACE:
		std::cout << "[SPACE]";
		break;
	case VK_PRIOR:
		std::cout << "[PAGE UP]";
		break;
	case VK_NEXT:
		std::cout << "[PAGE DOWN]";
		break;
	case VK_END:
		std::cout << "[END]";
		break;
	case VK_HOME:
		std::cout << "[HOME]";
		break;
	case VK_LEFT:
		std::cout << "[←]";
		break;
	case VK_UP:
		std::cout << "[↑]";
		break;
	case VK_RIGHT:
		std::cout << "[→]";
		break;
	case VK_DOWN:
		std::cout << "[↓]";
		break;
	case VK_SELECT:
		std::cout << "[SELECT]";
		break;
	case VK_PRINT:
		std::cout << "[PRINT]";
		break;
	case VK_EXECUTE:
		std::cout << "[EXECUTE]";
		break;
	case VK_SNAPSHOT:
		std::cout << "[PRINT SCREEN]";
		break;
	case VK_INSERT:
		std::cout << "[INSERT]";
		break;
	case VK_DELETE:
		std::cout << "[DELETE]";
		break;
	case VK_HELP:
		std::cout << "[HELP]";
		break;
	case VK_LWIN:
		std::cout << "[LEFT WINDOW]";
		break;
	case VK_RWIN:
		std::cout << "[RIGHT WINDOW]";
		break;
	case VK_APPS:
		std::cout << "[APPLICATIONS]";
		break;
	case VK_SLEEP:
		std::cout << "[SLEEP]";
		break;
	case VK_MULTIPLY:
		std::cout << '*';
		break;
	case VK_ADD:
		std::cout << '+';
		break;
	case VK_SEPARATOR:
		std::cout << "[SEPARATOR]";
		break;
	case VK_SUBTRACT:
		std::cout << '-';
		break;
	case VK_DECIMAL:
		std::cout << '.';
		break;
	case VK_DIVIDE:
		std::cout << '/';
		break;
	case VK_NUMLOCK:
		std::cout << "[NUM LOCK]";
		break;
	case VK_SCROLL:
		std::cout << "[SCROLL LOCK]";
		break;
	case VK_LSHIFT:
		std::cout << "[LSHIFT]";
		break;
	case VK_RSHIFT:
		std::cout << "[RSHIFT]";
		break;
	case VK_LCONTROL:
		std::cout << "[LCONTROL]";
		break;
	case VK_RCONTROL:
		std::cout << "[RCONTROL]";
		break;
	case VK_LMENU:
		std::cout << "[LALT(LMENU)]";
		break;
	case VK_RMENU:
		std::cout << "[RALT(RMENU)]";
		break;
	case VK_BROWSER_BACK:
		std::cout << "[BROWSER BACK]";
		break;
	case VK_BROWSER_FORWARD:
		std::cout << "[BROWSER FORWARD]";
		break;
	case VK_BROWSER_REFRESH:
		std::cout << "[BROWSER REFRESH]";
		break;
	case VK_BROWSER_STOP:
		std::cout << "[BROWSER STOP]";
		break;
	case VK_BROWSER_SEARCH:
		std::cout << "[BROWSER SEARCH]";
		break;
	case VK_BROWSER_FAVORITES:
		std::cout << "[BROWSER FAVORITES]";
		break;
	case VK_BROWSER_HOME:
		std::cout << "[BROWSER HOME]";
		break;
	case VK_VOLUME_MUTE:
		std::cout << "[VOLUME MUTE]";
		break;
	case VK_VOLUME_DOWN:
		std::cout << "[VOLUME DOWN]";
		break;
	case VK_VOLUME_UP:
		std::cout << "[VOLUME UP]";
		break;
	case VK_MEDIA_NEXT_TRACK:
		std::cout << "[MEDIA NEXT TRACK]";
		break;
	case VK_MEDIA_PREV_TRACK:
		std::cout << "[MEDIA PREV TRACK]";
		break;
	case VK_MEDIA_STOP:
		std::cout << "[MEDIA STOP]";
		break;
	case VK_MEDIA_PLAY_PAUSE:
		std::cout << "[MEDIA PLAY/PAUSE]";
		break;
	case VK_LAUNCH_MAIL:
		std::cout << "[LAUNCH MAIL]";
		break;
	case VK_LAUNCH_MEDIA_SELECT:
		std::cout << "[LAUNCH MEDIA SELECT]";
		break;
	case VK_LAUNCH_APP1:
		std::cout << "[LAUNCH APP1]";
		break;
	case VK_LAUNCH_APP2:
		std::cout << "[LAUNCH APP2]";
		break;
	case VK_OEM_1:
		std::cout << "[;:]";
		break;
	case VK_OEM_PLUS:
		std::cout << '=';
		break;
	case VK_OEM_COMMA:
		std::cout << ',';
		break;
	case VK_OEM_MINUS:
		std::cout << '-';
		break;
	case VK_OEM_PERIOD:
		std::cout << '.';
		break;
	case VK_OEM_2:
		std::cout << "[/?]";
		break;
	case VK_OEM_3:
		std::cout << "[`~]";
		break;
	case VK_OEM_4:
		std::cout << "[[{]";
		break;
	case VK_OEM_5:
		std::cout << "[\\|]";
		break;
	case VK_OEM_6:
		std::cout << "[]}]";
		break;
	case VK_OEM_7:
		std::cout << "[\'\"]";
		break;
	case VK_OEM_8:
		std::cout << "[OEM 8]";
		break;
	case VK_OEM_102:
		std::cout << "[OEM 102]";
		break;
	case VK_PROCESSKEY:
		std::cout << "[IME PROCESS]";
		break;
	case VK_PACKET:
		std::cout << "[PACKET]";
		break;
	case VK_ATTN:
		std::cout << "[ATTN]";
		break;
	case VK_CRSEL:
		std::cout << "[CRSEL]";
		break;
	case VK_EXSEL:
		std::cout << "[EXSEL]";
		break;
	case VK_EREOF:
		std::cout << "[EREOF]";
		break;
	case VK_PLAY:
		std::cout << "[PLAY]";
		break;
	case VK_ZOOM:
		std::cout << "[ZOOM]";
		break;
	case VK_NONAME:
		std::cout << "[NONAME]";
		break;
	case VK_PA1:
		std::cout << "[PA1]";
		break;
	case VK_OEM_CLEAR:
		std::cout << "[CLEAR]";
		break;
	}
	std::cout << '\n';
}