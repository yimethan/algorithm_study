#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

typedef struct NODE {
   int Data;
   struct NODE* Next;
} node;

typedef node* Nptr;

typedef struct {
   int Count;
   Nptr Head;
} listType;

void Insert(listType* Lptr, int Position, int Item);
void Delete(listType* Lptr, int Position);
void Retrieve(listType* Lptr, int Position, int* ItemPtr);
void Init(listType* Lptr);
bool IsEmpty(listType* Lptr);
int Length(listType* Lptr);
void Delete_item(listType* Lptr, int Item);
void printList(listType* Lptr);

int main() {
   int input, inputData, pos;
   listType List1;
   Init(&List1);
   int Result;
   do {
      printf("�Է�:1, ����:2, ��ã�� ����:3, ��������:4, ��ü���:5, ����:0  :  ");
      scanf("%d", &input);
      if (input == 1) {
         printf("���° ĭ�� �� ������ �����̽��ٷ� �����ؼ� �Է� : ");
         scanf("%d%d", &pos, &inputData);
         Insert(&List1, pos, inputData);
      }
      else if (input == 2) {
         printf("���° ĭ���� ������ �Է� : ");
         scanf("%d", &pos);
         Delete(&List1, pos);
      }
      else if (input == 3) {
         printf("� ���� ã�Ƽ� ������ �Է� : ");
         scanf("%d", &pos);
         Delete_item(&List1, pos);
      }
      else if (input == 4) {
         printf("���° ĭ���� ������ �� �Է� : ");
         scanf("%d", &pos);
         Retrieve(&List1, pos, &inputData);
         printf("������ �����ʹ� %d�Դϴ�\n", inputData);
      }
      else if (input == 5) {
         printList(&List1);
      }
   } while (input != 0);
}

void Init(listType* Lptr)
{
   Lptr->Count = 0;
   Lptr->Head = NULL;
}
bool IsEmpty(listType* Lptr)
{
   return (Lptr->Count == 0);
}
void Insert(listType* Lptr, int Position, int Item)
{
   if ((Position > (Lptr->Count + 1)) || (Position < 1))
      printf("Position out of Range");
   else
   {
      Nptr p = (node*)malloc(sizeof(node));
      p->Data = Item;
      if (Position == 1)
      {
         p->Next = Lptr->Head;
         Lptr->Head = p;
      }
      else
      {
         Nptr Temp = Lptr->Head;
         for (int i = 1; i < (Position - 1); i++)
            Temp = Temp->Next;
         p->Next = Temp->Next;
         Temp->Next = p;
      }
      Lptr->Count += 1;
   }
}
void Delete(listType* Lptr, int Position)
{
   if (IsEmpty(Lptr))
      printf("Deletion on Empty List");
   else if (Position > (Lptr->Count) || (Position < 1))
      printf("Position out of Range");
   else
   {
      if (Position == 1)
      {
         Nptr p = Lptr->Head;
         Lptr->Head = Lptr->Head->Next;
         free(p);
      }
      else
      {
         Nptr Temp = Lptr->Head;
         for (int i = 1; i < (Position - 1); i++)
            Temp = Temp->Next;
         Nptr p = Temp->Next;
         Temp->Next = p->Next;
         free(p);
      }
   }
   Lptr->Count -= 1;
}


void Delete_item(listType* Lptr, int Item)
{
   Nptr Prev = NULL;
   Nptr Temp = Lptr->Head;
   if (Temp == NULL) // ����� ��
        printf("No Nodes to Delete");
   while (Temp != NULL) // ������ �ϳ��ϳ� �˻�
   {
       if(Temp->Data == Item) // Temp�� Data�� Item�� ��ġ�ϸ�
       {
           if (Temp == Lptr->Head) // ù ����� ��
            {
                Nptr n = Temp;
                Prev = Temp;
                Temp = Temp->Next;
                Lptr->Head = Lptr->Head->Next;
                free(n);
            }
            else // ù ��尡 �ƴ� ��
            {
                Nptr n = Prev->Next;
                Temp = Temp->Next;
                Prev->Next = n->Next;
                Prev = Temp;
                free(n);
            }
            Lptr->Count -= 1;
       }
       else {
           Prev = Temp;
           Temp = Temp->Next;
       }
   }
} 

void printList(listType* Lptr) {
   Nptr Temp = Lptr->Head;
   while (Temp != NULL)
   {
      printf("%d ", Temp->Data);
      Temp = Temp->Next;
   }
   printf("\n");
}
int Length(listType* Lptr) {
   return Lptr->Count;
}
void Retrieve(listType* Lptr, int Position, int* ItemPtr) {
   if (IsEmpty(Lptr))
      printf("Deletion on Empty List");
   else if (Position > (Lptr->Count) || (Position < 1))
      printf("Position out of Range");
   else
   {
      Nptr Temp = Lptr->Head;
      for (int i = 1; i < (Position); i++)
         Temp = Temp->Next;
      *ItemPtr = Temp->Data;
   }
}