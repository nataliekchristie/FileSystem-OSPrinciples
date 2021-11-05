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
int fs_delete(char *filename)
{
    // search entry list for file

    // find blocks it is using/number of blocks, set to 0

    // nullify entry in list

    return 0;
}

/******************************************************************************
 * -----creates a new directory-----
 * 
 *****************************************************************************/
int fs_mkdir(const char *pathname, mode_t mode)
{
    // parse path in some way, find parent path

    // find free block space that will cover the amount needed in bitmap

    // error code if not enough memory?

    // write to memory

    // update bitmap to signify used space

    // assign all necessary values to the entry
    return 0;
}

/******************************************************************************
 * -----remove a directory-----
 * 
 *****************************************************************************/
int fs_rmdir(const char *pathname)
{
    // parse pathname

    // find directory of the pathname in our list of entries

    // mark bitmap space to 0 to signify space is free

    // find entry, nullify
    return 0;
}

/******************************************************************************
 * 
 * 
 *****************************************************************************/
char *fs_getcwd(char *buf, size_t size)
{
    // set some sort of variable for cwd?

    // copy cwd path to buf?

    // return buf

    return 0;
}

/******************************************************************************
 * 
 * 
 *****************************************************************************/
int fs_setcwd(char *buf)
{
    // parse file path

    // search for directory based on path

    // set cwd variable to path ?

    return 0;
}