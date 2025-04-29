#include<windows.h>
#include <GL/glut.h>
#include <math.h>


void mydisplay_1();


int main()
{
	glutInitWindowSize(800,800);
	glutInitWindowPosition(100,100);
	glutCreateWindow("project_1");
	gluOrtho2D(0,500,0,500);
	glutDisplayFunc(mydisplay_1);
	glutMainLoop();
}

void mydisplay_1()
{
    glClearColor(0.7,0.7,0,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
        glColor3f(0,0.6,0.7);
		glVertex2f(0,400);
        glVertex2f(0,500);
        glVertex2f(500,500);
        glVertex2f(500,400);
	glEnd();
	glBegin(GL_POLYGON);
    float x=460,y=460,r=30;
    double pi=22/7;
    for(float i=0;i<=2*pi;i+=pi/360){
        glColor3f(1,1,0);
         glVertex2f(x+cos(i)*r,y+sin(i)*r);

    }
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.5,0.5,0.5);
        glVertex2f(10,300);
        glVertex2f(300,300);
        glVertex2f(150,370);
	glEnd();
glBegin(GL_POLYGON);
        glColor3f(0,0,0);
		glVertex2f(10,10);
        glVertex2f(10,300);
        glVertex2f(300,300);
        glVertex2f(300,10);
	glEnd();

glBegin(GL_POLYGON);
        glColor3f(0.5,0.5,0.5);
		glVertex2f(70,200);
        glVertex2f(70,250);
        glVertex2f(120,250);
        glVertex2f(120,200);
	glEnd();

	glBegin(GL_POLYGON);
        glColor3f(0.5,0.5,0.5);
		glVertex2f(200,200);
        glVertex2f(200,250);
        glVertex2f(250,250);
        glVertex2f(250,200);
	glEnd();

	glBegin(GL_POLYGON);
        glColor3f(0.5,0.5,0.5);
		glVertex2f(120,10);
        glVertex2f(120,130);
        glVertex2f(170,130);
        glVertex2f(170,10);
	glEnd();

	glFlush();
}


