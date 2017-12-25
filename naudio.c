


#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<stdio.h>
#include<stdio.h>
#include<string.h>

int main( int argc, char *argv[])
{
    ////////////////////////////////////////////////////////
    if ( argc == 3)
      if ( strcmp( argv[1] , "-c" ) ==  0 ) 
      if ( strcmp( argv[2] , "1" ) ==  0 ) 
      {
         system( " alsamixer -c 1 " );
         return 0;
      }


    ////////////////////////////////////////////////////////
    if ( argc == 3)
      if ( strcmp( argv[1] , "-c" ) ==  0 ) 
      if ( strcmp( argv[2] , "2" ) ==  0 ) 
      {
         system( " alsamixer -c 2 " );
         return 0;
      }


    ////////////////////////////////////////////////////////
    if ( argc == 2)
      if ( strcmp( argv[1] , "--mylene-hw0" ) ==  0 ) 
      {
         system( " mplayer  -vo null -ao alsa:device=hw=0,0    \"http://listen.radionomy.com/mylenefarmerwebradio\" " );
         return 0;
      }

    ////////////////////////////////////////////////////////
    if ( argc == 2)
      if ( strcmp( argv[1] , "--mylene-hw1" ) ==  0 ) 
      {
         system( " mplayer  -vo null -ao alsa:device=hw=1,0    \"http://listen.radionomy.com/mylenefarmerwebradio\" " );
         return 0;
      }

    ////////////////////////////////////////////////////////
    if ( argc == 2)
      if ( strcmp( argv[1] , "--mylene-hw2" ) ==  0 ) 
      {
         system( " mplayer  -vo null -ao alsa:device=hw=2,0    \"http://listen.radionomy.com/mylenefarmerwebradio\" " );
         return 0;
      }


    ////////////////////////////////////////////////////////
    if ( argc == 2)
      if ( ( strcmp( argv[1] , "--mpg" ) ==  0 ) 
      || ( strcmp( argv[1] , "mpg" ) ==  0 ) )
      {
         system( " mpg123  \"http://listen.radionomy.com/mylenefarmerwebradio\" " );
         return 0;
      }


    ////////////////////////////////////////////////////////
    if ( argc == 2)
      if ( strcmp( argv[1] , "--mpg-hw1" ) ==  0 ) 
      {
         system( " mpg123 -a hw:1,0  \"http://listen.radionomy.com/mylenefarmerwebradio\" " );
         return 0;
      }


    ////////////////////////////////////////////////////////
    if ( argc == 2)
      if ( strcmp( argv[1] , "--mpg-hw2" ) ==  0 ) 
      {
         system( " mpg123 -a hw:2,0  \"http://listen.radionomy.com/mylenefarmerwebradio\" " );
         return 0;
      }





    ////////////////////////////////////////////////////////
    if ( argc == 2)
      if ( strcmp( argv[1] , "--hw1" ) ==  0 ) 
      {
         system( " mplayer  -vo null -ao alsa:device=hw=1,0    \"http://listen.radionomy.com/mylenefarmerwebradio\" " );
         return 0;
      }

    ////////////////////////////////////////////////////////
    if ( argc == 2)
      if ( strcmp( argv[1] , "--hw2" ) ==  0 ) 
      {
         system( " mplayer  -vo null -ao alsa:device=hw=2,0    \"http://listen.radionomy.com/mylenefarmerwebradio\" " );
         return 0;
      }



    printf("- TINYBOX naudio - \n");
    system( "  alsamixer " ); 
    return 0;
}



