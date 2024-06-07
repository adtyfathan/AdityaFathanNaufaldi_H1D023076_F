#include <iostream>

#define MAXQUEUE 4

using namespace std;

typedef struct
{
    int count;
    int front;
    int rear;
    int item[MAXQUEUE];
} QUEUE;

QUEUE antrian;

void inisialisasi(QUEUE *Q)
{
    Q->count = 0;
    Q->front = 0;
    Q->rear = 0;
}

int isEmpty(QUEUE *Q)
{
    int hasil = 1;
    if (Q->count == 0)
    {
        hasil = 1;
    }
    return hasil;
}

int isFull(QUEUE *Q)
{
    int hasil = 0;
    if (Q->count == MAXQUEUE)
    {
        hasil = 1;
    }
    return hasil;
}

void insert(QUEUE *Q, int data)
{
    if (Q->count < MAXQUEUE)
    {
        Q->item[Q->rear] = data;
        Q->rear = (Q->rear + 1) % MAXQUEUE;
        Q->count++;
    }
    else
    {
        cout << "antrian penuh\n";
    }
}

void hapus(QUEUE *Q)
{
    if (Q->count > 0)
    {
        Q->front = (Q->front + 1) % MAXQUEUE;
        Q->count--;
    }
    else
    {
        cout << "antrian kosong\n";
    }
}

void print(QUEUE *Q)
{
    for (int i = 0; i < Q->count; i++)
    {
        cout << Q->item[(Q->front + i) % MAXQUEUE] << " ";
    }
}

int main()
{
    inisialisasi(&antrian);
    insert(&antrian, 108);
    insert(&antrian, 109);
    insert(&antrian, 110);
    insert(&antrian, 111);
    hapus(&antrian);
    insert(&antrian, 112);
    print(&antrian);

    return 0;
}