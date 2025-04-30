DatatypeSelector
================

This class represents a datatype selector. Datatype selectors are
specified via :cpp:func:`cvc5pp::DatatypeConstructorDecl::addSelector()`,
:cpp:func:`cvc5pp::DatatypeConstructorDecl::addSelectorSelf()`
and :cpp:func:`cvc5pp::DatatypeConstructorDecl::addSelectorUnresolved()`
when constructing a datatype sort and can be retrieved from a
:cpp:class:`cvc5pp::DatatypeConstructor` via
:cpp:func:`cvc5pp::DatatypeConstructor::getSelector()`.

----

- class :cpp:class:`cvc5pp::DatatypeSelector`
- :cpp:func:`std::ostream& cvc5pp::operator<< (std::ostream& out, const DatatypeSelector& sel)`

----

.. doxygenclass:: cvc5pp::DatatypeSelector
    :project: cvc5
    :members:
    :undoc-members:

----

.. doxygenfunction:: cvc5pp::operator<<(std::ostream& out, const DatatypeSelector& sel)
    :project: cvc5
