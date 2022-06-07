
#include <GL/glut.h>
#include <stdio.h>
#define X 400
#define Y 400

void inicializa(){
    
    glClearColor(1, 1, 1, 0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-X, X, -Y, Y);
    
}

void traslate(){
    
    int i;
    
    for(i=1; i<=400; i++){
        
        glClear(GL_COLOR_BUFFER_BIT);
        
        glColor3f(0, 0, 0);
        
        glScaled(i, i, 0);
        
        glBegin(GL_POLYGON);
    
        glVertex2i(-1, -1);
        glVertex2i(1, -1);
        glVertex2i(1, 1);
        glVertex2i(-1, 1);
    
        glEnd();
        
        Sleep(10);
        glScaled(1.0/i, 1.0/i, 0);
        glFlush();
        
    }
    
}

int main(){
    
    glutInitWindowSize(X, Y);
    glutCreateWindow("Función 2D");    
    inicializa();
    glutDisplayFunc(traslate);
    glutMainLoop();
    
}
