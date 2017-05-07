#ifndef RemoteKey_h
#define RemoteKey_h
#include <IRremote.h>
#include "Color.h"

typedef enum {
  brightness_up,
  brightness_down,
  power_off,
  power_on,
  color,
  flash,
  strobe,
  fade,
  smooth  
} Action;


class RemoteKey
{
  public:

  bool available(void);
  void getAction(Action &action);

  RemoteKey RemoteKey(int pin);
  private:

  decode_results result;
  IRrecv receiver;
  const std::map<uint32_t, Action> keyMap = {
    {0x7E064C31, Action::brightness_up},
    {0xDEB0C861, Action::brightness_down},
    {0xD4DD0381, Action::power_off},
    {0xCE1972FD, Action::power_on},
    {0xE85952E1, Action::color},
    {0xD3FD9A81, Action::color},
    {0x84044BBD, Action::color},
    {0xB0F9B3E1, Action::color},
    {0x9DE75E1D, Action::color},
    {0x78CDA4DD, Action::color},
    {0x6471EC7D, Action::color},
    {0x14789DB9, Action::color},
    {0x416E05DD, Action::color},
    {0xF794B621, Action::color},
    {0xA2672345, Action::color},
    {0x9D53009D, Action::color},
    {0x3E121C21, Action::color},
    {0x6A844445, Action::color},
    {0x57F52E81, Action::color},
    {0x9BA392C1, Action::color},
    {0xDCC45BE1, Action::flash},
    {0x374E8B9D, Action::strobe},
    {0xB9C07541, Action::fade},
    {0xA7315F7D, Action::smooth}
  }
  const std::map<uint32_t, Color> colorKeyMap = {
    {E85952E1, Color::},
    {D3FD9A81, Color::},
    {84044BBD, Color::},
    {B0F9B3E1, Color::},
    {9DE75E1D, Color::},
    {78CDA4DD, Color::},
    {6471EC7D, Color::},
    {14789DB9, Color::},
    {416E05DD, Color::},
    {F794B621, Color::},
    {A2672345, Color::},
    {9D53009D, Color::},
    {3E121C21, Color::},
    {6A844445, Color::},
    {57F52E81, Color::},
    {9BA392C1, Color::}
  }
  
  int initializeRemote(int pin);
  int decode(decode_results &results);

}
#endif
