Datatype
========

This class represents a datatype. A :cpp:class:`cvc5pp::Datatype` is encapsulated
by a datatype :cpp:class:`Sort <cvc5pp::Sort>` and can be retrieved from a
datatype sort via :cpp:func:`cvc5pp::Sort::getDatatype()`.
Datatypes are specified by a :cpp:class:`cvc5pp::DatatypeDecl` via
:cpp:func:`cvc5pp::TermManager::mkDatatypeDecl()` when constructing a datatype
sort.

----

- class :cpp:class:`cvc5pp::Datatype`
- :cpp:func:`std::ostream& cvc5pp::operator<< (std::ostream& out, const Datatype& dt)`

----

.. doxygenclass:: cvc5pp::Datatype
    :project: cvc5
    :members:
    :undoc-members:

----

.. doxygenfunction:: cvc5pp::operator<<(std::ostream& out, const Datatype& dt)
    :project: cvc5
