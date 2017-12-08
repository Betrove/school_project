#ifndef STADIUMREPOSITORY_H
#define STADIUMREPOSITORY_H

#include "Repositories/irepository.h"
#include "models/stadium.h"
#include "QSqlQuery"
#include "QVariant"
#include "QSqlRecord"

/*****************************************
 * StadiumRepository Class
 * ---------------------------------------
 * This class represents a repository for
 * the stadiums
 ****************************************/
class StadiumRepository:public IRepository<Stadium>
{
public:
    /**************************
     * Constructor/Destructor *
     **************************/
    StadiumRepository();
    /*************
     * Mutator
     ************/
    void update(Stadium object);
    void deleteObject(Stadium object);
    void create(Stadium object);
    /*******************
     *     Accessors   *
     ******************/
    Stadium retrieve(int id);
    std::vector<Stadium> getAll();
    std::vector<Stadium> getAllOrderedByGrass();
    std::vector<Stadium> getAllOrderedByLeague();
    std::vector<Stadium> getAllOrderedByOpeningDate();
};
/******************************
 ** CONSTRUCTOR              **
 ******************************/
/****************************************************************
* StadiumRepository();
*   Constructor; Initialize class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/***************
** Accessor  **
***************/
/*******************************************************************
* std::vector<Stadium> getAll()
*
*   Accessor; Returns a vector of all Stadium objects
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return:  vector of type Stadium
*******************************************************************/
/*******************************************************************
* std::vector<Stadium> getAllOrderedByGrass()
*
*   Accessor; Returns a vector of all Stadium objects by grass type
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return:  vector of type Stadium
*******************************************************************/
/*******************************************************************
* std::vector<Stadium> getAllOrderedByLeague()
*
*   Accessor; Returns a vector of all Stadium objects by league
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return:  vector of type Stadium
*******************************************************************/
/*******************************************************************
* std::vector<Stadium> getAllOrderedByOpeningDate()
*
*   Accessor; Returns a vector of all Stadium objects by opening
*             date
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return:  vector of type Stadium
*******************************************************************/

/*******************************************************************
*   Concession retrieve(int)
*
*   Accessor; Returns a single stadium
*------------------------------------------------------------------
*   Parameter: id(int) - id of a single item
*------------------------------------------------------------------
*   Return:  a single Stadium item
*******************************************************************/
/***************
** Mutators  **
***************/
/*******************************************************************
* void create(Stadium)
*
*   Mutator; Adds a new object to the repository
*------------------------------------------------------------------
*   Parameter: obj(Stadium) - Object to add
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void deleteObject(Stadium)
*
*   Mutator; Deletes a single stadium item
*------------------------------------------------------------------
*   Parameter: obj(Stadium) - Object to delete
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
#endif // STADIUMREPOSITORY_H
