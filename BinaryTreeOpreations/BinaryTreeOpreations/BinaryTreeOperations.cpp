#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
//定义二叉树节点
typedef struct node{
	char data;
	struct node *lchild, *rchild;
}BinTree;
typedef struct node1{
	BinTree *btnode;
	bool isFirst;
}BTNode;
//创建二叉树，s为形如A(B,C(D,E))形式的字符串
void CreateBinTree(char *s,BinTree *&root){
	int i;
	bool isRight=false;
	stack<BinTree*>s1;	//存放节点
	stack<char> s2;		//存放分隔符
	BinTree *p,*temp;
	root->data=s[0];
	root->lchild=NULL;
	root->rchild=NULL;
	s1.push(root);
	i=1;
	while(i<strlen(s)){
		if(s[i]=='(')
		{
			s2.push(s[i]);
			isRight=false;
		}
		else if (s[i]==',')
		{
			isRight=true;
		}
		else if(s[i]==')')
		{
			s1.pop();
			s2.pop();
		}else if(isalpha(s[i]))
		{
			p=(BinTree*)malloc(sizeof(BinTree));
			p->data=s[i];
			p->rchild=NULL;
			p->lchild=NULL;
			temp=s1.top();
			if(isRight==true){
				temp->rchild=p;
				cout<<temp->data<<"的右孩子是"<<s[i]<<endl;
			}
			else
			{
				temp->lchild=p;
				cout<<temp->data<<"的左孩子是"<<s[i]<<endl;
			}
			if(s[i+1]=='(')
			{
				s1.push(p);
			}
		}
		i++;
	}

}
void display(BinTree *root){
	if(root!=NULL){
		cout<<root->data;
		if(root->lchild!=NULL){
			cout<<'(';
			display(root->lchild);
		}
		if(root->rchild!=NULL){
			cout<<',';
			display(root->rchild);
			cout<<')';
		}
	}
}

//递归，先序遍历
void preOrder1(BinTree *root){
	if(root!=NULL){
		cout<<root->data<<" ";
		preOrder1(root->lchild);
		preOrder1(root->rchild);
	}
}
//递归，中序遍历
void inOrder1(BinTree *root){
	if(root!=NULL){
		inOrder1(root->lchild);
		cout<<root->data<<" ";
		inOrder1(root->rchild);
	}
}
//递归，后序遍历
void postOrder1(BinTree *root){
	if(root!=NULL){
		postOrder1(root->lchild);
		postOrder1(root->rchild);
		cout<<root->data<<" ";
	}
}
//非递归先序遍历
void preOrder2(BinTree *root){
	stack<BinTree*> s;
	BinTree *p=root;
	while (p!=NULL||!s.empty())
	{
		while(p!=NULL){
			cout<<p->data<<" ";
			s.push(p);
			p=p->lchild;
		}
		if(!s.empty()){
			p=s.top();
			s.pop();
			p=p->rchild;
		}
	}
}
//非递归中序遍历
void inOrder2(BinTree *root){
	stack<BinTree *> s;
	BinTree *p=root;
	while(p!=NULL||!s.empty()){
		while (p!=NULL)
		{
			s.push(p);
			p=p->lchild;
		}
		if(!s.empty()){
			p=s.top();
			cout<<p->data<<" ";
			s.pop();
			p=p->rchild;
		}
	}
}
//非递归后序遍历
void postOrder2(BinTree *root){
	stack<BTNode *> s;
	BinTree *p=root;
	BTNode *temp;
	while(p!=NULL||!s.empty()){
		//沿着左子树一直往下搜索，直至出现没有左子树的节点
		while (p!=NULL)
		{
			BTNode *btn=(BTNode *)malloc(sizeof(BTNode));
			btn->btnode=p;
			btn->isFirst=true;
			s.push(btn);
			p=p->lchild;
		}
		if(!s.empty()){
			temp=s.top();
			s.pop();
			//表示第一次出现在栈顶
			if(temp->isFirst==true){
				temp->isFirst=false;
				s.push(temp);
				p=temp->btnode->rchild;
			}else
				//第二次出现在栈顶
			{
				cout<<temp->btnode->data<<" ";
				p=NULL;
			}
		}
	}
}
//非递归后续遍历2
void postOrder3(BinTree *root){
	stack<BinTree *> s;
	BinTree *cur;
	BinTree *pre=NULL;
	s.push(root);
	while(!s.empty()){
		cur=s.top();
		if((cur->lchild==NULL&&cur->rchild==NULL)||
			(pre!=NULL&&(pre==cur->lchild||pre==cur->rchild))){
				cout<<cur->data<<" ";	//如果当前节点没有孩子节点或者孩子节点都已经被访问过
				s.pop();
				pre=cur;
		}else
		{
			if(cur->rchild!=NULL){
				s.push(cur->rchild);
			}
			if(cur->lchild!=NULL)
				s.push(cur->lchild);
		}
	}
}
int main(){
	char s[100];
	//A(B,C(D,E))
	while (scanf("%s",s)==1)
	{
		BinTree *root=(BinTree *)malloc(sizeof(BinTree));
		CreateBinTree(s,root);
		display(root);
		cout<<endl;
		preOrder1(root);
		cout<<endl;
		inOrder1(root);
		cout<<endl;
		postOrder1(root);
		cout<<endl;
		preOrder2(root);
		cout<<endl;
		inOrder2(root);
		cout<<endl;
		postOrder2(root);
		cout<<endl;
		postOrder3(root);
	}
	
	return 0;
}