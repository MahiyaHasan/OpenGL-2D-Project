//Basic QUADS
#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <dos.h> //for delay

#define PI  3.1416

static GLfloat spin = 0.0;
float u = -120;
float nd1 = 0;
float nd2 = 100;
float nd3 = 100;
float nd4 = 100;
float nd5 = 100;

int ncnt = 0;
int dcnt = 0;
int cnt = 0;
//float u = 0;
float v = 0;
float rku = 0;
float rkv = 0;
float lku = 0;
float lkv = 0;
float dhuli1 = -70;
float dhuli2 = -200;
float dhuli3 = -200;
float d;
void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glOrtho(-100,100,-100,100,0,1);
}

void moveleftkite()
{
    lku -= 0.01 ;
    lkv += 0.01;
    glutPostRedisplay();

}
void moveleftkite_right()
{
    lku += 0.01;
    lkv += 0.001;
    glutPostRedisplay();

}

void moverightkite()
{
    rku -= 0.01 ;
    rkv -= 0.01;
    glutPostRedisplay();

}
void moverightkite_right()
{
    rku += 0.01;
    rkv += 0.001;
    glutPostRedisplay();

}
void setleftkite()
{
    lku = 0 ;
    lkv = 0 ;
    glutPostRedisplay();

}
void setrightkite()
{
    rku = 0 ;
    rkv = 0 ;
    glutPostRedisplay();

}
void circle(float radius_x, float radius_y, float u, float v)
{
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * radius_x + u - 60, sin(angle) * radius_y + v);
			//glVertex2f (cos(angle) * radius_x+5, sin(angle) * radius_y);
		}

	glEnd();
}
void border(float radius_x, float radius_y, float u, float v)
{
	int i=0;
	float angle = 0.0;
    glLineWidth(1);

	glBegin(GL_LINE_STRIP);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * radius_x , sin(angle) * radius_y );
			//glVertex2f (cos(angle) * radius_x+5, sin(angle) * radius_y);
		}

	glEnd();
}

void circleLine(float radius_x, float radius_y, int i1, int i2, float u, float v)
{
	int i=0;
	float angle = 0.0;
glLineWidth(2);
	glBegin(GL_LINE_STRIP);

		for(i = i1; i < i2; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * radius_x + u - 60, sin(angle) * radius_y+v);
			//glVertex2f (cos(angle) * radius_x+5, sin(angle) * radius_y);
		}

	glEnd();
}

void circlePolygon(float radius_x, float radius_y, int i1, int i2, float u, float v)
{
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = i1; i < i2; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * radius_x+ u -60, sin(angle) * radius_y+v);
			//glVertex2f (cos(angle) * radius_x+5, sin(angle) * radius_y);
		}

	glEnd();
}
void spinDisplay_right(void)
{
    spin = spin - 2;
    glutPostRedisplay();
}
void stop_spinDisplay(void)
{
    spin = 0.0;
    glutPostRedisplay();
}
/*void spin_nagordola(void)
{
for(cnt = 0; cnt <=100; cnt++ )
{
    if(cnt==1)
    {
      nd1=0;
      nd2=100;
      glutPostRedisplay();
      Sleep(2000);

    }
    if(cnt == 50)
    {
        nd2=0;
        nd1=100;
        glutPostRedisplay();
        Sleep(2000);


    }
    if(cnt == 100)
        cnt = 0;
}
}
*/
void myDisplay()
{


    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


  glPushMatrix();/// blue sky

  glBegin(GL_QUADS);
  glColor3f(0.98,0.88,0.98);
  glVertex2d(100,-30);
  glColor3f(0.18,0.02,0.79);
  glVertex2d(100,100);
  glColor3f(0.32,0.6,0.85);
  glVertex2d(-100,100);
  glColor3f(0.77,0.85,0.98);
  glVertex2d(-100,-30);
  glEnd();
  glPopMatrix();/// blue sky finished


  /// Cloud begins
  /// cloud 1 begins
  glColor3f(0.92,0.94,0.94);


  glPushMatrix();
  glTranslatef(-16+10, 75, 0);
  circle(8,8,0,0);
  glPopMatrix();


  glPushMatrix();
  glTranslatef(-9+10, 80, 0);
  circle(6,6,0,0);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(-7+10, 72, 0);
  circle(10,10,0,0);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(0+10, 85, 0);
  circle(8,8,0,0);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(10+10, 75, 0);
  circle(12,12,0,0);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(25+10, 73, 0);
  circle(8,8,0,0);
  glPopMatrix();
  /// cloud 1 finishes

  /// cloud 3 begins

  //glColor3f(0.79,0.84,0.87);
   glColor3f(0.91,0.93,0.99);


  glPushMatrix();
  glTranslatef(-16+120, 75, 0);
  circle(8,8,0,0);
  glPopMatrix();


  glPushMatrix();
  glTranslatef(-9+120, 80, 0);
  circle(6,6,0,0);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(-7+120, 72, 0);
  circle(10,10,0,0);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(0+120, 85, 0);
  circle(8,8,0,0);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(10+120, 75, 0);
  circle(12,12,0,0);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(25+120, 73, 0);
  circle(8,8,0,0);
  glPopMatrix();
  /// cloud 3 finishes

glColor3f(0.98,0.95,0.39);   /// sun starts
  glPushMatrix();
  glTranslatef(-16+95, 80, 0);
  circle(12,12,0,0);
  glPopMatrix(); /// sun finishes


  /// cloud 2 begins
/*
  glColor4f(0.79,0.89,0.98, 0.1);


  glPushMatrix();
  glTranslatef(-16+40, 75-15, 0);
  circle(8,8,0,0);
  glPopMatrix();


  glPushMatrix();
  glTranslatef(-9+40, 80-15, 0);
  circle(6,6,0,0);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(-7+40, 72-15, 0);
  circle(10,10,0,0);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(0+40, 85-15, 0);
  circle(8,8,0,0);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(10+40, 75-15, 0);
  circle(12,12,0,0);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(25+40, 73-15, 0);
  circle(8,8,0,0);
  glPopMatrix();

  */
  /// cloud 2 finishes
  /// Cloud ends

/// Kite begins

/// left Kite
glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.97,0.16,0.26);
glVertex2d(-45-3+lku, 80+lkv);
glVertex2d(-60+3+lku, 75+4+lkv);
glVertex2d(-60+lku, 55+10+lkv);
glVertex2d(-40-5+lku, 68+4+lkv);
glEnd();

glBegin(GL_TRIANGLES);
//glColor3f(0.2,0.69,1);
glColor3f(0.48,0.8,1);
glVertex2d(-60+1+lku, 55+12+lkv);
glVertex2d(-68+lku, 60+lkv);
glVertex2d(-60+lku, 55+lkv);

glEnd();
glLineWidth(0.5);

glBegin(GL_LINES);
glColor3f(1,1,1);

glVertex2d(-45-3+lku, 80+lkv);
glVertex2d(-60+lku, 55+10+lkv);

glVertex2d(-60+3+lku, 75+4+lkv);
glVertex2d(-40-5+lku, 68+4+lkv);

glColor3f(0.16,0.12,0.39);
glVertex2d(-51.5+lku, 76+lkv);
glVertex2d(-100, -10);

glEnd();


glPopMatrix();
/// left Kite finishes

/// right Kite
glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.96,0.27,0.59);
glVertex2d(-45-3+40+rku, 80+15+rkv);
glVertex2d(-60+3+40+rku, 75+4+15+rkv);
glVertex2d(-60+40+rku, 55+10+15+rkv);
glVertex2d(-40-5+40+rku, 68+4+15+rkv);
glEnd();

glBegin(GL_TRIANGLES);
//glColor3f(0.2,0.69,1);
glColor3f(0.26,0.98,0.34);
glVertex2d(-60+1+40+rku, 55+12+15+rkv);
glVertex2d(-68+40+rku, 60+15+rkv);
glVertex2d(-60+40+rku, 55+15+rkv);

glEnd();
glLineWidth(0.5);

glBegin(GL_LINES);
glColor3f(1,1,1);

glVertex2d(-45-3+40+rku, 80+15+rkv);
glVertex2d(-60+40+rku, 55+10+15+rkv);

glVertex2d(-60+3+40+rku, 75+4+15+rkv);
glVertex2d(-40-5+40+rku, 68+4+15+rkv);

glColor3f(0.16,0.12,0.39);
glVertex2d(-51.5+40+rku, 76+15+rkv);
glVertex2d(90, -30);

glEnd();


glPopMatrix();;
/// right Kite finishes

/// Kite Finishes


/// Nagordola starts

glPushMatrix(); /// nagordola right support
glTranslatef(0+nd1,0,0);
  glBegin(GL_POLYGON);
  glColor3f(0.72,0.31,0.04);
  glColor3f(0.89,0.08,0.09);

  glVertex2d(90, 46+10);
  glVertex2d(85, 50+10);
  glVertex2d(25,0+10);
  glVertex2d(30,-4+10);
  glEnd();
/// nagordola right support ends

 /// nagordola left support
  glBegin(GL_POLYGON);
  glColor3f(0.89,0.08,0.09);
  glVertex2d(90 - 68, 50 + 10);
  glVertex2d(85 - 68, 44 +10);
  glVertex2d(25 + 68, - 6 +10);
  glVertex2d(30 + 68, 0 +10);
  glEnd();
 /// nagordola left support ends

/// nagordola support chord
glLineWidth(0.5);
glColor3f(1,1,1);

glBegin(GL_LINES);

  glVertex2d(90 - 68, 50 + 10);
  glVertex2d(85, 50+10);


  glVertex2d(25 + 68, - 6 +10);
  glVertex2d(85, 50+10);

  glVertex2d(25 + 68, - 6 +10);
  glVertex2d(30,-4+10);

  glVertex2d(30,-4+10);
  glVertex2d(90 - 68, 50 + 10);
glEnd();

/// nagordola support chord ends

 /// nagordola base
  glBegin(GL_POLYGON);
  glColor3f(0.92,0.52,0.18);
  glVertex2d(50 + 2,-30);
  glVertex2d(60 + 2 ,-30);
  glVertex2d(60 + 2,52);
  glVertex2d(59 + 2,54);
  glVertex2d(51 + 2,54);
  glVertex2d(50 + 2,52);
  glEnd();
/// nagordola base ends



/// nagordola seats

glBegin(GL_QUADS);
//glColor3f(0.98,0.72,0.24);
glColor3f(1,0.87,0.45);

