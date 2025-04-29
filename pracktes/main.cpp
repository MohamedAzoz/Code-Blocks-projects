#include<Windows.h>
#include <GL/glut.h>
#include <math.h>


void Drow();

int main(){
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("view");
    gluOrtho2D(0,500,0,500);
    glutDisplayFunc(Drow);
    glutMainLoop();
}
void Drow(){
    glClearColor(0,0,1,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(10);
    glBegin(GL_POINTS);
        glColor3f(1,1,1);
        glVertex2d(150,180);
    glEnd();
    glLineWidth(10);
     glBegin(GL_LINES);
        glColor3f(1,1,1);
        glVertex2d(190,180);
        glVertex2d(100,120);
    glEnd();

    glBegin(GL_LINE_STRIP);
        glColor3f(1,1,1);
        glVertex2d(120,80);
        glVertex2d(10,30);
        glVertex2d(40,60);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glColor3f(1,1,1);
        glVertex2d(200,200);
        glVertex2d(250,220);
        glVertex2d(280,260);
    glEnd();

     glBegin(GL_POLYGON);
        glColor3f(1,1,1);
        glVertex2d(300,300);
        glVertex2d(350,330);
        glVertex2d(400,400);
    glEnd();
    glFlush();
}
