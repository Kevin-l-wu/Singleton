#ifndef _SINGLETON_H_
#define _SINGLETON_H_

template <typename T>
class Singleton
{
	static T* mInstance;
public:	
	static T* GetInstance();
};

template <typename T>
T* Singleton<T>::mInstance = NULL;

template <typename T>
T* Singleton<T>::GetInstance()
{
	if(mInstance == NULL)
	{
		mInstance = new T();
	}
	
	return mInstance;
}

#endif