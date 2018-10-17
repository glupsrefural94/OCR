#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double sigmoid(double x)
{
  return 1 / ( 1 + exp(-x));
}


double z = 0;
double h = 0;
double bz = 1;
double bh = 1;
double poids_yh = 0;
double poids_xh = 0;
double poids_bhh = 0;
double poids_yz = 0;
double poids_xz = 0;
double poids_hz = 0;
double poids_bzz = 0;
double target = 0;
double zerror = 0;
double herror = 0;
double bherror = 0;
double bzerror = 0;
double pas_v = 0.1;



double xor(double x,double y)
{
  if (x==y)
    {
      return 0;
    }
  else
    return 1;

}


double xorn(double x,double y)
{

  target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;


  target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;

  target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;
  target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;
  target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;
  target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;
  target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;
  target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;
  target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;
  target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;target = xor(x,y);
  h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
  z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
  zerror = ( target -  z ) * ( z * ( 1 - z ));
  poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
  poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
  poids_hz = ( pas_v * zerror * h ) - poids_hz;
  poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
  herror = ( h * ( 1  - h)) * poids_hz * zerror;
  poids_xh = ( pas_v * herror * x ) - poids_xh ;
  poids_yh =  ( pas_v * herror * y ) - poids_yh;
  poids_bhh = (pas_v *herror * bh ) - poids_bhh;

  for (int i = 0; i< 25000; i++)
    {
      target = xor(x,y);
      h = sigmoid( x * poids_xh + bh * poids_bhh + y * poids_yz );
      z = sigmoid( x * poids_xz + h * poids_hz + y * poids_yz );
      zerror = ( target -  z ) * ( z * ( 1 - z ));
      poids_xz = ( pas_v * zerror * x ) - poids_xz; // Si ca ne fonctionne pas passer le poids derriere avec un -
      poids_yz = ( pas_v * zerror * y ) - poids_yz ; 
      poids_hz = ( pas_v * zerror * h ) - poids_hz;
      poids_bzz = ( pas_v * zerror * bz ) - poids_bzz;
      herror = ( h * ( 1  - h)) * poids_hz * zerror;
      poids_xh = ( pas_v * herror * x ) - poids_xh ;
      poids_yh =  ( pas_v * herror * y ) - poids_yh;
      poids_bhh = (pas_v *herror * bh ) - poids_bhh;
    }


  return z ;
  
}