glVertex2d(94-60,53); /// clockwise top left
glVertex2d(78-60,53);
glVertex2d(78-60,41);
glVertex2d(94-60,41);

glVertex2d(94,53); //  top right
glVertex2d(78,53);
glVertex2d(78,41);
glVertex2d(94,41);

glVertex2d(94+4,52-45); // bottom right
glVertex2d(78+4,52-45);
glVertex2d(78+4,40-45);
glVertex2d(94+4,40-45);


glVertex2d(94+4-60,52-45); // bottom left
glVertex2d(78+4-60,52-45);
glVertex2d(78+4-60,40-45);
glVertex2d(94+4-60,40-45);
glEnd();

/// nagordola seats ends

/// nagordola seat design
glLineWidth(25);

glBegin(GL_LINES);

glColor3f(0.98,0.03,0.44);/// clockwise top left
glVertex2d(94-60,46);
glVertex2d(78-60,46);


glColor3f(1,0.37,0);///  top right
glVertex2d(78,46);
glVertex2d(94,46);


glColor3f(0.98,0.03,0.44);/// bottom right
glVertex2d(94+4,0);
glVertex2d(78+4,0);



glColor3f(1,0.37,0);/// bottom left
glVertex2d(94+4-60,0);
glVertex2d(78+4-60,0);

glEnd();
glPopMatrix();
/// nagordola seat design ends
glPushMatrix(); /// nagordola join screw
glTranslatef(117,32,0);
  glColor3f(1,0.89,0.69);
  circle(2.5,2.5,0,0);
  glPopMatrix();  /// nagordola join screw finishes
glPopMatrix();
/// Nagordola ends


/// Nagordola 2 starts

glPushMatrix(); /// nagordola right support
glTranslatef(0+nd2,0,0);
  glBegin(GL_POLYGON);
  glColor3f(0.72,0.31,0.04);
  glColor3f(0.89,0.08,0.09);
  glVertex2d(5+55,70);
  glVertex2d(-5+55,70);
  glVertex2d(-5+55,-8);
  glVertex2d(5+55,-8);
  glEnd();
/// nagordola right support ends

 /// nagordola left support
  glBegin(GL_POLYGON);
  glColor3f(0.89,0.08,0.09);
  glVertex2d(25+12+60,38);
  glVertex2d(-55+15+55,38);
  glVertex2d(-55+15+55,30);
  glVertex2d(25+12+60,30);
  glEnd();
 /// nagordola left support ends

/// nagordola support chord
glLineWidth(0.5);
glColor3f(1,1,1);

glBegin(GL_LINES);


  glVertex2d(-55+15+55,32);// L
glVertex2d(2+55,70);// U

glVertex2d(2+55,70);// U
  glVertex2d(25+12+60,32);//R

  glVertex2d(25+12+60,32);//R
  glVertex2d(5+55,-8);//D

  glVertex2d(5+55,-8);//D
  glVertex2d(-55+15+55,32);// L





glEnd();

/// nagordola support chord ends




/// nagordola seats

glBegin(GL_QUADS);
//glColor3f(0.98,0.72,0.24);
glColor3f(1,0.87,0.45);

glVertex2d(94-60+30,53+15); /// clockwise top left
glVertex2d(78-60+30,53+15);
glVertex2d(78-60+30,41+15);
glVertex2d(94-60+30,41+15);

glVertex2d(94,53-20); //  top right
glVertex2d(78,53-20);
glVertex2d(78,41-20);
glVertex2d(94,41-20);

glVertex2d(94+4-30-5,52-45); // bottom right
glVertex2d(78+4-30-5,52-45);
glVertex2d(78+4-30-5,40-45);
glVertex2d(94+4-30-5,40-45);


glVertex2d(94+4-60-5,52-45+30-5); // bottom left
glVertex2d(78+4-60-5,52-45+30-5);
glVertex2d(78+4-60-5,40-45+30-5);
glVertex2d(94+4-60-5,40-45+30-5);
glEnd();

/// nagordola seats ends

/// nagordola seat design
glLineWidth(25);

glBegin(GL_LINES);

glColor3f(0.98,0.03,0.44);/// clockwise top left
glVertex2d(94-60+30,47+15);
glVertex2d(78-60+30,47+15);


glColor3f(1,0.37,0);///  top right
glVertex2d(78,46-20);
glVertex2d(94,46-20);


glColor3f(0.98,0.03,0.44);/// bottom right
glVertex2d(94+4-30-5,1);
glVertex2d(78+4-30-5,1);



glColor3f(1,0.37,0);/// bottom left
glVertex2d(94+4-65,30-5);
glVertex2d(78+4-65,30-5);

glEnd();
glPopMatrix();
/// nagordola seat design ends
/// nagordola base
  glBegin(GL_POLYGON);
  glColor3f(0.92,0.52,0.18);
  glVertex2d(50 + 2,-30);
  glVertex2d(60 + 2 ,-30);
  glVertex2d(60 + 2,52);
  glVertex2d(59 + 2,54);
  glVertex2d(51 + 2,54);
  glVertex2d(50 + 2,52);
  glEnd();
/// nagordola base ends
glPushMatrix(); /// nagordola join screw
glTranslatef(117,32,0);
  glColor3f(1,0.89,0.69);
  circle(2.5,2.5,0,0);
  glPopMatrix();  /// nagordola join screw finishes
glPopMatrix();

/// Nagordola ends


/// Nagordola 3 starts

glPushMatrix(); /// nagordola right support
glTranslatef(0+nd3,0,0);
  glBegin(GL_POLYGON);
  glColor3f(0.89,0.08,0.09);

  glVertex2d(90, 46+10);
  glVertex2d(85, 50+10);
  glVertex2d(25,0+10);
  glVertex2d(30,-4+10);
  glEnd();
/// nagordola right support ends

 /// nagordola left support
  glBegin(GL_POLYGON);
  glColor3f(0.72,0.31,0.04);
  glColor3f(0.89,0.08,0.09);


  glVertex2d(90 - 68, 50 + 10);
  glVertex2d(85 - 68, 44 +10);
  glVertex2d(25 + 68, - 6 +10);
  glVertex2d(30 + 68, 0 +10);
  glEnd();
 /// nagordola left support ends

/// nagordola support chord
glLineWidth(0.5);
glColor3f(1,1,1);

glBegin(GL_LINES);

  glVertex2d(90, 55);
  glVertex2d(30, 55);


  glVertex2d(87, 4);
  glVertex2d(90, 55);

  glVertex2d(87, 4);
  glVertex2d(30, 2);

  glVertex2d(25, 2);
  glVertex2d(30, 55);
glEnd();

/// nagordola support chord ends

 /// nagordola base
  glBegin(GL_POLYGON);
  glColor3f(0.92,0.52,0.18);
  glVertex2d(50 + 2,-30);
  glVertex2d(60 + 2 ,-30);
  glVertex2d(60 + 2,52);
  glVertex2d(59 + 2,54);
  glVertex2d(51 + 2,54);
  glVertex2d(50 + 2,52);
  glEnd();
/// nagordola base ends



/// nagordola seats

glBegin(GL_QUADS);
//glColor3f(0.98,0.72,0.24);
glColor3f(1,0.87,0.45);

glVertex2d(94-60,53); /// clockwise top left
glVertex2d(78-60,53);
glVertex2d(78-60,41);
glVertex2d(94-60,41);

glVertex2d(94,53); //  top right
glVertex2d(78,53);
glVertex2d(78,41);
glVertex2d(94,41);

glVertex2d(94+4,52-45); // bottom right
glVertex2d(78+4,52-45);
glVertex2d(78+4,40-45);
glVertex2d(94+4,40-45);


glVertex2d(94+4-60,52-45); // bottom left
glVertex2d(78+4-60,52-45);
glVertex2d(78+4-60,40-45);
glVertex2d(94+4-60,40-45);
glEnd();

/// nagordola seats ends

/// nagordola seat design
glLineWidth(25);

glBegin(GL_LINES);

glColor3f(1,0.37,0);/// clockwise top left
glVertex2d(94-60,46);
glVertex2d(78-60,46);


glColor3f(0.98,0.03,0.44);///  top right
glVertex2d(78,46);
glVertex2d(94,46);


glColor3f(1,0.37,0);/// bottom right
glVertex2d(94+4,0);
glVertex2d(78+4,0);



glColor3f(0.98,0.03,0.44);/// bottom left
glVertex2d(94+4-60,0);
glVertex2d(78+4-60,0);

glEnd();
glPopMatrix();
/// nagordola seat design ends
glPushMatrix(); /// nagordola join screw
glTranslatef(117,32,0);
  glColor3f(1,0.89,0.69);
  circle(2.5,2.5,0,0);
  glPopMatrix();  /// nagordola join screw finishes
glPopMatrix();
/// Nagordola 3 ends



/// Nagordola 4 starts

glPushMatrix(); /// nagordola right support
glTranslatef(0+nd4,0,0);
  glBegin(GL_POLYGON);
  glColor3f(0.89,0.08,0.09);

  glVertex2d(95, 46-10+2);
  glVertex2d(90, 50-5);
  glVertex2d(15,0+25);
  glVertex2d(20,-4+20+2);
  glEnd();
/// nagordola right support ends

 /// nagordola left support
  glBegin(GL_POLYGON);
  glColor3f(0.72,0.31,0.04);
  glColor3f(0.89,0.08,0.09);


  glVertex2d(90 - 56, 50 + 15);
  glVertex2d(85 - 56, 44 + 15);
  glVertex2d(25 + 56, - 6 );
  glVertex2d(30 + 56, 0 );
  glEnd();
 /// nagordola left support ends

/// nagordola support chord
glLineWidth(0.5);
glColor3f(1,1,1);

glBegin(GL_LINES);


glVertex2d(90, 45);
glVertex2d(34, 65);


 //
 glVertex2d(34, 65);
glVertex2d(17,22);

  //
  //
  glVertex2d(80, -1 );
glVertex2d(90, 45);

  glVertex2d(85, - 4 );
  glVertex2d(17,22);



/*
glVertex2d(90, 45);
  glVertex2d(15,23);



*/


glEnd();

/// nagordola support chord ends

 /// nagordola base
  glBegin(GL_POLYGON);
  glColor3f(0.92,0.52,0.18);
  glVertex2d(50 + 2,-30);
  glVertex2d(60 + 2 ,-30);
  glVertex2d(60 + 2,52);
  glVertex2d(59 + 2,54);
  glVertex2d(51 + 2,54);
  glVertex2d(50 + 2,52);
  glEnd();
/// nagordola base ends



/// nagordola seats

