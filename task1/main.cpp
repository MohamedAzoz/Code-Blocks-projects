#include<windows.h>
#include <GL/glut.h>
#include <math.h>


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
    glClearColor(0.5,0.5,0.5,0);
	glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON);
        glColor3f(0,0,0);
		glVertex2f(50,200);
        glVertex2f(50,250);
        glVertex2f(400,250);
        glVertex2f(400,200);
	glEnd();
glBegin(GL_POLYGON);
        glColor3f(1,1,1);
		glVertex2f(50,150);
        glVertex2f(50,200);
        glVertex2f(400,200);
        glVertex2f(400,150);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3f(0,0.6,0);
		glVertex2f(50,100);
        glVertex2f(50,150);
        glVertex2f(400,150);
        glVertex2f(400,100);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3f(1,0,0);
		glVertex2f(50,100);
        glVertex2f(50,250);
        glVertex2f(200,175);
        glVertex2f(50,100);
	glEnd();
	glFlush();
}


