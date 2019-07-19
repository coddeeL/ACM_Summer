#include <iostream>
using namespace std;
struct BiTNode{
    char data;
    struct BiTNode* lchild,* rchild; // ���Һ���
};
void CreatBiTree(BiTNode* &T){ // ����ݹ鴴��������
    // �Ȱ�˳��ʻ��������нڵ��ֵ(һ���ַ�),�ո��ַ��������
    char ch;
   
        if((ch=getchar()) == '#') // getchar() Ϊ��������׼�⺯��
            T = NULL;
        else{
            T = new BiTNode; // �����µ�����
            T->data = ch; // ��getchar()���������
            CreatBiTree(T->lchild); // �ݹ鴴��������
            CreatBiTree(T->rchild); // �ݹ鴴��������
        }
    }

void PreOrderTraverse(BiTNode* &T){ // �������������
    if(T){ // ���ڵ㲻Ϊ��ʱִ��
        cout << T->data;
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
    else
        cout << "";
}
void Inoder(BiTNode* &T){ // �������������
    if(T){
        Inoder(T->lchild);
        cout << T->data;
        Inoder(T->rchild);
    }
    else
        cout << "";
 
}
void Posoder(BiTNode* &T){ // �������������
    if(T){
        Posoder(T->lchild);
        Posoder(T->rchild);
        cout << T->data;
    }
    else
        cout << "";
}
int main(){
    cout << "����һ�Ŷ�����,����A~Z�ַ�������������,��'#'��ʾ����:" << endl;
    BiTNode* T;
    CreatBiTree(T);
    cout << "����ݹ����" << endl;
    PreOrderTraverse(T);
    cout << "����ݹ����" << endl;
    Inoder(T);
    cout << "����ݹ����" << endl;
    Posoder(T);
 
    return 1;
}

