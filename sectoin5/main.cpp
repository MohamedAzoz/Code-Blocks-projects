#include<windows.h>
#include <GL/glut.h>
#include <math.h>

float x=70,y=70,w=500,z=80,q=270,deltaW=0.05,deltaq=0.05,deltaX=.05,deltay=.05,deltaw=0.05,c=1;
void mydisplay_1();


int main()
{
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("project_1");
	gluOrtho2D(0,500,0,500);
	glutDisplayFunc(mydisplay_1);
	glutMainLoop();
}

void mydisplay_1()
{
    glClearColor(c,c,c,0);
	glClear(GL_COLOR_BUFFER_BIT);
    glEnable(GL_POINT_SMOOTH);
	glPointSize(10);
   /*
   glBegin(GL_POINTS);
        glColor3f(0,0,1);
         glVertex2f(x,z);
         glColor3f(1,0,0);
         glVertex2f(z,y);
         glColor3f(0,0,1);
         glVertex2f(w,z);
        glColor3f(1,0,0);
         glVertex2f(z,q);
    glEnd();
   */
 glBegin(GL_POINTS);
        glColor3f(0,0,1);
         glVertex2f(x,z);
         glColor3f(1,0,0);
         glVertex2f(z,x);
         glColor3f(0,0,1);
         glVertex2f(w,z);
        glColor3f(1,0,0);
         glVertex2f(z,w);
    glEnd();

    x+=deltaX;
	if(x>250||x<0){
        deltaX=-deltaX;
        c=!c;
	}
    q+=deltaq;
	if(q>500||q<250){
        deltaq=-deltaq;
       // c=!c;
	}
    y-=deltay;
    if(y>250||y<0)
        deltay=-deltay;
    w-=deltaw;
    if(w>500||w<250)
        deltaw=-deltaw;
    glutPostRedisplay();


}
