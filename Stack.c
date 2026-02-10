// call by value and call by pointer
// #include<stdio.h>
// void swap_CBV(int a, int b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }
// void swap_CBR(int *x, int *y)
// {
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main()
// {
//     int a=5, b=6;
//     printf("a--->%d  b--->%d\n", a,b);
//     swap_CBV(a,b);
//     printf("a--->%d  b--->%d\n", a,b);

//     printf("a--->%d  b--->%d\n", a,b);
//     swap_CBR(&a,&b);
//     printf("a--->%d  b--->%d\n", a,b);
// }

// Structures

// typedef struct
// {
//     int a;
//     float b;
// }student;
// // void display(student s)
// // {
// //     printf("%d  %f",s.a,s.b);
// // }
// void display(student *s)
// {
//     printf("%d  %f",s->a,s->b);
// }
// int main()
// {
//     student s;
//     s.a=10;
//     s.b=34.5;
//     // display(s);
//     display(&s);
// }
// Stack start from here

#include <stdio.h>
#include <stdlib.h>
#define MS 5
typedef struct
{
    int arr[MS];
    int top;

} stack;
void init(stack *s)
{
    s->top = -1;
}
void push(stack *s, int x)
{
    if (s->top == MS - 1)
    {
        printf("Jyada hoshiyaar hai kya!!\n");
        return;
    }
    s->top++;
    s->arr[s->top] = x;
}
void display(stack *s)
{
    for (int i = 0; i <= s->top; i++)
    {
        printf("%d  ", s->arr[i]);
    }
    printf("\n");
}
void pop(stack *s)
{
    if(s->top==-1)
    {
        printf("Underflow\n");
        return;
    }
    --s->top;
}
int getSize(stack *s)
{
    int size=s->top+1;
    return size;
}
int main()
{
    stack s;
    init(&s);
    push(&s, 10);
    display(&s);

    push(&s, 20);
    display(&s);
    push(&s, 30);
    display(&s);
    push(&s, 40);
    printf("Size--->%d", getSize(&s));
    display(&s);
    push(&s, 50);
    display(&s);
    push(&s, 60);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);
    
}
