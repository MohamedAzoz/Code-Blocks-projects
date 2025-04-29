#include<windows.h>
#include<GL/glut.h>
#include<math.h>
float x=250,y=250,daltx=0.1;
int c=0,C=0;
void up(){
if(y<450){
    y+=50;
    c=!c;
}
}
void down(){
if(y>50){
    y-=50;
    c=!c;
}
}
void right(){
if(x<450){
    x+=50;
    c=!c;
}
}
void left(){
if(x>50){
    x-=50;
    c=!c;
}
}

void backgroand(){
    C=!C;
}

void key(int k,int x,int y){
    switch(k){
        case GLUT_KEY_END: exit(0); break;
        case GLUT_KEY_UP: up(); break;
        case GLUT_KEY_DOWN: down(); break;
        case GLUT_KEY_RIGHT: right(); break;
        case GLUT_KEY_LEFT: left(); break;
        case GLUT_KEY_F1: backgroand();break;
    }
}

void draw(){
glClearColor(C,C,C,0);
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(15);
glBegin(GL_POINTS);
    glColor3f(c,!c,!c);
        glVertex2f(x,y);
glEnd();
glFlush();
glutPostRedisplay();
}

int main(){
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("View");
    gluOrtho2D(0,500,0,500);
    glutDisplayFunc(draw);
    glutSpecialFunc(key);
    glutMainLoop();
}

