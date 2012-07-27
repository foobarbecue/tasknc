/*
 * vim: noet ts=4 sw=4 sts=4
 *
 * view.h
 * for tasknc
 * by mjheagle
 */


#ifndef _VIEW_H
#define _VIEW_H

typedef struct _line
{
	char *str;
	struct _line *next;
} line;

void view_task(task *);

extern bool redraw;
extern config cfg;
extern FILE *logfp;
extern int cols;
extern int rows;
extern WINDOW *statusbar;

#endif