DatatypeConstructor
===================

This class represents a datatype constructor. Datatype constructors are
specified by a :cpp:class:`cvc5pp::DatatypeConstructorDecl` via
:cpp:func:`cvc5pp::TermManager::mkDatatypeConstructorDecl()` when constructing a
datatype sort and can be retrieved from a :cpp:class:`cvc5pp::Datatype` via
:cpp:func:`cvc5pp::Datatype::getConstructor()`.

----

- class :cpp:class:`cvc5pp::DatatypeConstructor`
- :cpp:func:`std::ostream& cvc5pp::operator<< (std::ostream& out, const DatatypeConstructor& cons)`

----

.. doxygenclass:: cvc5pp::DatatypeConstructor
    :project: cvc5
    :members:
    :undoc-members:

----

.. doxygenfunction:: cvc5pp::operator<<(std::ostream& out, const DatatypeConstructor& cons)
    :project: cvc5
