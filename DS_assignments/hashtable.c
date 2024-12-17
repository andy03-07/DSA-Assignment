#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10 

typedef struct Node {
    int key;
    int value;
    struct Node* next;
} Node;

typedef struct HashTableChaining {
    Node* buckets[TABLE_SIZE];
} HashTableChaining;

typedef struct HashTableOpenAddressing {
    int keys[TABLE_SIZE];
    int values[TABLE_SIZE];
    int is_occupied[TABLE_SIZE];
} HashTableOpenAddressing;

int hash(int key) {
    return key % TABLE_SIZE;
}

HashTableChaining* createHashTableChaining() {
    HashTableChaining* table = (HashTableChaining*)malloc(sizeof(HashTableChaining));
    for (int i = 0; i < TABLE_SIZE; i++) {
        table->buckets[i] = NULL;
    }
    return table;
}

HashTableOpenAddressing* createHashTableOpenAddressing() {
    HashTableOpenAddressing* table = (HashTableOpenAddressing*)malloc(sizeof(HashTableOpenAddressing));
    for (int i = 0; i < TABLE_SIZE; i++) {
        table->is_occupied[i] = 0;  
    }
    return table;
}

void insertChaining(HashTableChaining* table, int key, int value) {
    int index = hash(key);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = table->buckets[index];
    table->buckets[index] = newNode;
}

int searchChaining(HashTableChaining* table, int key) {
    int index = hash(key);
    Node* current = table->buckets[index];
    while (current) {
        if (current->key == key) {
            return current->value;
        }
        current = current->next;
    }
    return -1;  
}

void insertOpenAddressing(HashTableOpenAddressing* table, int key, int value) {
    int index = hash(key);
    while (table->is_occupied[index]) {
        index = (index + 1) % TABLE_SIZE;  
    }
    table->keys[index] = key;
    table->values[index] = value;
    table->is_occupied[index] = 1;
}

int searchOpenAddressing(HashTableOpenAddressing* table, int key) {
    int index = hash(key);
    int start = index;
    while (table->is_occupied[index]) {
        if (table->keys[index] == key) {
            return table->values[index];
        }
        index = (index + 1) % TABLE_SIZE;
        if (index == start) break; 
    } 
    return -1;
}

void printHashTableChaining(HashTableChaining* table) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("Bucket %d: ", i);
        Node* current = table->buckets[i];
        while (current) {
            printf("(%d, %d) -> ", current->key, current->value);
            current = current->next;
        }
        printf("NULL\n");
    }
}

void printHashTableOpenAddressing(HashTableOpenAddressing* table) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (table->is_occupied[i]) {
            printf("Index %d: (%d, %d)\n", i, table->keys[i], table->values[i]);
        } else {
            printf("Index %d: Empty\n", i);
        }
    }
}

int main() {
    HashTableChaining* tableChaining = createHashTableChaining();
    insertChaining(tableChaining, 5, 10);
    insertChaining(tableChaining, 15, 20);
    insertChaining(tableChaining, 25, 30);
    printf("Chaining Hash Table:\n");
    printHashTableChaining(tableChaining);
    printf("Search for key 15 in chaining: %d\n\n", searchChaining(tableChaining, 15));

    HashTableOpenAddressing* tableOpenAddressing = createHashTableOpenAddressing();
    insertOpenAddressing(tableOpenAddressing, 5, 10);
    insertOpenAddressing(tableOpenAddressing, 15, 20);
    insertOpenAddressing(tableOpenAddressing, 25, 30);
    printf("Open Addressing Hash Table:\n");
    printHashTableOpenAddressing(tableOpenAddressing);
    printf("Search for key 15 in open addressing: %d\n", searchOpenAddressing(tableOpenAddressing, 15));

    return 0;
}
