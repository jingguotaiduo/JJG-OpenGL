//#include <stdio.h>
//#include <stdlib.h>
//
//#include <GL/glut.h>
//
///* function declarations */
//
//void
//drawScene(void), setMatrix(void), animateClipPlane(void), animation(void),
//resize(int w, int h), keyboard(unsigned char c, int x, int y);
//
///* global variables */
//
//float ax, ay, az;       /* angles for animation */
//GLUquadricObj *quadObj; /* used in drawscene */
//GLdouble planeEqn[] =
//{ 0.707, 0.707, 0.0, 0.0 };  /* initial clipping plane eqn */
//
//int count = 0;
//int clip_count = 0;
//
//void
//menu(int choice)
//{
//	switch (choice) {
//	case 1:
//		count = 90;
//		glutIdleFunc(animation);
//		break;
//	case 2:
//		animateClipPlane();
//		break;
//	}
//}
//
//int
//main(int argc, char **argv)
//{
//	glutInit(&argc, argv);
//
//	quadObj = gluNewQuadric();  /* this will be used in drawScene
//								*/
//	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
//	glutCreateWindow("Arbitrary clip plane");
//
//	ax = 10.0;
//	ay = -10.0;
//	az = 0.0;
//
//	glutDisplayFunc(drawScene);
//	glutReshapeFunc(resize);
//	glutKeyboardFunc(keyboard);
//	glutCreateMenu(menu);
//	glutAddMenuEntry("Rotate", 1);
//	glutAddMenuEntry("Move clip plane", 2);
//	glutAttachMenu(GLUT_RIGHT_BUTTON);
//	glutMainLoop();
//	return 0;             /* ANSI C requires main to return int. */
//}
//
//void
//drawScene(void)
//{
//	glClearColor(0.0, 0.0, 0.0, 0.0);
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glPushMatrix();
//	gluQuadricDrawStyle(quadObj, GLU_LINE);
//	glColor3f(1.0, 1.0, 0.0);
//	glRotatef(ax, 1.0, 0.0, 0.0);
//	glRotatef(-ay, 0.0, 1.0, 0.0);
//
//	glClipPlane(GL_CLIP_PLANE0, planeEqn);  /* define clipping
//											plane */
//	glEnable(GL_CLIP_PLANE0);  /* and enable it */
//
//	gluCylinder(quadObj, 2.0, 5.0, 10.0, 20, 8);  /* draw a cone */
//
//	glDisable(GL_CLIP_PLANE0);
//	glPopMatrix();
//
//	glutSwapBuffers();
//}
//
//void
//setMatrix(void)
//{
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-15.0, 15.0, -15.0, 15.0, -10.0, 10.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//}
//
//void
//animation(void)
//{
//	if (count) {
//		ax += 5.0;
//		ay -= 2.0;
//		az += 5.0;
//		if (ax >= 360)
//			ax = 0.0;
//		if (ay <= -360)
//			ay = 0.0;
//		if (az >= 360)
//			az = 0.0;
//		glutPostRedisplay();
//		count--;
//	}
//	if (clip_count) {
//		static int sign = 1;
//
//		planeEqn[3] += sign * 0.5;
//		if (planeEqn[3] > 4.0)
//			sign = -1;
//		else if (planeEqn[3] < -4.0)
//			sign = 1;
//		glutPostRedisplay();
//		clip_count--;
//	}
//	if (count <= 0 && clip_count <= 0)
//		glutIdleFunc(NULL);
//}
//
//void
//animateClipPlane(void)
//{
//	clip_count = 5;
//	glutIdleFunc(animation);
//}
//
///* ARGSUSED1 */
//void
//keyboard(unsigned char c, int x, int y)
//{
//	switch (c) {
//	case 27:
//		exit(0);
//		break;
//	default:
//		break;
//	}
//}
//
//void
//resize(int w, int h)
//{
//	glViewport(0, 0, w, h);
//	setMatrix();
//}