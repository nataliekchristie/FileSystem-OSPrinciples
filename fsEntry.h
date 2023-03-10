/**************************************************************
* Class:  CSC-415-03 + CSC-415-02 Fall 2021
* Names: Natalie Christie , Joseph Kois , Jade Simien , Eugene San Juan
* Student IDs: 918376646 , 920921089 , 920258687 , 918354065
* GitHub Name: nataliekchristie , josephkois , JadeS01 , esanjuan915
* Group Name: Arrays of Dread
* Project: Basic File System
*
* File: fsEntry.h
*
* Description: Represents entries whether they be files
* or directories. Holds a struct of entries
**************************************************************/

#include <stdlib.h>
#include <unistd.h>

#define DIRENTRIES 50

typedef struct
{
    int blockLocation;
    char name[50];
    int type; // 0 = undefined, 1 = directory, 2 = file
    int size;
    // added :
    int blockCount; // counts number of logical blocks used
    int parent;     // need some way of tracking parent location
    int parentCount; // block count of parent
    int childrenAmount;
} entryStruct, *entryStruct_p;