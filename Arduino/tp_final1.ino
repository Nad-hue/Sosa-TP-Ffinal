#define sens_mov A2

#define motor1 3
#define motor1_1 2
#define motor1_2 4

#define motor2 5
#define motor2_1 7
#define motor2_2 8

#define motor3 6
#define motor3_1 9
#define motor3_2 10

#define motor4 11
#define motor4_1 12
#define motor4_2 13


char BT_recibido;
char BT;

int encenderMotores [] = {
    motor1 ,
  	motor2 ,
  	motor3 ,
  	motor4 ,
  };
int direccionMotres [] = {
  motor1_1 , motor1_2 ,
  motor2_1 , motor2_2 ,
  motor3_1 , motor3_2 ,
  motor4_1 , motor4_2 ,
};
  
////////// Funciones

void configuracionPines()
{
	for (int i = 2 ; i <=13 ; i++ )
    {
      pinMode( i , OUTPUT );
    }
  pinMode(A2 , INPUT);
}

void avanzar()
{
  int encendidoMotores [] = 
  {
	255 , 
    255 , 
    255 , 
    255 ,
  };
  
  int tipoDireccion [] =
  {
    1 , 0 ,
    1 , 0 ,
    1 , 0 ,
    1 , 0 ,
  };
  
  for ( int i = 0 ; i < sizeof(encenderMotores) / 2 ; i++)
  {
    analogWrite( encenderMotores[i] , encendidoMotores [i] );
  }
  
  for ( int i = 0 ; i < sizeof(direccionMotres) / 2 ; i++ )
  {
    digitalWrite( direccionMotres [i] , tipoDireccion [i] );
  }
}

void retroceder()
{
  int encendidoMotores [] = 
  {
	255 , 
    255 , 
    255 , 
    255 ,
  };
  
  int tipoDireccion [] =
  {
    0 , 1 ,
    0 , 1 ,
    0 , 1 ,
    0 , 1 ,
  };
  
  for ( int i = 0 ; i < sizeof(encenderMotores) / 2 ; i++)
  {
    analogWrite( encenderMotores[i] , encendidoMotores [i] );
  }
  
  for ( int i = 0 ; i < sizeof(direccionMotres) / 2 ; i++ )
  {
    digitalWrite( direccionMotres [i] , tipoDireccion [i] );
  }
}

void izquierdaAvanzando()
{
  int encendidoMotores [] = 
  {
	255 , 
    0 , 
    0 , 
    255 ,
  };
  
  int tipoDireccion [] =
  {
    1 , 0 ,
    1 , 0 ,
    1 , 0 ,
    1 , 0 ,
  };
  
  for ( int i = 0 ; i < sizeof(encenderMotores) / 2 ; i++)
  {
    analogWrite( encenderMotores[i] , encendidoMotores [i] );
  }
  
  for ( int i = 0 ; i < sizeof(direccionMotres) / 2 ; i++ )
  {
    digitalWrite( direccionMotres [i] , tipoDireccion [i] );
  }
}


void derechaAvanzando()
{
  int encendidoMotores [] = 
  {
	0   , 
    255 , 
    255 , 
    0   ,
  };
  
  int tipoDireccion [] =
  {
    1 , 0 ,
    1 , 0 ,
    1 , 0 ,
    1 , 0 ,
  };
  
  for ( int i = 0 ; i < sizeof(encenderMotores) / 2 ; i++)
  {
    analogWrite( encenderMotores[i] , encendidoMotores [i] );
  }
  
  for ( int i = 0 ; i < sizeof(direccionMotres) / 2 ; i++ )
  {
    digitalWrite( direccionMotres [i] , tipoDireccion [i] );
  }
}

void izquierdaEnSuEje()
{
 int encendidoMotores [] = 
  {
	255 , 
    255 , 
    255 , 
    255 ,
  };
  
  int tipoDireccion [] =
  {
    1 , 0 ,
    0 , 1 ,
    0 , 1 ,
    1 , 0 ,
  };
  
  for ( int i = 0 ; i < sizeof(encenderMotores) / 2 ; i++)
  {
    analogWrite( encenderMotores[i] , encendidoMotores [i] );
  }
  
  for ( int i = 0 ; i < sizeof(direccionMotres) / 2 ; i++ )
  {
    digitalWrite( direccionMotres [i] , tipoDireccion [i] );
  } 
}

void derechaEnSuEje()
{
  int encendidoMotores [] = 
  {
	255 , 
    255 , 
    255 , 
    255 ,
  };
  
  int tipoDireccion [] =
  {
    0 , 1 ,
    1 , 0 ,
    1 , 0 ,
    0 , 1 ,
  };
  
  for ( int i = 0 ; i < sizeof(encenderMotores) / 2 ; i++)
  {
    analogWrite( encenderMotores[i] , encendidoMotores [i] );
  }
  
  for ( int i = 0 ; i < sizeof(direccionMotres) / 2 ; i++ )
  {
    digitalWrite( direccionMotres [i] , tipoDireccion [i] );
  } 
}

void frenarLento()
{
  int encendidoMotores [] = 
  {
	255 , 
    255 , 
    255 , 
    255 ,
  };
  
  int tipoDireccion [] =
  {
    0 , 0 ,
    0 , 0 ,
    0 , 0 ,
    0 , 0 ,
  };
  
  for ( int i = 0 ; i < sizeof(encenderMotores) / 2 ; i++)
  {
    analogWrite( encenderMotores[i] , encendidoMotores [i] );
  }
  
  for ( int i = 0 ; i < sizeof(direccionMotres) / 2 ; i++ )
  {
    digitalWrite( direccionMotres [i] , tipoDireccion [i] );
  }
}

void frenarRapido()
{
  int encendidoMotores [] = 
  {
	255 , 
    255 , 
    255 , 
    255 ,
  };
  
  int tipoDireccion [] =
  {
    1 , 1 ,
    1 , 1 ,
    1 , 1 ,
    1 , 1 ,
  };
  
  for ( int i = 0 ; i < sizeof(encenderMotores) / 2 ; i++)
  {
    analogWrite( encenderMotores[i] , encendidoMotores [i] );
  }
  
  for ( int i = 0 ; i < sizeof(direccionMotres) / 2 ; i++ )
  {
    digitalWrite( direccionMotres [i] , tipoDireccion [i] );
  }
}

bool leerMovimiento()
{
  	int mov = analogRead(sens_mov);
  	if ( mov > 0 )
    {
      return true;
    }
}

void comunicacion()
{
  if (leerMovimiento() == true )
  {
     	Serial.write("Hay un objeto delante");
  }
}

////////// Final Funciones

void setup()
{
 	Serial.begin(9800);
  	Serial.setTimeout(50);
  	configuracionPines();
  
}

void loop()
{
  comunicacion();
  	switch (BT_recibido)
    {
      case 'w':
      avanzar();
      break;
      case's':
      retroceder();
      break;
      case 'a':
      izquierdaAvanzando();
      break;
      case 'd':
      derechaAvanzando();
      break;
      case 'q':
      izquierdaEnSuEje();
      break;
      case 'e':
      derechaEnSuEje();
      break;
      case 'f':
      frenarLento();
      break;
      case'F':
      frenarRapido();
      break;
    }
}
  
void serialEvent()
{
  while( Serial.available() ) 
  {
    BT_recibido = Serial.read();
  }

  Serial.flush();

}