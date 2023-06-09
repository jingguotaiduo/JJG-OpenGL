//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <GL/glut.h>
//
//GLboolean doubleBuffer;
//
///* ARGSUSED1 */
//static void
//Key(unsigned char key, int x, int y)
//{
//	switch (key) {
//	case 27:
//		exit(0);
//	}
//}
//
//static void
//Draw(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
//
//	glStencilFunc(GL_ALWAYS, 1, 1);
//	glStencilOp(GL_KEEP, GL_KEEP, GL_REPLACE);
//
//	/* red triangle */
//	glColor3ub(200, 0, 0);
//	glBegin(GL_POLYGON);
//	glVertex3i(-4, -4, 0);
//	glVertex3i(4, -4, 0);
//	glVertex3i(0, 4, 0);
//	glEnd();
//
//	glStencilFunc(GL_EQUAL, 1, 1);
//	glStencilOp(GL_INCR, GL_KEEP, GL_DECR);
//
//	/* green square */
//	glColor3ub(0, 200, 0);
//	glBegin(GL_POLYGON);
//	glVertex3i(3, 3, 0);
//	glVertex3i(-3, 3, 0);
//	glVertex3i(-3, -3, 0);
//	glVertex3i(3, -3, 0);
//	glEnd();
//
//	glStencilFunc(GL_EQUAL, 1, 1);
//	glStencilOp(GL_KEEP, GL_KEEP, GL_KEEP);
//
//	/* blue square */
//	glColor3ub(0, 0, 200);
//	glBegin(GL_POLYGON);
//	glVertex3i(3, 3, 0);
//	glVertex3i(-3, 3, 0);
//	glVertex3i(-3, -3, 0);
//	glVertex3i(3, -3, 0);
//	glEnd();
//
//	if (doubleBuffer) {
//		glutSwapBuffers();
//	}
//	else {
//		glFlush();
//	}
//}
//
//static void
//Args(int argc, char **argv)
//{
//	GLint i;
//
//	doubleBuffer = GL_TRUE;
//	for (i = 1; i < argc; i++) {
//		if (strcmp(argv[i], "-sb") == 0) {
//			doubleBuffer = GL_FALSE;
//		}
//		else if (strcmp(argv[i], "-db") == 0) {
//			doubleBuffer = GL_TRUE;
//		}
//	}
//}
//
//int
//main(int argc, char **argv)
//{
//	GLenum type;
//
//	glutInit(&argc, argv);
//	Args(argc, argv);
//
//	type = GLUT_RGB | GLUT_STENCIL;
//	type |= (doubleBuffer) ? GLUT_DOUBLE : GLUT_SINGLE;
//	glutInitDisplayMode(type);
//	glutCreateWindow("Stencil Test");
//
//	glClearColor(0.0, 0.0, 0.0, 0.0);
//	glClearStencil(0);
//	glStencilMask(1);
//	glEnable(GL_STENCIL_TEST);
//
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-5.0, 5.0, -5.0, 5.0, -5.0, 5.0);
//	glMatrixMode(GL_MODELVIEW);
//
//	glutKeyboardFunc(Key);
//	glutDisplayFunc(Draw);
//	glutMainLoop();
//	return 0;
//}