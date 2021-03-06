#ifndef CONCESSIONREPOSITORY_H
#define CONCESSIONREPOSITORY_H

#include "Repositories/irepository.h"
#include "Models/concession.h"
#include <vector>
#include <QSqlQuery>
#include <QVariant>
#include <QSqlRecord>
/*****************************************
 * ConcessionRepository Class
 * ---------------------------------------
 * This class represents a repository for
 * the concession stand
 ****************************************/
class ConcessionRepository:public IRepository<Concession>
{
public:
    /**************************
     * Constructor/Destructor *
     **************************/
    ConcessionRepository();
    /*************
     * Mutator
     ************/
    void create(Concession obj);
    Concession retrieve(int id);
    void update(Concession obj);
    void deleteObject(Concession obj);
    /*******************
     *     Accessors   *
     ******************/
    std::vector<Concession> getAll();

};
/******************************
 ** CONSTRUCTOR              **
 ******************************/
/****************************************************************
* ConcessionRepository();
*   Constructor; Initialize class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/***************
** Accessor  **
***************/
/*******************************************************************
* std::vector<Concession> getAll()
*
*   Accessor; Returns a vector of all Concession objects
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return:  vector of type Concession
*******************************************************************/
/*******************************************************************
*   Concession retrieve(int)
*
*   Accessor; Returns a single concession item
*------------------------------------------------------------------
*   Parameter: id(int) - id of a single item
*------------------------------------------------------------------
*   Return:  a single Concession item
*******************************************************************/
/***************
** Mutators  **
***************/
/*******************************************************************
* void create(Concession)
*
*   Mutator; Adds a new object to the repository
*------------------------------------------------------------------
*   Parameter: obj(Concession) - Object to add
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void deleteObject(Concession)
*
*   Mutator; Deletes a single concession item
*------------------------------------------------------------------
*   Parameter: obj(Concession) - Object to delete
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
#endif // CONCESSIONREPOSITORY_H
