#include <iterator>

template <typename Container>
class asso_insert_iterator : public std::iterator<std::output_iterator_tag,
                                                  typename Container::value_type>
{
  protected:
    Container& container;

  public:
    explicit asso_insert_iterator(Container &c) : container(c) {}

    asso_insert_iterator<Container>& operator=(const typename Container::value_type& value) {
        container.insert(value);
        return *this;
    }
    
    asso_insert_iterator<Container>& operator*() {
        return *this;
    }

    asso_insert_iterator<Container>& operator++() {
        return *this;
    }

    asso_insert_iterator<Container>& operator++(int) {
        return *this;
    }
};                             

template <typename Container>
inline asso_insert_iterator<Container> asso_inserter(Container &c) {
    return asso_insert_iterator<Container>(c);
}

