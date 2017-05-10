/*
 * Remote Controled RGB LED - Controls a RGB led using analogWrite
 * and a remote control that came with a RGB light bulb.
 * 
 * Version 0.1 May, 2017
 * Copyright 2017 Michael Reed 
 * https://michael-reed.com
 */
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

