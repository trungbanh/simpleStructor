#include <stdio.h>

#define MAXLENGHT 100
typedef int ElementType ;

typedef struct Stack {
	ElementType Element [MAXLENGHT];
	int Top;
} ;

void INIT_STACK (Stack &S) {
	S.Top = MAXLENGHT ;
}

bool IS_EMPTY_STACK (Stack s) {
	return s.Top == MAXLENGHT ;
}

bool IS_FULL_STACK (Stack s) {
	return s.Top == 0;
}

ElementType TOP (Stack s) {
	if (! IS_EMPTY_STACK(s)) {
		return s.Element[s.Top];
	} else {
		printf("error stack is null !!!");
		return ;
	}
	return ;
}
void POP (Stack &s) {
	if (!IS_EMPTY_STACK(s)){
		s.Top = s.Top+1 ;
	} else 
	{
		printf("error stack is null !!!");
	}
}

void PUSH (ElementType e ,Stack &s) {
	if (IS_FULL_STACK(s)) {
		printf ("error the stack is full");
	} else {
		s.Top = s.Top+1 ;
		s.Element[s.Top] = e ;
	}
}