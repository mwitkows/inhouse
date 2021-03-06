#ifndef PAIR_H_
#define PAIR_H_

namespace inhouse
{
	template <class K, class V>
	struct Pair
	{
		public:
			Pair();
			Pair(K& key);
			Pair(K& key, V& value);
			~Pair();

			K& getKey();
			V& getValue();
			bool containsKey(K& key);
			bool operator==(Pair& pair);

		private:
			K _key;
			V _value;
	};
	
	template <class K, class V>
	Pair<K,V>::Pair()
	{
	}
	
	template <class K, class V>
	Pair<K,V>::Pair(K& key)
	{
		_key = key;
	}

	template <class K, class V>
	Pair<K,V>::Pair(K& key, V& value)
	{
		_key = key;
		_value = value;
	}

	template <class K, class V>
	Pair<K,V>::~Pair()
	{
	}
	
	template <class K, class V>
	K& Pair<K,V>::getKey()
	{
		return _key;
	}
	
	template <class K, class V>
	V& Pair<K,V>::getValue()
	{
		return _value;
	}
	
	template <class K, class V>
	bool Pair<K,V>::containsKey(K& key)
	{
		return _key == key;
	}
	
	template <class K, class V>
	bool Pair<K,V>::operator==(Pair& pair)
	{
		if(_key != pair._key)
		{
			return false;
		}
		else if(_value != pair._value)
		{
			return false;
		}

		return true;
	}
}
#endif
