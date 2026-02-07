#include <GL/glut.h>

void drawHouse(void) {
    // House body (beige)
    glColor3f(0.96f, 0.87f, 0.70f);
    glBegin(GL_POLYGON);
        glVertex2f(11, 4);
        glVertex2f(11, 12);
        glVertex2f(22, 12);
        glVertex2f(22, 4);
    glEnd();

    // Roof (brick red)
    glColor3f(0.75f, 0.13f, 0.13f);
    glBegin(GL_TRIANGLES);
        glVertex2f(11, 12);
        glVertex2f(16.2f, 19);
        glVertex2f(22, 12);
    glEnd();

    // Door (wood brown)
    glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_POLYGON);
        glVertex2f(15, 4);
        glVertex2f(15, 9);
        glVertex2f(18, 9);
        glVertex2f(18, 4);
    glEnd();

    // Left window (blue glass)
    glColor3f(0.53f, 0.81f, 0.98f);
    glBegin(GL_POLYGON);
        glVertex2f(12, 10);
        glVertex2f(12, 8);
        glVertex2f(14, 8);
        glVertex2f(14, 10);
    glEnd();

    // Right window (blue glass)
    glColor3f(0.53f, 0.81f, 0.98f);
    glBegin(GL_POLYGON);
        glVertex2f(19, 10);
        glVertex2f(19, 8);
        glVertex2f(21, 8);
        glVertex2f(21, 10);
    glEnd();

    // Window frames (black outlines)
    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(2.0);
    glBegin(GL_LINE_LOOP);
       glVertex2f(12, 10);
        glVertex2f(12, 8);
        glVertex2f(14, 8);
        glVertex2f(14, 10);
    glEnd();


    glBegin(GL_LINE_LOOP);
      glVertex2f(19, 10);
        glVertex2f(19, 8);
        glVertex2f(21, 8);
        glVertex2f(21, 10);
    glEnd();

    // Ground (fresh green grass)
    glColor3f(0.13f, 0.55f, 0.13f);
    glBegin(GL_POLYGON);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.0f, 4.0f);
        glVertex2f(28.0f, 4.0f);
        glVertex2f(28.0f, 0.0f);
    glEnd();


    glColor3f(0.53f, 0.81f, 0.98f);
    glBegin(GL_POLYGON);
        glVertex2f(15, 11);
        glVertex2f(15, 10);
        glVertex2f(18, 10);
        glVertex2f(18, 11);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(2.0);
    glBegin(GL_LINE_LOOP);
       glVertex2f(15, 11);
        glVertex2f(15, 10);
        glVertex2f(18, 10);
        glVertex2f(18, 11);
    glEnd();
   glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_POLYGON);
        glVertex2f(4, 4);
        glVertex2f(5, 4);
        glVertex2f(5, 12);
        glVertex2f(4, 12);
    glEnd();
     glColor3f(0.13f, 0.55f, 0.13f);
    glBegin(GL_TRIANGLES);
        glVertex2f(4, 24);
        glVertex2f(1, 16);
        glVertex2f(8, 16);
    glEnd();
     glColor3f(0.13f, 0.55f, 0.13f);
    glBegin(GL_TRIANGLES);
        glVertex2f(4, 24);
        glVertex2f(1, 12);
        glVertex2f(8, 12);
    glEnd();
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);  // Clear screen
    drawHouse();                   // Call house function
    glFlush();                     // Render
}

void init(void) {
    glClearColor(0.68f, 0.85f, 0.90f, 0.0f); // Light sky blue background
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 28.0, 0.0, 25.0, -1.0, 1.0);  // Orthographic projection
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Aesthetic House Drawing");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