glBegin(GL_QUADS);
//glColor3f(0.98,0.72,0.24);
glColor3f(1,0.87,0.45);

glVertex2d(94-60+5,53+5); /// clockwise top left
glVertex2d(78-60+5,53+5);
glVertex2d(78-60+5,41+5);
glVertex2d(94-60+5,41+5);

glVertex2d(94+3,53-12); //  top right
glVertex2d(78+3,53-12);
glVertex2d(78+3,41-12);
glVertex2d(94+3,41-12);

glVertex2d(94-2+3-2,52-45-5+2); // bottom right
glVertex2d(78-2+3-2,52-45-5+2);
glVertex2d(78-2+3-2,40-45-5+2);
glVertex2d(94-2+3-2,40-45-5+2);


glVertex2d(94+4-60-4-5,52-45+20-5); // bottom left
glVertex2d(78+4-60-4-5,52-45+20-5);
glVertex2d(78+4-60-4-5,40-45+20-5);
glVertex2d(94+4-60-4-5,40-45+20-5);
glEnd();

/// nagordola seats ends

/// nagordola seat design
glLineWidth(25);

glBegin(GL_LINES);

glColor3f(1,0.37,0);/// clockwise top left
glVertex2d(94-60+5,46+5);
glVertex2d(78-60+5,46+5);


glColor3f(0.98,0.03,0.44);///  top right
glVertex2d(78+3,46-12);
glVertex2d(94+3,46-12);


glColor3f(1,0.37,0);/// bottom right
glVertex2d(94-2+3-2,0-7+4+2);
glVertex2d(78-2+3-2,0-7+4+2);



glColor3f(0.98,0.03,0.44);/// bottom left
glVertex2d(94+4-60-4-5,0+20-5);
glVertex2d(78+4-60-4-5,0+20-5);

glEnd();
glPopMatrix();
/// nagordola seat design ends
glPushMatrix(); /// nagordola join screw
glTranslatef(117,32,0);
  glColor3f(1,0.89,0.69);
  circle(2.5,2.5,0,0);
  glPopMatrix();  /// nagordola join screw finishes
glPopMatrix();
/// Nagordola 4 ends


/// Nagordola 5 starts

glPushMatrix(); /// nagordola right support
glTranslatef(0+nd5,0,0);
  glBegin(GL_POLYGON);
  glColor3f(0.72,0.31,0.04);
  glColor3f(0.89,0.08,0.09);

  glVertex2d(90-16+2+5, 46+15);
  glVertex2d(85-16+2+5, 50+15+3);
  glVertex2d(25+10+2-5,0+7+3-2);
  glVertex2d(30+10+2-5,-4+7-2);
  glEnd();
/// nagordola right support ends

 /// nagordola left support
  glBegin(GL_POLYGON);
  glColor3f(0.89,0.08,0.09);
  glVertex2d(90 - 68, 50 + 10-22+3+5);
  glVertex2d(85 - 68, 44 +10-24+3+5);
  glVertex2d(25 + 68, - 6 +10+20);
  glVertex2d(30 + 68, 0 +10+20+2);
  glEnd();
 /// nagordola left support ends

/// nagordola support chord
glLineWidth(0.5);
glColor3f(1,1,1);

glBegin(GL_LINES);


glVertex2d(80, 61);//RU
glVertex2d(23, 44);// LD

glVertex2d(85+8, 22-5);//LU
glVertex2d(80, 61);//RU

glVertex2d(35,4);// RD
glVertex2d(85+8, 22-5);//LU


glVertex2d(35,4);// RD
glVertex2d(23, 44);// LD




/*
glVertex2d(90, 45);
  glVertex2d(15,23);



*/


glEnd();

/// nagordola support chord ends

 /// nagordola base
  glBegin(GL_POLYGON);
  glColor3f(0.92,0.52,0.18);
  glVertex2d(50 + 2,-30);
  glVertex2d(60 + 2 ,-30);
  glVertex2d(60 + 2,52);
  glVertex2d(59 + 2,54);
  glVertex2d(51 + 2,54);
  glVertex2d(50 + 2,52);
  glEnd();
/// nagordola base ends



/// nagordola seats

glBegin(GL_QUADS);
//glColor3f(0.98,0.72,0.24);
glColor3f(1,0.87,0.45);

glVertex2d(94-60+5+48,53+5+5); /// clockwise top left
glVertex2d(78-60+5+48,53+5+5);
glVertex2d(78-60+5+48,41+5+5);
glVertex2d(94-60+5+48,41+5+5);

glVertex2d(94+3,53-12-10-8+4); //  top right
glVertex2d(78+3,53-12-10-8+4);
glVertex2d(78+3,41-12-10-8+4);
glVertex2d(94+3,41-12-10-8+4);

glVertex2d(94-2-45,52-45-7+5); // bottom right
glVertex2d(78-2-45,52-45-7+5);
glVertex2d(78-2-45,40-45-7+5);
glVertex2d(94-2-45,40-45-7+5);


glVertex2d(94+4-60-4-5-1,52-45+20-5+15); // bottom left
glVertex2d(78+4-60-4-5-1,52-45+20-5+15);
glVertex2d(78+4-60-4-5-1,40-45+20-5+15);
glVertex2d(94+4-60-4-5-1,40-45+20-5+15);
glEnd();

/// nagordola seats ends

/// nagordola seat design
glLineWidth(25);

glBegin(GL_LINES);

glColor3f(1,0.37,0);/// clockwise top left
glVertex2d(94-60+5+48,46+5+2+5);
glVertex2d(78-60+5+48,46+5+2+5);


glColor3f(0.98,0.03,0.44);///  top right
glVertex2d(78+3,46-12-10-8+4);
glVertex2d(94+3,46-12-10-8+4);


glColor3f(1,0.37,0);/// bottom right
glVertex2d(94-2-45,0-7+5);
glVertex2d(78-2-45,0-7+5);



glColor3f(0.98,0.03,0.44);/// bottom left
glVertex2d(94+4-60-4-5-1,0+20-5+15);
glVertex2d(78+4-60-4-5-1,0+20-5+15);

glEnd();
glPopMatrix();
/// nagordola seat design ends
glPushMatrix(); /// nagordola join screw
glTranslatef(117,32,0);
  glColor3f(1,0.89,0.69);
  circle(2.5,2.5,0,0);
  glPopMatrix();  /// nagordola join screw finishes
glPopMatrix();
/// Nagordola 5 ends

  glPushMatrix();/// green background
  glBegin(GL_QUADS);
  //glColor3f(0.66,0.98,0.56);
  glColor3f(0.18,0.85,0.41);
  glVertex2d(-100,-30);
  glColor3f(0.76,0.98,0.46);
  glVertex2d(-100,-100);
  //glColor3f(0.42,0.98,0.36);
  glColor3f(0.18,0.85,0.41);
  glVertex2d(100,-100);
  glColor3f(0.96,0.98,0.65);
  glVertex2d(100,-30);
  glEnd();
  glPopMatrix();/// green background finished

     /// DRAW GRID BEGIN
    /*
    int i;
    glLineWidth(1);          //Line drawing
    glColor3f(1.0, 0.0, 0.0);

    for(i = 0; i < 50; i++)
    {
    glBegin(GL_LINES);
    glVertex3f(-20  + i, -20, 0.0);
    glVertex3f(-20 + i, 20, 0.0);
    glEnd();
    }

for(i = 0; i < 50; i++)
    {
    glBegin(GL_LINES);
    glVertex3f(-20, -20+i, 0.0);
    glVertex3f(20, -20+i, 0.0);
    glEnd();
    }

*//// DRAW GRID FINISH



/// DHULI 1 STARTS

glPushMatrix();
glTranslatef(dhuli1,-20,0);

glBegin(GL_POLYGON);/// gola
glColor3f(0.89,0.57,0.13);
glVertex2f(39,38);
glVertex2f(35,38);
glVertex2f(35,32);
glVertex2f(39,32);
glEnd();

glPushMatrix();/// matha
glColor3f(0.95,0.82,0.52);
glTranslatef(97,40,0);
circle(4,6,0,0);
glPopMatrix();

glBegin(GL_POLYGON);///chul
glColor3f(0,0,0);

glVertex2f(41,45);
glVertex2f(41,46);
glVertex2f(39,46);
glVertex2f(38,47);
glVertex2f(36,47);
glVertex2f(33,46);
glVertex2f(33,42);



glEnd();

glBegin(GL_POLYGON);///fita
glColor3f(1,0,0);
glVertex2f(41,45);
glVertex2f(33,45);
glVertex2f(33,42);
glVertex2f(41,42);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2f(41,45);
glVertex2f(41,42);
glVertex2f(45,44);
glVertex2f(45,48);

glVertex2f(41,45);
glVertex2f(41,42);
glVertex2f(47,35);
glVertex2f(48,38);
glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.85,0.85,0.86);

        glVertex2f(46,30);
        glVertex2f(44,32);
        glVertex2f(42,32);
        glVertex2f(42,28);
        glVertex2f(47,24);
        glVertex2f(49,26);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.95,0.82,0.52);

        glVertex2f(49,26);
        glVertex2f(47,24);
        glVertex2f(50,15);
        glVertex2f(52,17);

    glEnd();/// right hand finishes

    /// left hand finishes
 glBegin(GL_POLYGON);
    glColor3f(0.85,0.85,0.86);

        glVertex2f(32+2,30);
        glVertex2f(30+2,32);
        glVertex2f(28+2,32);
        glVertex2f(23+2,27);
        glVertex2f(24+3,25);
        glVertex2f(30+2,28);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.95,0.82,0.52);


        glVertex2f(24+3,25);
        glVertex2f(23+2,27);
        glVertex2f(25,15);
        glVertex2f(27,17);

    glEnd();
    /// left hand ends
/// paa
glBegin(GL_POLYGON);
    glColor3f(0.94,0.62,0.18);
        glVertex2f(5+30,0);
        glVertex2f(1+30,0);
        glVertex2f(1+30,-6);
        glVertex2f(5+30,-6);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.94,0.62,0.18);
        glVertex2f(5+30,-6);
        glVertex2f(1+30,-6);
        glVertex2f(1+27,-10);
        glVertex2f(1+32,-10);
    glEnd();/// left pa finish

    glBegin(GL_POLYGON);
    glColor3f(0.94,0.62,0.18);
        glVertex2f(5+30+9,0);
        glVertex2f(1+30+9,0);
        glVertex2f(1+30+9,-6);
        glVertex2f(5+30+9,-6);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.94,0.62,0.18);
        glVertex2f(5+30+9,-6);
        glVertex2f(1+30+9,-6);
        glVertex2f(30+8+3,-10);
        glVertex2f(7+30+9,-10);
    glEnd();/// left pa finish
