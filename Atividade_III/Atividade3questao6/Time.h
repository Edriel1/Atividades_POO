//impede que múltiplas inclusões ocorram
#ifndef TIME_H
#define TIME_H

class Time 
{
public:
  Time( int = 0 , int = 0 , int = 0); //construtor

  //funções set
  void setTime(int , int, int); //protótipo
  void setHour( int );
  void setMinute( int );
  void setSecond( int );

  //funções get
  int getHour()const;
  int getMinute()const;
  int getSecond()const;

  void printUniversal()const;
  void printStandard()const;

  void Tick();

private:
  int hour;
  int minute;
  int second;
  void ValidarValor();
};

#endif