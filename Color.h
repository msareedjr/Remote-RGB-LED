/*
 * Remote Controled RGB LED - Controls a RGB led using analogWrite
 * and a remote control that came with a RGB light bulb.
 * 
 * Version 0.1 May, 2017
 * Copyright (C) 2017 Michael Reed https://michael-reed.com
 * 
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
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