///
    glBegin(GL_POLYGON);/// genji
    glColor3f(1,1,1);
        glVertex2f(42,32);
        glVertex2f(40,33);
        glVertex2f(35,33);
        glVertex2f(32,32);
        glVertex2f(32,20);
        glVertex2f(42,20);
    glEnd();

    glBegin(GL_QUADS);/// lungi
    glColor3f(0.17,0.38,0.54);
        glVertex2f(42,20);
        glVertex2f(32,20);
        glVertex2f(30,0);
        glVertex2f(45,0);
    glEnd();
    glLineWidth(2);

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(41,20);
    glVertex2f(41,0);

    glVertex2f(37,20);
    glVertex2f(37,0);

    glVertex2f(33,20);
    glVertex2f(33,0);

    glColor3f(0.57,0.77,0.93);

    glVertex2f(31.5,15);
    glVertex2f(43,15);

    glVertex2f(31,10);
    glVertex2f(43.5,10);

    glVertex2f(30.5,5);
    glVertex2f(44.5,5);
    glEnd();
 ///ribbon
    glLineWidth(8);
    glColor3f(0.48,0.19,0.02);

    glBegin(GL_LINES);
    glVertex2f(16+10,20);
    glVertex2f(11+20+3,33);

    glVertex2f(16+10+16+5,20.5);
    glVertex2f(11+20+5+4,33);
    glEnd();

    ///ribbon ends
    glPushMatrix();/// dhol starts
    glTranslatef(37+60,18,0);
    glColor3f(1,0,0);
    circle(12,5,0,0);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(37,18,0);
    border(12,5,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(37,18,0);
    border(10,3,0,0);
    glPopMatrix();



    glPushMatrix();
    glTranslatef(37,18,0);
    glColor3f(1,1,1);

    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2f(-11,0);
    glVertex2f(11,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();/// dhol side
    glTranslatef(11+37+60,18,0);
    glColor3f(1,0.99,0.51);
    circle(1,2,0,0);
    glColor3f(0,0,0);
    circle(0.5,1.5,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-11+37+60,18,0);
    glColor3f(1,0.99,0.51);
    circle(1,2,0,0);
    glColor3f(0,0,0);

    circle(0.5,1.5,0,0);
    glPopMatrix();


    ///dhol ends

    ///

    ///

glPopMatrix();

///DHULI 1 ends







/// DHULI 2 STARTS

glPushMatrix();
glTranslatef(dhuli2,-20,0);

glBegin(GL_POLYGON);/// gola
glColor3f(0.89,0.57,0.13);
glVertex2f(39,38);
glVertex2f(35,38);
glVertex2f(35,32);
glVertex2f(39,32);
glEnd();

glPushMatrix();/// matha
glColor3f(0.95,0.82,0.52);
glTranslatef(97,40,0);
circle(4,6,0,0);
glPopMatrix();

glBegin(GL_POLYGON);///chul
glColor3f(0,0,0);

glVertex2f(41,45);
glVertex2f(41,46);
glVertex2f(39,46);
glVertex2f(38,47);
glVertex2f(36,47);
glVertex2f(33,46);
glVertex2f(33,42);



glEnd();

glBegin(GL_POLYGON);///fita
glColor3f(1,0,0);
glVertex2f(41,45);
glVertex2f(33,45);
glVertex2f(33,42);
glVertex2f(41,42);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2f(41,45);
glVertex2f(41,42);
glVertex2f(45,44);
glVertex2f(45,48);

glVertex2f(41,45);
glVertex2f(41,42);
glVertex2f(47,35);
glVertex2f(48,38);
glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.85,0.85,0.86);

        glVertex2f(46,30);
        glVertex2f(44,32);
        glVertex2f(42,32);
        glVertex2f(42,28);
        glVertex2f(47,24);
        glVertex2f(49,26);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.95,0.82,0.52);

        glVertex2f(49,26);
        glVertex2f(47,24);
        glVertex2f(50,15);
        glVertex2f(52,17);

    glEnd();/// right hand finishes

    /// left hand finishes
 glBegin(GL_POLYGON);
    glColor3f(0.85,0.85,0.86);

        glVertex2f(32+2,30);
        glVertex2f(30+2,32);
        glVertex2f(28+2,32);
        glVertex2f(23+2,27);
        glVertex2f(24+3,25);
        glVertex2f(30+2,28);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.95,0.82,0.52);


        glVertex2f(24+3,25);
        glVertex2f(23+2,27);
        glVertex2f(25-8,17);
        glVertex2f(27-10,15);

    glEnd();
    /// left hand ends
/// paa
glBegin(GL_POLYGON);
    glColor3f(0.94,0.62,0.18);
        glVertex2f(5+30,0);
        glVertex2f(1+30,0);
        glVertex2f(1+30,-6);
        glVertex2f(5+30,-6);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.94,0.62,0.18);
        glVertex2f(5+30,-6);
        glVertex2f(1+30,-6);
        glVertex2f(1+27,-10);
        glVertex2f(1+32,-10);
    glEnd();/// left pa finish

    glBegin(GL_POLYGON);
    glColor3f(0.94,0.62,0.18);
        glVertex2f(5+30+9,0);
        glVertex2f(1+30+9,0);
        glVertex2f(1+30+9,-6);
        glVertex2f(5+30+9,-6);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.94,0.62,0.18);
        glVertex2f(5+30+9,-6);
        glVertex2f(1+30+9,-6);
        glVertex2f(30+8+3,-10);
        glVertex2f(7+30+9,-10);
    glEnd();/// left pa finish
///
    glBegin(GL_POLYGON);/// genji
    glColor3f(1,1,1);
        glVertex2f(42,32);
        glVertex2f(40,33);
        glVertex2f(35,33);
        glVertex2f(32,32);
        glVertex2f(32,20);
        glVertex2f(42,20);
    glEnd();

    glBegin(GL_QUADS);/// lungi
    glColor3f(0.17,0.38,0.54);
        glVertex2f(42,20);
        glVertex2f(32,20);
        glVertex2f(30,0);
        glVertex2f(45,0);
    glEnd();
    glLineWidth(2);

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(41,20);
    glVertex2f(41,0);

    glVertex2f(37,20);
    glVertex2f(37,0);

    glVertex2f(33,20);
    glVertex2f(33,0);

    glColor3f(0.57,0.77,0.93);

    glVertex2f(31.5,15);
    glVertex2f(43,15);

    glVertex2f(31,10);
    glVertex2f(43.5,10);

    glVertex2f(30.5,5);
    glVertex2f(44.5,5);
    glEnd();
 ///ribbon
    glLineWidth(8);
    glColor3f(0.48,0.19,0.02);

    glBegin(GL_LINES);
    glVertex2f(16+10,20);
    glVertex2f(11+20+3,33);

    glVertex2f(16+10+16+5,20.5);
    glVertex2f(11+20+5+4,33);
    glEnd();

    ///ribbon ends
    glPushMatrix();/// dhol starts
    glTranslatef(37+60,18,0);
    glColor3f(1,0,0);
    circle(12,5,0,0);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(37,18,0);
    border(12,5,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(37,18,0);
    border(10,3,0,0);
    glPopMatrix();



    glPushMatrix();
    glTranslatef(37,18,0);
    glColor3f(1,1,1);

    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2f(-11,0);
    glVertex2f(11,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();/// dhol side
    glTranslatef(11+37+60,18,0);
    glColor3f(1,0.99,0.51);
    circle(1,2,0,0);
    glColor3f(0,0,0);
    circle(0.5,1.5,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-11+37+60,18,0);
    glColor3f(1,0.99,0.51);
    circle(1,2,0,0);
    glColor3f(0,0,0);

    circle(0.5,1.5,0,0);
    glPopMatrix();


    ///dhol ends

    ///

    ///

glPopMatrix();

/// MANUSH 2 ENDS


/// DHULI 3 STARTS
glPushMatrix();
glTranslatef(dhuli3,-20,0);

glBegin(GL_POLYGON);/// gola
glColor3f(0.89,0.57,0.13);
glVertex2f(39,38);
glVertex2f(35,38);
glVertex2f(35,32);
glVertex2f(39,32);
glEnd();

glPushMatrix();/// matha
glColor3f(0.95,0.82,0.52);
glTranslatef(97,40,0);
circle(4,6,0,0);
glPopMatrix();

glBegin(GL_POLYGON);///chul
glColor3f(0,0,0);

glVertex2f(41,45);
glVertex2f(41,46);
glVertex2f(39,46);
glVertex2f(38,47);
glVertex2f(36,47);
glVertex2f(33,46);
glVertex2f(33,42);



glEnd();

glBegin(GL_POLYGON);///fita
glColor3f(1,0,0);
glVertex2f(41,45);
glVertex2f(33,45);
glVertex2f(33,42);
glVertex2f(41,42);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2f(41,45);
glVertex2f(41,42);
glVertex2f(45,44);
glVertex2f(45,48);

glVertex2f(41,45);
glVertex2f(41,42);
glVertex2f(47,35);
glVertex2f(48,38);
glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.85,0.85,0.86);

        glVertex2f(46,30);
        glVertex2f(44,32);
        glVertex2f(42,32);
        glVertex2f(42,28);
        glVertex2f(47,24);
        glVertex2f(49,26);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.95,0.82,0.52);

        glVertex2f(49,26);
        glVertex2f(47,24);
        glVertex2f(53,14);
        glVertex2f(55,16);

    glEnd();/// right hand finishes

    /// left hand finishes
 glBegin(GL_POLYGON);
    glColor3f(0.85,0.85,0.86);

        glVertex2f(32+2,30);
        glVertex2f(30+2,32);
        glVertex2f(28+2,32);
        glVertex2f(23+2,27);
        glVertex2f(24+3,25);
        glVertex2f(30+2,28);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.95,0.82,0.52);


        glVertex2f(24+3,25);
        glVertex2f(23+2,27);
        glVertex2f(25,15);
        glVertex2f(27,17);

    glEnd();
    /// left hand ends
