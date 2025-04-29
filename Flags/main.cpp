#include<windows.h>

#include <GL/glut.h>
#include <math.h>


void mydisplay_1();


int main()
{
	glutInitWindowSize(1200,1200);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Flags");
	gluOrtho2D(0,515,0,515);
	glutDisplayFunc(mydisplay_1);
	glutMainLoop();
}

void mydisplay_1()
{
    glClearColor(0.5,0.5,0.5,0);
	glClear(GL_COLOR_BUFFER_BIT);
    //////////////----------- علو فلسطين --------------

glBegin(GL_POLYGON);
        glColor3f(0,0,0);
		glVertex2f(0,80);
        glVertex2f(0,120);
        glVertex2f(100,120);
        glVertex2f(100,80);
	glEnd();
glBegin(GL_POLYGON);
        glColor3f(1,1,1);
		glVertex2f(0,40);
        glVertex2f(0,80);
        glVertex2f(100,80);
        glVertex2f(100,40);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3f(0,0.6,0);
		glVertex2f(0,0);
        glVertex2f(0,40);
        glVertex2f(100,40);
        glVertex2f(100,0);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3f(1,0,0);
		glVertex2f(0,0);
        glVertex2f(0,120);
        glVertex2f(40,60);
        glVertex2f(0,0);
	glEnd();


	////----------- علم الامرات  -------------///////

	glBegin(GL_POLYGON);
        glColor3f(0,0,0);
		glVertex2f(20,210);
        glVertex2f(20,250);
        glVertex2f(100,250);
        glVertex2f(100,210);
	glEnd();
glBegin(GL_POLYGON);
        glColor3f(1,1,1);
		glVertex2f(20,170);
        glVertex2f(20,210);
        glVertex2f(100,210);
        glVertex2f(100,170);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3f(0,0.6,0);
		glVertex2f(20,130);
        glVertex2f(20,170);
        glVertex2f(100,170);
        glVertex2f(100,130);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3f(1,0,0);
		glVertex2f(0,130);
        glVertex2f(0,250);
        glVertex2f(20,250);
        glVertex2f(20,130);
	glEnd();
///////////------------------ علم الكويت --------------------/////////////

glBegin(GL_POLYGON);
        glColor3f(0,0.6,0);
		glVertex2f(0,340);
        glVertex2f(0,380);
        glVertex2f(100,380);
        glVertex2f(100,340);
	glEnd();
glBegin(GL_POLYGON);
        glColor3f(1,1,1);
		glVertex2f(0,300);
        glVertex2f(0,340);
        glVertex2f(100,340);
        glVertex2f(100,300);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3f(1,0,0);
		glVertex2f(0,260);
        glVertex2f(0,300);
        glVertex2f(100,300);
        glVertex2f(100,260);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3f(0,0,0);
		glVertex2f(0,260);
        glVertex2f(0,380);
        glVertex2f(30,340);
        glVertex2f(30,300);
        glVertex2f(0,260);
	glEnd();

///////////------------------ علم التشاد --------------------/////////////

glBegin(GL_POLYGON);
        glColor3f(0,0,0.7);
		glVertex2f(0,390);
        glVertex2f(0,510);
        glVertex2f(40,510);
        glVertex2f(40,390);
	glEnd();
glBegin(GL_POLYGON);
        glColor3f(1,0.9,0);
		glVertex2f(40,390);
        glVertex2f(40,510);
        glVertex2f(80,510);
        glVertex2f(80,390);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3f(0.7,0,0);
		glVertex2f(80,390);
        glVertex2f(80,510);
        glVertex2f(120,510);
        glVertex2f(120,390);
	glEnd();

	///////////------------------ علم البرازيل --------------------/////////////

glBegin(GL_POLYGON);
        glColor3f(0,0.7,0);
		glVertex2f(130,390);
        glVertex2f(130,510);
        glVertex2f(230,510);
        glVertex2f(230,390);
	glEnd();
glBegin(GL_POLYGON);
        glColor3f(1,0.9,0);
		glVertex2f(180,390);
        glVertex2f(230,450);
        glVertex2f(180,510);
        glVertex2f(130,450);

	glEnd();
	glBegin(GL_POLYGON);

    float x=180,y=450,r=20;
    double pi=22/7;
    for(float i=0;i<=2*pi;i+=pi/360){
        glColor3f(0,0,1);
         glVertex2f(x+cos(i)*r,y+sin(i)*r);

    }

	glEnd();


	///////////------------------علم_سلطنة_عمان --------------------/////////////

glBegin(GL_POLYGON);
        glColor3f(1,1,1);
		glVertex2f(130,340);
        glVertex2f(130,380);
        glVertex2f(230,380);
        glVertex2f(230,340);
	glEnd();
glBegin(GL_POLYGON);
        glColor3f(0.9,0,0);
		glVertex2f(130,300);
        glVertex2f(130,340);
        glVertex2f(230,340);
        glVertex2f(230,300);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3f(0,0.9,0);
		glVertex2f(130,260);
        glVertex2f(130,300);
        glVertex2f(230,300);
        glVertex2f(230,260);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3f(0.9,0,0);
		glVertex2f(130,260);
        glVertex2f(130,380);
        glVertex2f(170,380);
        glVertex2f(170,260);

	glEnd();


	glFlush();
}

