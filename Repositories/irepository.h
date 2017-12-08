#ifndef IREPOSITORY_H
#define IREPOSITORY_H

#include "vector"

/*****************************************
 * IRepository Class
 * ---------------------------------------
 * This class represents a base repository
 * for all the repositories
 ****************************************/
template <class T>
class IRepository
{
  public:
    /**************************
     * Constructor/Destructor *
     **************************/
  IRepository() {}
  virtual ~IRepository(){}

  /*******************
   *     Accessors   *
   ******************/
   virtual T retrieve (int id) =0;
    virtual std::vector<T> getAll()=0;
  /*************
   * Mutator
   ************/
 virtual void create(T object) =0;
  virtual void update(T object) =0;
  virtual void deleteObject(T object)=0;


  protected:

  private:
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
*   Accessor; Returns a vector of all objects
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return:  vector of type T
*******************************************************************/
/*******************************************************************
*   Concession retrieve(int)
*
*   Accessor; Returns a single item
*------------------------------------------------------------------
*   Parameter: id(int) - id of a single item
*------------------------------------------------------------------
*   Return:  a single item
*******************************************************************/
/***************
** Mutators  **
***************/
/*******************************************************************
* void create(T)
*
*   Mutator; Adds a new object to the repository
*------------------------------------------------------------------
*   Parameter: obj(T) - Object to add
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void deleteObject(T)
*
*   Mutator; Deletes a single item
*------------------------------------------------------------------
*   Parameter: obj(Concession) - Object to delete
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
#endif // IREPOSITORY_H
