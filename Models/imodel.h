#ifndef IMODEL_H
#define IMODEL_H

/*****************************************
 * IModel Class
 * ---------------------------------------
 * This class represents a simple model
 * with an ID.
 ****************************************/
class IModel
{

public :
    /**************************
     * Constructor/Destructor *
     **************************/
  IModel() {}
  /*************
   * Mutator
   ************/
  void setId(int id);
  /*******************
   *     Accessors   *
   ******************/
  int getId();

private:
  int id;   //ID of the model
};
/******************************
 **         CONSTRUCTOR      **
 ******************************/
/****************************************************************
* IModel();
*   Constructor; Initialize class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/***************
** Mutators  **
***************/
/*******************************************************************
* void setID(int)
*
*   Mutator; Sets the ID of the model
*------------------------------------------------------------------
*   Parameter: id(int)
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/***************
** Accessor  **
***************/
/*******************************************************************
* int getID()
*
*   Accessor; Returns the ID of the model
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return: id of the model
*******************************************************************/
#endif // IMODEL_H
