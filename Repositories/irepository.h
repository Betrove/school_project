#ifndef IREPOSITORY_H
#define IREPOSITORY_H

#include "vector"

template <class T>
class IRepository
{
  public:

  IRepository() {}
  virtual ~IRepository(){}

  virtual void create(T object) =0;
  virtual T retrieve (int id) =0;
  virtual void update(T object) =0;
  virtual void deleteObject(T object)=0;
  virtual std::vector<T> getAll()=0;

  protected:

  private:
};

#endif // IREPOSITORY_H
