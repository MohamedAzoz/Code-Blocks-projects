#include<windows.h>
#include <GL/glut.h>
#include <math.h>

float i=0,i1=45,i2=90,i3=135,i4=180,i5=225,i6=270,i7=315,x2=250,y2=250,red=100,c=0;
double pi=22/7;


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

	glPointSize(10);
    glBegin(GL_POINTS);
          glColor3f(1,1,0);
         glVertex2f(x2+cos(i)*red,y2+sin(i)*red);

         glColor3f(0.8,1,0);
         glVertex2f(x2+cos(i1)*red,y2+sin(i1)*red);

         glColor3f(0,0.5,0);
         glVertex2f(x2+cos(i2)*red,y2+sin(i2)*red);

         glColor3f(1,0,1);
         glVertex2f(x2+cos(i3)*red,y2+sin(i3)*red);

          glColor3f(0,1,0.4);
         glVertex2f(x2+cos(i4)*red,y2+sin(i4)*red);

         glColor3f(0,1,1);
         glVertex2f(x2+cos(i5)*red,y2+sin(i5)*red);

         glColor3f(0,1,0);
         glVertex2f(x2+cos(i6)*red,y2+sin(i6)*red);

         glColor3f(1,1,1);
         glVertex2f(x2+cos(i7)*red,y2+sin(i7)*red);

    glEnd();
	glFlush();
        i+=(pi)/360*0.1;
        i1+=(pi)/360*0.1;

        i2+=(pi)/360*0.1;

        i3+=(pi)/360*0.1;

        i4+=(pi)/360*0.1;

        i5+=(pi)/360*0.1;
        i6+=(pi)/360*0.1;

        i7+=(pi)/360*0.1;

    glutPostRedisplay();

}

