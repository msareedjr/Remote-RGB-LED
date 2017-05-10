/*
 * Remote Controled RGB LED - Controls a RGB led using analogWrite
 * and a remote control that came with a RGB light bulb.
 * 
 * Version 0.1 May, 2017
 * Copyright 2017 Michael Reed 
 * https://michael-reed.com
 */
  
  Color::Color(  uint8_t red, uint8_t green, uint8_t blue)
  {
    setRGB(red, green, blue);
  }
  
  void Color::setRGB( uint8_t red, uint8_t green, uint8_t blue)
  {
    this.red = red;
    this.green = green;
    this.blue = blue;
  }
  bool operator == (Color &arg)
  {
    return (this.red == arg.red) && (this.green == arg.green) && (this.blue == arg.blue);
  }
  bool operator != (Color &arg)
  {
    return (this.red != arg.red) || (this.green != arg.green) || (this.blue != arg.blue);
  }
  static Color red = Color(255, 0, 0);
  static Color red_orange = Color(255, 63, 52);
  static Color orange = Color(255, 104, 31);
  static Color yellow_orange = Color(255, 174, 66);
  static Color yellow = Color(255, 255, 0);
  static Color yellow_green = Color(197, 225, 122);
  static Color green = Color(0, 255, 0);
  static Color caribbean_green = Color(0, 209, 155);
  static Color cyan = Color(0, 255, 255);
  static Color java = Color(31, 194, 194);
  static Color blue = Color(0, 0, 255);
  static Color blue_violet = Color(92, 0, 255);
  static Color purple = Color(175, 15, 255);
  static Color magenta = Color(255, 0, 255);
  static Color rose = Color(255, 0, 127);
  static Color white = Color(255, 255, 255);
