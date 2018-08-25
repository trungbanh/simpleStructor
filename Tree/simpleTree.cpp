#include <stdio.h>

#define MAXLENGHT 100
typedef int Node ;
typedef int Data ;

typedef struct Tree {
	Data data [MAXLENGHT];
	Node Parent [MAXLENGHT];
	int MaxNode ;
} ;

void INIT_TREE (Tree &t) {
	t.MaxNode = 0 ;
}

bool IS_EMPTY_TREE (Tree t) {
	return t.MaxNode ==0 ;
}

Node PARENT (Node n,Tree t) {
	if (IS_EMPTY_TREE(t)||n> t.MaxNode-1 || n<0) ){
		// n > MaxNode and n < 0 --> mean it not a node in tree
		return ;
	} else {
		return t.Parent[n] ;
	}
}

Data LABEL (Node n, Tree t){
	if (!IS_EMPTY_TREE(t) && n<= t.MaxNode-1 && n>=0) ){
		return t.data[n];
	}
	return ;
}
Node ROOT (Tree t) {
	if (!IS_EMPTY_TREE(t)) {
		return 0 ;
	}
	return ;
}

Node LEFT_MOST_CHILD (Node n,Tree t) {
	Node i ;
	if (n<0) {
		return ;
	}
	i=n+1 ;
	while (i<=t.MaxNode-1) {
		if (t.Parent[i]==n) {
			return i ;
		}
		i+=1 ;
	}
	return ;
}

Node RIGHT_SIBLING (Node n,Tree t) {
	Node i,parent ;
	if (n<0) {
		return ;
	}
	i=n+1 ;
	parent = t.Parent[n]
	while (i<=t.MaxNode-1) {
		if (t.Parent[i]==n) {
			return i ;
		}
		i+=1 ;
	}
	return ;
}


