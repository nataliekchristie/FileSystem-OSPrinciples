/**************************************************************
* Class:  CSC-415-0# Fall 2021
* Names: 
* Student IDs:
* GitHub Name:
* Group Name:
* Project: Basic File System
*
* File: fsDirectoryEntryOps.h
*
* Description: Represents entries whether they be files
or directories.
**************************************************************/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>

#include "mfs.h"

/******************************************************************************
 * -----removes a file-----
 * 
 *****************************************************************************/
int fs_delete(char *filename) {
    return 0;
}

/******************************************************************************
 * -----creates a new directory-----
 * 
 *****************************************************************************/
int fs_mkdir(const char *pathname, mode_t mode) {
    return 0;
}

/******************************************************************************
 * -----remove a directory-----
 * 
 *****************************************************************************/
int fs_rmdir(const char *pathname) {
    return 0;
}

/******************************************************************************
 * 
 * 
 *****************************************************************************/
char *fs_getcwd(char *buf, size_t size){
    return 0;
}

/******************************************************************************
 * 
 * 
 *****************************************************************************/
int fs_setcwd(char *buf) {
    return 0;
}