/// paa
glBegin(GL_POLYGON);
    glColor3f(0.94,0.62,0.18);
        glVertex2f(5+30,0);
        glVertex2f(1+30,0);
        glVertex2f(1+30,-6);
        glVertex2f(5+30,-6);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.94,0.62,0.18);
        glVertex2f(5+30,-6);
        glVertex2f(1+30,-6);
        glVertex2f(1+27,-10);
        glVertex2f(1+32,-10);
    glEnd();/// left pa finish

    glBegin(GL_POLYGON);
    glColor3f(0.94,0.62,0.18);
        glVertex2f(5+30+9,0);
        glVertex2f(1+30+9,0);
        glVertex2f(1+30+9,-6);
        glVertex2f(5+30+9,-6);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.94,0.62,0.18);
        glVertex2f(5+30+9,-6);
        glVertex2f(1+30+9,-6);
        glVertex2f(30+8+3,-10);
        glVertex2f(7+30+9,-10);
    glEnd();/// left pa finish
///
    glBegin(GL_POLYGON);/// genji
    glColor3f(1,1,1);
        glVertex2f(42,32);
        glVertex2f(40,33);
        glVertex2f(35,33);
        glVertex2f(32,32);
        glVertex2f(32,20);
        glVertex2f(42,20);
    glEnd();

    glBegin(GL_QUADS);/// lungi
    glColor3f(0.17,0.38,0.54);
        glVertex2f(42,20);
        glVertex2f(32,20);
        glVertex2f(30,0);
        glVertex2f(45,0);
    glEnd();
    glLineWidth(2);

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(41,20);
    glVertex2f(41,0);

    glVertex2f(37,20);
    glVertex2f(37,0);

    glVertex2f(33,20);
    glVertex2f(33,0);

    glColor3f(0.57,0.77,0.93);

    glVertex2f(31.5,15);
    glVertex2f(43,15);

    glVertex2f(31,10);
    glVertex2f(43.5,10);

    glVertex2f(30.5,5);
    glVertex2f(44.5,5);
    glEnd();
 ///ribbon
    glLineWidth(8);
    glColor3f(0.48,0.19,0.02);

    glBegin(GL_LINES);
    glVertex2f(16+10,20);
    glVertex2f(11+20+3,33);

    glVertex2f(16+10+16+5,20.5);
    glVertex2f(11+20+5+4,33);
    glEnd();

    ///ribbon ends
    glPushMatrix();/// dhol starts
    glTranslatef(37+60,18,0);
    glColor3f(1,0,0);
    circle(12,5,0,0);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(37,18,0);
    border(12,5,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(37,18,0);
    border(10,3,0,0);
    glPopMatrix();



    glPushMatrix();
    glTranslatef(37,18,0);
    glColor3f(1,1,1);

    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2f(-11,0);
    glVertex2f(11,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();/// dhol side
    glTranslatef(11+37+60,18,0);
    glColor3f(1,0.99,0.51);
    circle(1,2,0,0);
    glColor3f(0,0,0);
    circle(0.5,1.5,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-11+37+60,18,0);
    glColor3f(1,0.99,0.51);
    circle(1,2,0,0);
    glColor3f(0,0,0);

    circle(0.5,1.5,0,0);
    glPopMatrix();


    ///dhol ends

    ///

    ///

glPopMatrix();

///DHULI 3 ends


///dhulir mukh
glPushMatrix();
glTranslatef(25+d,20.5,0);
glColor3f(0,0,0);
circle(0.7,0.7,0,0);
glPopMatrix();

glPushMatrix();
glTranslatef(29+d,20.5,0);
glColor3f(0,0,0);
circle(0.7,0.7,0,0);
glPopMatrix();


glPushMatrix();
glTranslatef(-60+d,0,0);

glBegin(GL_LINES);
glVertex2d(23,21);
glVertex2d(26,21);
glVertex2d(28,21);
glVertex2d(31,21);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(-61+d,0,0);
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2d(30,17);
glVertex2d(26,17);
glVertex2d(27,16);
glVertex2d(29,16);
glEnd();
glLineWidth(3);
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2d(30,17.4);
glVertex2d(26,17.4);
glEnd();

glPopMatrix();

/// dhulir mukh ends

/// Manush 1st starts

  glPushMatrix();/// manusher gola
  glBegin(GL_QUADS);
  glColor3f(0.96,0.74,0.39);
  glVertex2d(2 + u - 60,-5);
  glVertex2d(-2 + u - 60,-5);
  glVertex2d(-2 + u - 60,-10);
  glVertex2d(2 + u - 60,-10);
  glEnd();
  glPopMatrix();/// manusher gola shesh



  glPushMatrix(); /// manusher matha starts
  glColor3f(0.97,0.85,0.51);
  circle(5,7,u,0);
  glPopMatrix();  /// manusher matha finishes


  glPushMatrix(); /// manusher mathar chul starts

  glBegin(GL_QUADS);
  glColor3f(0,0,0); /// baam shithi
  glColor3f(0.62,0.31,0.24);
  glVertex2d(1 + u - 60,8);
  glColor3f(0,0,0);
  glVertex2d(-6 + u - 60,7);
  glVertex2d(-7 + u - 60,2);
  glColor3f(0.62,0.31,0.24);
  glVertex2d(1 + u - 60,3);

///

  glColor3f(0,0,0);/// daan shithi
  glVertex2d(6 + u - 60,7);
  glColor3f(0.62,0.31,0.24);

  glVertex2d(1 + u - 60,8);
  glVertex2d(1 + u - 60,3);
  glColor3f(0,0,0);
  glVertex2d(5 + u - 60,2);
///
   glColor3f(0.32,0.09,0.03); /// daan jhuti

  glVertex2d(6 + u - 60,7);
  glVertex2d(5 + u - 60,2);
  glVertex2d(8 + u - 60,-3);
  glVertex2d(14 + u - 60,1);

///
    glColor3f(0.32,0.09,0.03); /// baam jhuti

  glVertex2d(-6 + u - 60,7);
  glVertex2d(-14 + u - 60,-1);
  glVertex2d(-8 + u - 60,-3);
  glVertex2d(-5 + u - 60,2);

  glEnd();
  glPopMatrix();  /// manusher mathar chul finishes


 glPushMatrix();

 glLineWidth(8); /// baam chuler fita

  glBegin(GL_LINES);
  glColor3f(1,0,0);
  glVertex2d(-6 + u - 60,7);
  glVertex2d(-5 + u - 60,2);
  glEnd();
  glBegin(GL_LINES);
  glColor3f(1,0,0);
  glVertex2d(-6 + u - 60,7);
  glVertex2d(-4 + u - 60,10);
  glEnd();


  glBegin(GL_LINES);
  glColor3f(0.96,0.17,0.63);
  glVertex2d(-6 + u - 60,7);
  glVertex2d(-10 + u - 60,8);
  glEnd();/// baam chuler fita finishes
glPopMatrix();

glPushMatrix();/// daan chuler fita
glLineWidth(8);

glBegin(GL_LINES);
    glColor3f(1,0,0);
    glVertex2d(6 + u - 60,7);
    glVertex2d(5 + u - 60,2);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,0,0);
    glVertex2d(6 + u - 60,7);
    glVertex2d(4 + u - 60,10);
glEnd();

glBegin(GL_LINES);
    glColor3f(0.96,0.17,0.63);
    glVertex2d(6 + u - 60,7);
    glVertex2d(10 + u - 60,8);
glEnd();
glPopMatrix(); /// daan chuler fita finishes



glPushMatrix();/// manusher jamar upper half
  glBegin(GL_QUADS);
  glColor3f(0.91,0.03,0.31);
  glVertex2d(7 + u - 60,-9.8);
  glVertex2d(-7 + u - 60,-9.8);
  glVertex2d(-7 + u - 60,-26);
  glVertex2d(7 + u - 60,-26);
  glEnd();
glPopMatrix();/// manusher jamar upper half


glPushMatrix();/// manusher jamar gola
  glColor3f(0.96,0.74,0.39);
    //glColor3f(1,0,0);
glTranslatef(0,-9.7,0);
circlePolygon(3,3,50,100,u,0);
  glPopMatrix();/// manusher jamar gola shesh


glPushMatrix();/// manusher jamar daan haata
  glBegin(GL_QUADS);
  glColor3f(0.98,0.46,0.67);
  glVertex2d(14-4 + u - 60,-10.5);
  glVertex2d(10-4 + u - 60,-9.7);

  glColor3f(0.99,0.36,0.62);

  glVertex2d(12-4 + u - 60,-20);
  glVertex2d(16-4 + u - 60,-20);
  glEnd();
glPopMatrix();/// manusher jamar daan haata shesh

glPushMatrix();/// manusher daan haat upper
  glBegin(GL_QUADS);
  glColor3f(0.96,0.74,0.39);
  glVertex2d(16-4 + u - 60,-20);
  glVertex2d(12-4 + u - 60,-20);
  glVertex2d(13-4 + u - 60,-25);
  glVertex2d(17-4 + u - 60,-25);
  glEnd();
glPopMatrix();/// manusher daan haat upper shesh

glPushMatrix();/// manusher daan haat lower
  glBegin(GL_QUADS);
  glColor3f(0.96,0.74,0.39);

  glVertex2d(14-1 + u - 60,-25);
  glVertex2d(10-1 + u - 60,-25);
  glVertex2d(12 + u - 60,-35);
  glVertex2d(16 + u - 60,-35);

  glEnd();
glPopMatrix();/// manusher daan haat lower shesh


glPushMatrix();/// manusher daan haater pata
  glBegin(GL_TRIANGLES);
  glColor3f(0.96,0.74,0.39);


  glVertex2d(12 + u - 60,-35);
  glVertex2d(13 + u - 60,-40);
  glVertex2d(16 + u - 60,-35);
  glEnd();


glPopMatrix();/// manusher daan haater pata shesh


glPushMatrix();/// manusher jamar baam haata
  glBegin(GL_QUADS);
  glColor3f(0.98,0.46,0.67);
  glVertex2d(-6 + u - 60,-9.7);
  glVertex2d(-10 + u - 60,-10.5);

  glColor3f(0.99,0.36,0.62);

  glVertex2d(-12 + u - 60,-20);
  glVertex2d(-8 + u - 60,-20);
  glEnd();
glPopMatrix();/// manusher jamar baam haata shesh

glPushMatrix();/// manusher baam haat upper
  glBegin(GL_QUADS);
  glColor3f(0.96,0.74,0.39);
  glVertex2d(-6-2 + u - 60,-19.8);
  glVertex2d(-10-2 + u - 60,-19.8);
  glVertex2d(-12-1 + u - 60,-25);
  glVertex2d(-8-1 + u - 60,-25);
  glEnd();
glPopMatrix();/// manusher baam haat upper shesh


glPushMatrix();/// manusher baam haater lower half
  glBegin(GL_QUADS);
  glColor3f(0.96,0.74,0.39);

  glVertex2d(-7-2 + u - 60,-25);
  glVertex2d(-7-18 + u - 60,-25);
  glVertex2d(-7-20 + u - 60,-29);
  glVertex2d(-7-3 + u - 60,-29);

  glEnd();
glPopMatrix();/// manusher baam haater lower half shesh

glPushMatrix();/// manusher baam haater paata
  glBegin(GL_TRIANGLES);
  glColor3f(0.96,0.74,0.39);
  glVertex2d(-7-18 + u - 60,-25);
  glVertex2d(-7-21 + u - 60,-22);
  glVertex2d(-7-20 + u - 60,-29);
  glEnd();
glPopMatrix();/// manusher baam haater paata shesh



glPushMatrix();/// manusher jamar nicher half
  glBegin(GL_QUADS);
  glColor3f(0.91,0.3,0.49);

  glVertex2d(7 + u - 60,-25.8);
  glVertex2d(-7 + u - 60,-25.8);
  glColor3f(0.91,0.03,0.31);

  glVertex2d(-12 + u - 60,-45);
  glVertex2d(12 + u - 60,-45);

  glEnd();
glPopMatrix();/// manusher jamar nicher half shesh



glPushMatrix();/// manusher baam paa
  glBegin(GL_QUADS);
  glColor3f(0.96,0.74,0.39);
  glVertex2d(-1 + u - 60,-45);
  glVertex2d(-4 + u - 60,-45);
  glVertex2d(-4 + u - 60,-60);
  glVertex2d(-1 + u - 60,-60);
  glEnd();
glPopMatrix();/// manusher baam paa shesh


glPushMatrix();/// manusher baam juta
  glBegin(GL_QUADS);
  glColor3f(0.87,0.04,0.22);
  glVertex2d(-1 + u - 60,-59.5);
  glVertex2d(-4 + u - 60,-59.5);
  glVertex2d(-6 + u - 60,-62);
  glVertex2d(-1 + u - 60,-62);
  glEnd();
glPopMatrix();/// manusher baam juta shesh


glPushMatrix();/// manusher daan paa
  glBegin(GL_QUADS);
  glColor3f(0.96,0.74,0.39);
  glVertex2d(-1+5 + u - 60,-45);
  glVertex2d(-4+5 + u - 60,-45);
  glVertex2d(-4+5 + u - 60,-60);
  glVertex2d(-1+5 + u - 60,-60);
  glEnd();
glPopMatrix();/// manusher daan paa shesh


glPushMatrix();/// manusher daan juta
  glBegin(GL_QUADS);
  glColor3f(0.87,0.04,0.22);
  glVertex2d(-1+5 + u - 60,-59.5);
  glVertex2d(-4+5 + u - 60,-59.5);
  glVertex2d(-4+5+ u - 60,-62);
  glVertex2d(6+ u - 60,-62);
  glEnd();
glPopMatrix();/// manusher daan juta shesh
/// manush 1st ends



/// Manush 2nd starts
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(40,2,0);
circle(6,6.3,u,0);
glPopMatrix();
glPushMatrix();
glTranslatef(u-60,0,0);
glBegin(GL_POLYGON);
glVertex2d(45,5);
glVertex2d(35,5);
glVertex2d(32,-8);
glVertex2d(48,-8);
glEnd();
glPopMatrix();

  glPushMatrix();/// manusher gola
  glBegin(GL_QUADS);
  glColor3f(0.96,0.74,0.39);
  glVertex2d(2 + u - 20,-5);
  glVertex2d(-2 + u - 20,-5);
  glVertex2d(-2 + u - 20,-10);
  glVertex2d(2 + u - 20,-10);
  glEnd();
  glPopMatrix();/// manusher gola shesh


  glPushMatrix(); /// manusher matha starts
  glTranslatef(40,0,0);
  glColor3f(0.97,0.85,0.51);
  circle(5,7,u,0);
  glPopMatrix();  /// manusher matha finishes


  glPushMatrix(); /// manusher mathar chul starts
/*
  glBegin(GL_QUADS);
  glColor3f(0,0,0); /// baam shithi
  glColor3f(0.62,0.31,0.24);
  glVertex2d(1 + u - 20,8);
  glColor3f(0,0,0);
  glVertex2d(-6 + u - 20,7);
  glVertex2d(-7 + u - 20,2);
  glColor3f(0.62,0.31,0.24);
  glVertex2d(1 + u - 20,3);

///

    glColor3f(0,0,0);/// daan shithi

  glVertex2d(6 + u - 20,7);
  glColor3f(0.62,0.31,0.24);
  //glColor3f(0,0,0);
  glVertex2d(1 + u - 20,8);
  glVertex2d(1 + u - 20,3);
  glColor3f(0,0,0);
  glVertex2d(5 + u - 20,2);
///
   glColor3f(0.32,0.09,0.03); /// daan jhuti

  glVertex2d(6 + u - 20,7);
  glVertex2d(5 + u - 20,2);
  glVertex2d(8 + u - 20,-3);
  glVertex2d(14 + u - 20,1);

///
    glColor3f(0.32,0.09,0.03); /// baam jhuti

  glVertex2d(-6 + u - 20,7);
  glVertex2d(-14 + u - 20,-1);
  glVertex2d(-8 + u - 20,-3);
  glVertex2d(-5 + u - 20,2);

  glEnd();
  glPopMatrix();  /// manusher mathar chul finishes


 glPushMatrix();

 glLineWidth(8); /// baam chuler fita

  glBegin(GL_LINES);
  glColor3f(1,0.38,0.03);
  glVertex2d(-6 + u - 20,7);
  glVertex2d(-5 + u - 20,2);
  glEnd();
  glBegin(GL_LINES);
  glColor3f(1,0.38,0.03);
  glVertex2d(-6 + u - 20,7);
  glVertex2d(-4 + u - 20,10);
  glEnd();


  glBegin(GL_LINES);
  glColor3f(0.98,0.68,0.13);
  glVertex2d(-6 + u - 20,7);
  glVertex2d(-10 + u - 20,8);
  glEnd();/// baam chuler fita finishes
glPopMatrix();

glPushMatrix();/// daan chuler fita
glLineWidth(8);

glBegin(GL_LINES);
    glColor3f(1,0.38,0.03);
    glVertex2d(6 + u - 20,7);
    glVertex2d(5 + u - 20,2);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,0.38,0.03);
    glVertex2d(6 + u - 20,7);
    glVertex2d(4 + u - 20,10);
glEnd();

glBegin(GL_LINES);
    glColor3f(0.98,0.68,0.13);
    glVertex2d(6 + u - 20,7);
    glVertex2d(10 + u - 20,8);
glEnd();
glPopMatrix(); /// daan chuler fita finishes

*/


glPushMatrix();
glColor3f(0,0,0);

glTranslatef(44.5,8,0);
circlePolygon(5.4,5.4,48.8,80,u,0);


glPopMatrix();
glPushMatrix();

glTranslatef(44,8,0);

glColor3f(0,0,0);

circlePolygon(3.5,3.5,48.8,80,u,0);

glPopMatrix();
glPushMatrix();
glColor3f(0,0,0);

glTranslatef(35.8,8.2,0);
circlePolygon(4.3,4.3,70,100,u,0);
glPopMatrix();
/*
glPushMatrix();
glColor3f(0,0,0);

glTranslatef(35.8,8.2,0);
circlePolygon(4.2,4.2,70,100,u,0);
glPopMatrix();
*/
glPushMatrix();/// manusher jamar upper half
  glBegin(GL_QUADS);
  glColor3f(1,0.38,0.03);
  glVertex2d(7 + u - 20,-9.8);
  glVertex2d(-7 + u - 20,-9.8);
  glVertex2d(-7 + u - 20,-26);
  glVertex2d(7 + u - 20,-26);
  glEnd();
glPopMatrix();/// manusher jamar upper half

glPushMatrix();/// manusher jamar gola
  glColor3f(0.96,0.74,0.39);
    //glColor3f(1,0,0);
glTranslatef(40,-9.7,0);
circlePolygon(3,3,50,100,u,0);
  glPopMatrix();/// manusher jamar gola shesh

glPushMatrix();/// manusher jamar daan haata
  glBegin(GL_QUADS);
  glColor3f(1,0,0);
  glVertex2d(14-4 + u - 20,-10.5);
  glVertex2d(10-4 + u - 20,-9.7);

  glVertex2d(12-4 + u - 20,-20);
  glVertex2d(16-4 + u - 20,-20);
  glEnd();
glPopMatrix();/// manusher jamar daan haata shesh

glPushMatrix();/// manusher daan haat upper
  glBegin(GL_QUADS);
  glColor3f(0.96,0.74,0.39);
  glVertex2d(16-4 + u - 20,-20);
  glVertex2d(12-4 + u - 20,-20);
  glVertex2d(13-4 + u - 20,-25);
  glVertex2d(17-4 + u - 20,-25);
  glEnd();
glPopMatrix();/// manusher daan haat upper shesh

glPushMatrix();/// manusher daan haat lower
  glBegin(GL_QUADS);
  glColor3f(0.96,0.74,0.39);

  glVertex2d(7+2 + u - 20,-25);
  glVertex2d(7+18 + u - 20,-25);
  glVertex2d(7+20 + u - 20,-29);
  glVertex2d(7+3 + u - 20,-29);

  glEnd();
glPopMatrix();/// manusher daan haat lower shesh


glPushMatrix();/// manusher daan haater pata
  glBegin(GL_TRIANGLES);
  glColor3f(0.96,0.74,0.39);
  glVertex2d(7+18 + u - 20,-25);
  glVertex2d(7+20 + u - 20,-29);
  glVertex2d(7+20 + u - 20,-22);
  glEnd();
glPopMatrix();/// manusher daan haater pata shesh


glPushMatrix();/// manusher jamar baam haata
  glBegin(GL_QUADS);
  glColor3f(1,0,0);
  glVertex2d(-6 + u - 20,-9.7);
  glVertex2d(-10 + u - 20,-10.5);
  glVertex2d(-12 + u - 20,-20);
  glVertex2d(-8 + u - 20,-20);
  glEnd();
glPopMatrix();/// manusher jamar baam haata shesh

glPushMatrix();/// manusher baam haat upper
  glBegin(GL_QUADS);
  glColor3f(0.96,0.74,0.39);
  glVertex2d(-6-2 + u - 20,-19.8);
  glVertex2d(-10-2 + u - 20,-19.8);
  glVertex2d(-12-1 + u - 20,-25);
  glVertex2d(-8-1 + u - 20,-25);
  glEnd();
glPopMatrix();/// manusher baam haat upper shesh


glPushMatrix();/// manusher baam haater lower half
  glBegin(GL_QUADS);
  glColor3f(0.96,0.74,0.39);

  glVertex2d(-7-2 + u - 20 ,-25);
  glVertex2d(-7-6 + u  - 20,-25);
  glVertex2d(-12-6 + u - 20,-35);
  glVertex2d(-12-2 + u - 20,-35);

  glEnd();
glPopMatrix();/// manusher baam haater lower half shesh

glPushMatrix();/// manusher baam haater paata
  glBegin(GL_TRIANGLES);
  glColor3f(0.96,0.74,0.39);
  glVertex2d(-12-6 + u - 20,-35);
  glVertex2d(-12-4 + u - 20,-40);
  glVertex2d(-12-2 + u - 20,-35);

  glEnd();
glPopMatrix();/// manusher baam haater paata shesh



glPushMatrix();/// manusher jamar nicher half
  glBegin(GL_QUADS);
  glColor3f(1,0,0);
  glColor3f(0.98,0.75,0.36);



  glVertex2d(7 + u - 20,-25.8);
  glVertex2d(-7 + u - 20,-25.8);
  glColor3f(0.98,0.13,0.14);
  glVertex2d(-12 + u - 20,-45);
  glVertex2d(12 + u - 20,-45);

  glEnd();
glPopMatrix();/// manusher jamar nicher half shesh



glPushMatrix();/// manusher baam paa
  glBegin(GL_QUADS);
  glColor3f(0.96,0.74,0.39);
  glVertex2d(-1 + u - 20,-45);
  glVertex2d(-4 + u - 20,-45);
  glVertex2d(-4 + u - 20,-60);
  glVertex2d(-1 + u - 20,-60);
  glEnd();
glPopMatrix();/// manusher baam paa shesh


glPushMatrix();/// manusher baam juta
  glBegin(GL_QUADS);
  glColor3f(1,0,0);
  glVertex2d(-1 + u - 20,-59.5);
  glVertex2d(-4 + u - 20,-59.5);
  glVertex2d(-6 + u - 20,-62);
  glVertex2d(-1 + u - 20,-62);
  glEnd();
glPopMatrix();/// manusher baam juta shesh


glPushMatrix();/// manusher daan paa
  glBegin(GL_QUADS);
  glColor3f(0.96,0.74,0.39);
  glVertex2d(-1+5 + u - 20,-45);
  glVertex2d(-4+5 + u - 20,-45);
  glVertex2d(-4+5 + u - 20,-60);
  glVertex2d(-1+5 + u - 20,-60);
  glEnd();
glPopMatrix();/// manusher daan paa shesh


glPushMatrix();/// manusher daan juta
  glBegin(GL_QUADS);
  glColor3f(1,0,0);
  glVertex2d(-1+5 + u - 20,-59.5);
  glVertex2d(-4+5 + u - 20,-59.5);
  glVertex2d(-4+5+ u - 20,-62);
  glVertex2d(6+ u - 20,-62);
  glEnd();
glPopMatrix();/// manusher daan juta shesh
/// manush 2nd ends

///balloon dhora haat er pichon

glBegin(GL_POLYGON);
  glColor3f(0.96,0.74,0.39);
    //glColor3f(1,0,0);
  glVertex2d(7+20 + u - 20,-29);

  glVertex2d(2+7+20 + u - 20,-29);
  glVertex2d(2+7+20 + u - 20,-22);
  glVertex2d(7+20 + u - 20,-22);

  glEnd();



/// balloon chords start
glLineWidth(1);
glBegin(GL_LINES);
  glColor3f(0,0,0);
  glVertex2d(7+20 + u - 20,-29);
  glVertex2d(18 -5 + u , 10 + v);

  glVertex2d(7+20 + u - 20,-29);
  glVertex2d(6 -5 + u , 20 + v);

  glVertex2d(7+20 + u - 20,-29);
  glVertex2d(6 + 2 + u , 35 + v);

  /// chord extensions

  glVertex2d(7+20 + u - 20,-29);
  glVertex2d(7+20.8 + u - 20, -42 );

  glVertex2d(7+ 20 + u - 20,-29);
  glVertex2d(7+ 20 + u - 20, - 38 );

  glVertex2d(7+ 20 + u - 20,-29);
  glVertex2d(7+ 18.4 + u - 20, - 40 );

  /// chord extensions end

  glEnd();
/// balloon chords end


/// balloon right starts
glPushMatrix();
  glTranslatef(77- 5,20,0);
  //glColor3f(1,0.77,0.03);
  //glColor3f(1,0.71,0.87);
  glColor3f(0.94,0.16,0.17);
  glColor3f(0.99,0.01,0.5);
  glColor3f(0.99,0.53,0.81);

  circle(6,6,u,v);
glPopMatrix();


glPushMatrix();
glBegin(GL_TRIANGLES);
  glVertex2d(21.4 -5 + u , 15.8 + v);
  glVertex2d(12.6 -5 + u , 15.8 + v);
    //glColor3f(0.97,0.67,0.51);
    glColor3f(1,1,1);

  glVertex2d(18 -5 + u , 10 + v);
glEnd();
glPopMatrix();
/// ballon right ends


/// balloon left starts
glPushMatrix();
  glTranslatef(65 -5 ,30,0);
  glColor3f(0.99,0.88,0.04);
  glColor3f(0.99,0.74,0.53);

  circle(6,6,u, v);
glPopMatrix();


glPushMatrix();
glBegin(GL_TRIANGLES);
  glVertex2d(9.4 -5 + u , 25.8 + v);
  glVertex2d(1 -5 + u , 25.8 + v);
  //glColor3f(0.96,0.86,0.93);
      glColor3f(1,1,1);
glVertex2d(6 -5 + u , 20 + v);
glEnd();
glPopMatrix();
/// ballon left ends


/// balloon middle starts
glPushMatrix();
  glTranslatef(65 + 2 ,45,0);
  //glColor3f(0.37,0.94,0.16);
  glColor3f(0.35,0.93,0.62);

  circle(6,6,u, v);
glPopMatrix();


glPushMatrix();
glBegin(GL_TRIANGLES);
  glVertex2d(9.4 + 2 + u , 40.8 + v);
  glVertex2d(1 + 2 + u , 40.8 + v);
  //glColor3f(0.87,0.98,0.96);
    glColor3f(1,1,1);

  glVertex2d(6 + 2 + u , 35 + v);
glEnd();
glPopMatrix();
/// ballon middle ends

///chorki dhora haat er pichon


glBegin(GL_POLYGON);
  glColor3f(0.96,0.74,0.39);

  glVertex2d(-7-20 + u - 60,-22);
  glVertex2d(-2-7-20 + u - 60,-22);
  glVertex2d(-2-7-20 + u - 60,-29);

  glVertex2d(-7-20 + u - 60,-29);
  glEnd();

///chorki
glPushMatrix();///chorkir kathi
glLineWidth(4);
glBegin(GL_LINES);
glColor3f(0.8,0.38,0.18);
glVertex2d(-88+u, -30+20);
glVertex2d(-88+u, -35);
glEnd();
glPopMatrix();///chorkir kathi ends

glPushMatrix();/// chorkir body shuru

//glRotatef(spin, 0.0, 0.0, 1.0);
glBegin(GL_QUADS);
glColor3f(0.98,0.97,0.24);
glVertex2d(-90+2+u, -25+20+3);
glVertex2d(-95-3+2+u, -30+20);
glVertex2d(-90+2+u, -35+20-3);
glVertex2d(-85+3+2+u, -30+20);
glEnd();

glPushMatrix();/// chorkir body shuru
glTranslatef(-88+u,-10,0);
glRotatef(spin, 0.0, 0.0, 1.0); /// spin er code
glBegin(GL_QUADS);
glColor3f(1,0,0);/// seems like
glVertex2d(-6, 6);/// jei duita x point ami set korbo
glVertex2d(6, 6);/// taar majherta hobe spin er center.
glVertex2d(6, -6); /// ebong ei way te korte gele,
glVertex2d(-6, -6);/// obosshoi y gula uporer dui point er jonno same,
glEnd(); /// ar nicher dui point er jonno same hoite hobe
glPopMatrix();

glBegin(GL_QUADS);

glColor3f(1,1,1);
glVertex2d(-90+2+u, -25+20);
glVertex2d(-95+2+u, -30+20);
glVertex2d(-90+2+u, -35+20);
glVertex2d(-85+2+u, -30+20);
glEnd();


glPushMatrix();
glColor3f(0.38,0.24,0.13);
glTranslatef(-28, -30+20,0);
circle(2,2,u,0);
glPopMatrix();



glPopMatrix();




/// chorki ends

glBegin(GL_POLYGON);
  glColor3f(0.96,0.74,0.39);
    //glColor3f(1,0,0);

  glVertex2d(2+7+18 + u - 20,-25);
  glVertex2d(2+7+20 + u - 20,-29);
  glVertex2d(2+7+20 + u - 20,-22);
  glEnd();

///chorki dhora haat

glBegin(GL_POLYGON);
  glColor3f(0.96,0.74,0.39);
     // glColor3f(1,0,0);

  glVertex2d(-2-7-18 + u - 60,-25);
  glVertex2d(-2-7-21 + u - 60,-22);
  glVertex2d(-2-7-20 + u - 60,-29);
  glEnd();



///manusher mukh starts

glPushMatrix();
//glScalef(0.5,0.5,0);

glLineWidth(0.01);
/*
    glPushMatrix();             //Green Circle
	glTranslatef(0+u,16,0);
    glColor3f(0,0,0);
	circleLine(6,10,72,78);
	glPopMatrix();
*/
	glPushMatrix();             //Green Circle
	    glColor3f(1,1,1);

	glTranslatef(u-60,-5,0);
    glBegin(GL_POLYGON);
    glVertex2f(2,1);
        glVertex2f(-2,1);
            glVertex2f(-1,0);
            glVertex2f(1,0);


    glEnd();
	glPopMatrix();
glLineWidth(0.2);
	glPushMatrix();             //Green Circle
	    glColor3f(0,0,0);

	glTranslatef(u-60,-5,0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(2,1);
        glVertex2f(-2,1);
            glVertex2f(-1,0);
            glVertex2f(1,0);
    glVertex2f(2,1);


    glEnd();
	glPopMatrix();
/*
    glPushMatrix();             //Green Circle
	glTranslatef(0,9-8,0);
    glColor3f(0,0,0);
	circleLine(6,6,72,78,u,0);
	glPopMatrix();
*/
/*
    glPushMatrix();
    glTranslatef(-3,3,0);
    glBegin(GL_LINES);
    glVertex2f(-0.3,0);
    glVertex2f(6.2,0);
    glEnd();
    glPopMatrix();

    right eyebrow
*/
	/*glPushMatrix();             //Green Circle
	glTranslatef(3.5,0,0);
    glColor3f(0,0,0);
	circleLine(4,2,15,35,u,0);
	glPopMatrix();
*/

    glPushMatrix();             //Green Circle
	glTranslatef(3,0,0);
    glColor3f(0,0,0);
	circlePolygon(1,1,0,100,u,0);
	glPopMatrix();
///lefteyebrow
/*
	glPushMatrix();             //Green Circle
	glTranslatef(-4,0,0);
    glColor3f(0,0,0);
	circleLine(4,2,10,30,u,0);
	glPopMatrix();
*/

	glPushMatrix();             //Green Circle
	glTranslatef(-2.5,0,0);
    glColor3f(0,0,0);
	circlePolygon(1,1,0,100,u,0);
	glPopMatrix();
glLineWidth(1.5);

	glPushMatrix();
    glTranslatef(-4+u-60,1,0);
    glBegin(GL_LINES);
    glVertex2f(2,1);
    glVertex2f(-1,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4+u-60,1,0);
    glBegin(GL_LINES);
    glVertex2f(-2,1);
    glVertex2f(1,0);
    glEnd();
    glPopMatrix();

    ///shithi

    glPushMatrix();
    glLineWidth(0.5);

    glColor3f(1,1,1);
    glTranslatef(4+u-60,1,0);
    glBegin(GL_LINES);
    glVertex2f(-3,2);
    glVertex2f(-3,6.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();

    glTranslatef(u-60-1,-3,0);
        glColor3f(0,0,0);

    glBegin(GL_LINES);
    glVertex2f(1,3);
    glVertex2f(0.5,0.5);

     glVertex2f(0.5,0.5);
      glVertex2f(1.5,0.5);
    glEnd();
    glPopMatrix();
/*
    glPushMatrix();
    glTranslatef(-3+u,3,0);
    glBegin(GL_LINES);
    glVertex2f(-0.3,0);
    glVertex2f(6.2,0);
    glEnd();
    glPopMatrix();
    */
    glPopMatrix();

    ///manush 2 er mukh starts

    ///shithi

    glPushMatrix();
    glLineWidth(0.5);

    glColor3f(1,1,1);
    glTranslatef(4+u-21,1,0);
    glBegin(GL_LINES);
    glVertex2f(-3.5,4.5);
    glVertex2f(-3,7);
    glEnd();
    glPopMatrix();
glPushMatrix();
//glScalef(0.5,0.5,0);

glLineWidth(0.01);
/*
    glPushMatrix();             //Green Circle
	glTranslatef(0+u,16,0);
    glColor3f(0,0,0);
	circleLine(6,10,72,78);
	glPopMatrix();
*/
	glPushMatrix();             //Green Circle
	    glColor3f(1,1,1);

	glTranslatef(u-60+40,-5,0);
    glBegin(GL_POLYGON);
    glVertex2f(2,1);
        glVertex2f(-2,1);
            glVertex2f(-1,0);
            glVertex2f(1,0);


    glEnd();
	glPopMatrix();
glLineWidth(0.2);
	glPushMatrix();             //Green Circle
	    glColor3f(0,0,0);

	glTranslatef(u-60+40,-5,0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(2,1);
        glVertex2f(-2,1);
            glVertex2f(-1,0);
            glVertex2f(1,0);
    glVertex2f(2,1);


    glEnd();
	glPopMatrix();
/*
    glPushMatrix();             //Green Circle
	glTranslatef(0,9-8,0);
    glColor3f(0,0,0);
	circleLine(6,6,72,78,u,0);
	glPopMatrix();
*/
/*
    glPushMatrix();
    glTranslatef(-3,3,0);
    glBegin(GL_LINES);
    glVertex2f(-0.3,0);
    glVertex2f(6.2,0);
    glEnd();
    glPopMatrix();

    right eyebrow
*/
	/*glPushMatrix();             //Green Circle
	glTranslatef(3.5,0,0);
    glColor3f(0,0,0);
	circleLine(4,2,15,35,u,0);
	glPopMatrix();
*/

    glPushMatrix();             //Green Circle
	glTranslatef(3+40,0,0);
    glColor3f(0,0,0);
	circlePolygon(1,1,0,100,u,0);
	glPopMatrix();
///lefteyebrow
/*
	glPushMatrix();             //Green Circle
	glTranslatef(-4,0,0);
    glColor3f(0,0,0);
	circleLine(4,2,10,30,u,0);
	glPopMatrix();
*/

	glPushMatrix();             //Green Circle
	glTranslatef(-2.5+40,0,0);
    glColor3f(0,0,0);
	circlePolygon(1,1,0,100,u,0);
	glPopMatrix();
glLineWidth(1.5);

	glPushMatrix();
    glTranslatef(-4+u-60+40,1,0);
    glBegin(GL_LINES);
    glVertex2f(2,1);
    glVertex2f(-1,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4+u-60+40,1,0);
    glBegin(GL_LINES);
    glVertex2f(-2,1);
    glVertex2f(1,0);
    glEnd();
    glPopMatrix();
glLineWidth(0.5);
    glTranslatef(u-60-1+40,-3,0);
    glBegin(GL_LINES);
    glVertex2f(1,3);
    glVertex2f(0.5,0.5);

     glVertex2f(0.5,0.5);
      glVertex2f(1.5,0.5);
    glEnd();
    glPopMatrix();
/*
    glPushMatrix();
    glTranslatef(-3+u,3,0);
    glBegin(GL_LINES);
    glVertex2f(-0.3,0);
    glVertex2f(6.2,0);
    glEnd();
    glPopMatrix();
    */
    glPopMatrix();

    //balloon dhora haat


glFlush();

/// continuous nagordola starts
/*
if(ncnt <= 4)
{

          if(ncnt == 1)
        {
            nd1 = 0;
            nd2 = 100;
            nd3 = 100;
            Sleep(150);

        }
        if(ncnt == 2)
        {
            nd2 = 0;
            nd1 = 100;
            nd3 = 100;
            Sleep(150);

        }
        if(ncnt == 3)
        {
            nd3 = 0;
            nd1 = 100;
            nd2 = 100;
            Sleep(150);


        }
        if(ncnt == 4)
        {
            nd3 = 100;
            nd1 = 100;
            nd2 = 0;
            Sleep(150);


        }
        ncnt++;
}
        else
        {
                        ncnt = 0;

        }

        glutPostRedisplay();
*/
/// continuous nagordola ends
}

void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_LEFT:
				u -=10; //to move the car left when left key pressed. To make movement faster or slower, try changing values of u
				glutPostRedisplay();
				break;

		case GLUT_KEY_RIGHT:
				u +=10;
				glutPostRedisplay();
				break;

        case GLUT_KEY_UP:
				v +=10; //to move the car left when left key pressed. To make movement faster or slower, try changing values of u
				glutPostRedisplay();
				break;

		case GLUT_KEY_DOWN:
				v -=10;
				glutPostRedisplay();
				break;

	  default:
           // glutIdleFunc(setrightkite);

			break;
	}
}
void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		 case 'l':
            glutIdleFunc(moverightkite);

        break;
        case 'r':
            glutIdleFunc(moverightkite_right);
        break;
        case 's':
        glutIdleFunc(setrightkite);
        break;
        case 'c':
        glutIdleFunc(spinDisplay_right);
        break;
        case 'C':
        glutIdleFunc(stop_spinDisplay);
        /**/
        case 'n':
        ncnt++;

          if(ncnt == 1)
        {
            nd3 = 100;
            nd1 = 100;
            nd4 = 0;
            nd2 = 100;

        }
        if(ncnt == 2)
        {
            nd3 = 100;
            nd1 = 100;
            nd4 = 100;
            nd2 = 0;
        }
        if(ncnt == 3)
        {
            nd3 = 100;
            nd1 = 100;
            nd2 = 100;
            nd5 = 0;
            nd4 = 100;

        }
        if(ncnt == 4)
        {
            nd5 = 100;
            nd3 = 100;
            nd1 = 0;
            nd2 = 100;
            nd4 = 100;


        }
        if(ncnt == 5)
        {
            nd3 = 100;
            nd2 = 100;
            nd1 = 100;
            nd4 = 0;


        }
         if(ncnt == 6)
        {
            nd5 = 100;
            nd3 = 100;
            nd2 = 0;
            nd1 = 100;
            nd4 = 100;
            ncnt = 2;


        }

        glutPostRedisplay();

        break;
        case 'd':
            dcnt++;
            d = 0;
          if(dcnt == 1)
        {
            dhuli1 = -70;
            dhuli2 = -200;
            dhuli3 = -200;

        }
        if(dcnt == 2)
        {
            dhuli1 = -200;
            dhuli2 = -70;
            dhuli3 = -200;
        }
        if(dcnt == 3)
        {
            dhuli1 = -200;
            dhuli2 = -200;
            dhuli3 = -70;
            dcnt = 0;

        }
        glutPostRedisplay();
        break;

        case 'D':
            dhuli1 = -200;
            dhuli2 = -200;
            dhuli3 = -200;
            d = -200;
            dcnt = 0;
            glutPostRedisplay();

            break;
       /**/
        ///previous keypress nagordola code
        /*
        case 'o':
        glutIdleFunc(spin_nagordola);
        break;
        */
	  default:
			break;
	}
}
void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)//mouse press detected
            glutIdleFunc(moveleftkite);
         else
            glutIdleFunc(setleftkite);

         break;
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)//mouse press detected
            glutIdleFunc(moveleftkite_right);
         else
            glutIdleFunc(setleftkite);

         break;
      default:
         break;
   }
}

int main()
{
    //glutFullScreen();
    //

    glutInitWindowSize(800,800);
    //glutInitWindowPosition(200,100);//1
    glutInitWindowPosition(0,0);

    glutCreateWindow("Boishakhi");

    init();
    glutDisplayFunc(myDisplay);
    glutSpecialFunc(spe_key);
    glutMouseFunc(my_mouse);
    glutKeyboardFunc(my_keyboard);

   //
//
 PlaySound("ailo re.wav", NULL, SND_FILENAME| SND_ASYNC);

    glutMainLoop();

    return 0;
}
