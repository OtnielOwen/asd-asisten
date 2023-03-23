#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 5

int menu;

struct Stack {
    int data[MAX];
    int top;
}stack;

int main(){
    printf("===========================\n");
    printf("Tugas Quiz Stack and Queue\n");
    printf("===========================\n");
    printf("1.Stack String\n");
    printf("2.Queue Integer\n");
    printf("3.Penjelasan Stack\n");
    printf("4.Penjelasan Queue\n");
    printf("5.Exit\n");
    printf("===========================\n");
    printf("Input Pilihan : ");
    scanf("%d", &menu);

    switch(menu){
    case 1:
        system("cls");
        pilihanStack();
        break;

    case 2:
        system("cls");
       pilihanQueue();
        break;

    case 3:
        system("cls");
        penjelasanStack();
        break;

    case 4:
        system("cls");
        penjelasanQueue();
        break;

    case 5:
        system("cls");
        printf("\n\t\tTERIMA KASIH TELAH MENJADI TESTER, PROGRAM INI TIDAKLAH SEMPURNA");
        getch();
        break;

        default:
            fflush(stdin);
            printf("INPUT SALAH!");
            getch();
            system("cls");
            main();
    }
}

void pilihanStack(){
    stack.top = -1;
    printf("===========================\n");
    printf("          Stack \n");
    printf("===========================\n");
    printf("1.Push Stack\n");
    printf("2.Pop Stack\n");
    printf("3.Print Stack\n");
    printf("4.Delete Stack\n");
    printf("5.Return Main Menu\n");
    printf("===========================\n");
    printf("Input Pilihan : ");
    scanf("%d", &menu);

    switch(menu){
    case 1:
        system("cls");
        pushStack();
        break;

    case 2:
        system("cls");
        popStack();
        break;

    case 3:
        system("cls");
        printStack();
        break;

    case 4:
        system("cls");
        deleteStack();
        break;

    case 5:
        system("cls");
        main();
        break;

    default:
             printf("SALAH INPUT");
             fflush(stdin);
            getch();
            system("cls");
           pilihanStack();
    }
}
void pushStack() {
    int data;
    if (stack.top == MAX - 1) {
        printf("Stack Penuh");
        getch();
        system("cls");
        pilihanStack();
    } else {
        printf("Masukkan Data : ");
        scanf("%d", &data);
        stack.top++;
        stack.data[stack.top] = data;
        printf("%d Berhasil di push ke dalam Stack", data);
        getch();
        system("cls");
        pilihanStack();
    }
}
void popStack() {
    if (stack.top == -1) {
        printf("Stack Kosong");
        getch();
        system("cls");
       pilihanStack();
    } else {
        printf("%d dihapus dari Stack", stack.data[stack.top]);
        stack.top--;
        getch();
        system("cls");
        pilihanStack();
    }
}
void printStack() {
    if (stack.top == -1) {
        printf("Stack Kosong");
        getch();
        system("cls");
       pilihanStack();
    } else {
        printf("Stack : ");
        for (int i = stack.top; i >= 0; i--) {
            printf("%d ", stack.data[i]);
        }
        printf("\n");
        getch();
        system("cls");
        pilihanStack();
    }
}
void deleteStack() {
    stack.top = -1;
    printf("Stack Dihapus");
    getch();
    system("cls");
    pilihanStack();
}

struct Queue {
    int front;
    int rear;
    char data[MAX][50];
}q;
void pilihanQueue(){

    printf("===========================\n");
    printf("          Queue \n");
    printf("===========================\n");
    printf("1.Enqueue Int\n");
    printf("2.Dequeue Int\n");
    printf("3.Print Queue\n");
    printf("4.Delete Queue\n");
    printf("5.Return Main Menu\n");
    printf("===========================\n");
    printf("Input Pilihan : ");
    scanf("%d", &menu);

    switch(menu){
    case 1:
        system("cls");
        enqueue();
        break;

    case 2:
        system("cls");
        dequeue();
        break;

    case 3:
        system("cls");
        printQueue();
        break;

    case 4:
        system("cls");
        deleteQueue();
        break;

    case 5:
        system("cls");
        main();
        break;

        default:
            fflush(stdin);
            printf("SALAH INPUT");
            getch();
            system("cls");
            pilihanQueue();
    }
}
void enqueue() {
    char temp[50];
    if(q.rear == MAX) {
        printf("Queue Penuh");
        getch();
        system("cls");
       pilihanQueue();
    }else{
        printf("Masukkan data : ");
        scanf("%s", temp);
        strcpy(q.data[q.rear], temp);
        q.rear++;
        printf("Data Berhasil Ditambahkan ke Dalam Queue");
        getch();
        system("cls");
        pilihanQueue();
    }
}
void dequeue() {
    if(q.front == q.rear){
        printf("Queue Kosong");
        getch();
        system("cls");
        pilihanQueue();
    }else{
        printf("Data %s Dihapus Dari Queue", q.data[q.front]);
        for(int i = q.front; i < q.rear - 1; i++){
            strcpy(q.data[i], q.data[i+1]);
        }
        q.rear--;
        getch();
        system("cls");
        pilihanQueue();
    }
}
void printQueue() {
    if(q.front == q.rear){
        printf("Queue Kosong");
        getch();
        system("cls");
        pilihanQueue();
    }else{
        printf("Data Dalam Queue : ");
        for(int i = q.front; i < q.rear; i++){
            printf("%s ", q.data[i]);
        }
        printf("\n");
        getch();
        system("cls");
        pilihanQueue();
    }
}
void deleteQueue(){
    q.front = 0;
    q.rear = 0;
    printf("Queue Dihapus");
    getch();
        system("cls");
        pilihanQueue();
}

void penjelasanStack(){

    printf("Stack adalah struktur data linear yang memungkinkan penyimpanan dan pengambilan data secara teratur.\n");
    printf("Stack mengikuti konsep Last-In-First-Out (LIFO),\n");
    printf("artinya elemen yang terakhir dimasukkan ke dalam stack akan menjadi elemen pertama yang diambil dari stack.\n");
    printf("Stack memiliki basic operation seperti :\n");
    printf("Push    : Menyisipkan elemen ke bagian atas stack\n");
    printf("Pop     : Menghapus elemen atas dari stack\n");
    printf("IsEmpty : Memeriksa apakah stack kosong berarti bernilai true\n");
    printf("IsFull  : Memeriksa apakah stack sudah penuh\n\n");
    printf("Tekan Tombol apapun untuk kembali\n");
    system("pause");
    system("cls");
    main();
}
void penjelasanQueue(){

    printf("Queue adalah struktur data linear yang memungkinkan penyimpanan dan pengambilan data secara terurut.\n");
    printf("Queue mengikuti konsep First-In-First-Out (FIFO),\n");
    printf("artinya elemen yang pertama dimasukkan ke dalam queue akan menjadi elemen pertama yang diambil dari queue.\n");
    printf("Operasi - operasi dasar pada Queue antara lain : \n\n");
    printf("Enqueue : Berfungsi untuk menambahkan elemen ke akhir antrian\n");
    printf("Dequeue : Berfungsi untuk menghapus elemen dari depan antrian\n");
    printf("IsEmpty : Memeriksa apakah antrian kosong\n");
    printf("IsFull  : Memeriksa apakah antrian penuh\n");
    printf("Tekan Tombol apapun untuk kembali\n");
    system("pause");
    system("cls");
    main();
}
