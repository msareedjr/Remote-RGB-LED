#ifndef Color_h
#define Color_h

class Color
{
  public:
  
  uint8_t red;
  uint8_t green;
  uint8_t blue;
  
  void setRGB( uint8_t red, uint8_t green, uint8_t blue);
  
  Color(  uint8_t red, uint8_t green, uint8_t blue);
  
  bool operator == (Color &arg);
  bool operator != (Color &arg);
  
}
#endif

