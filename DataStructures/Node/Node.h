#ifndef NODE_H_
	#define NODE_H_

	namespace inhouse
	{
		template <class T>
		class Node
		{
			private:
				T _element;
				Node<T>* _nextNode;
				Node<T>* _previousNode;

			public:
				Node();
				Node(T& element);
				Node(const T& element);
				virtual ~Node();

				T& getElement();
				Node<T>* getNextNode();
				Node<T>* getPreviousNode();
				void setElement(const T& element);
				void setNextNode(Node<T>* nextNode);
				void setPreviousNode(Node<T>* previousNode);
		};

		template <class T>
		Node<T>::Node()
		{
			_nextNode = nullptr;
			_previousNode = nullptr;
		}
	
		template <class T>
		Node<T>::Node(T& element)
		{
			_element = element;
			_nextNode = nullptr;
			_previousNode = nullptr;
		}
		
		template <class T>
		Node<T>::Node(const T& element)
		{
			_element = element;
			_nextNode = nullptr;
			_previousNode = nullptr;
		}

		template <class T>
		Node<T>::~Node()
		{
		}

		template <class T>
		T& Node<T>::getElement()
		{
			return _element;
		}

		template <class T>
		Node<T>* Node<T>::getNextNode()
		{
			return _nextNode;
		}

		template <class T>
		Node<T>* Node<T>::getPreviousNode()
		{
			return _previousNode;
		}
	
		template <class T>
		void Node<T>::setElement(const T& element)
		{
			_element = element;
		}

		template <class T>
		void Node<T>::setNextNode(Node<T>* nextNode)
		{
			_nextNode = nextNode;
		}
	
		template <class T>
		void Node<T>::setPreviousNode(Node<T>* previousNode)
		{
			_previousNode = previousNode;
		}
	}
#endif
