DatatypeConstructorDecl
=======================

This class encapsulates a datatype constructor declaration.
A :cpp:class:`DatatypeConstructorDecl <cvc5pp::DatatypeConstructorDecl>`
is constructed via :cpp:func:`cvc5pp::Solver::mkDatatypeConstructorDecl()`.
This is not yet a :doc:`datatype constructor itself <datatypeconstructor>`,
but the representation of the specification for creating a datatype constructor
of a datatype :cpp:class:`Sort <cvc5pp::Sort>` via
:cpp:func:`cvc5pp::Solver::mkDatatypeSort()` and
:cpp:func:`cvc5pp::Solver::mkDatatypeSorts()`.

----

- class :cpp:class:`cvc5pp::DatatypeConstructorDecl`
- :cpp:func:`std::ostream& cvc5pp::operator<< (std::ostream& out, const DatatypeConstructorDecl& decl)`
- :cpp:func:`std::ostream& cvc5pp::operator<< (std::ostream& out, const std::vector<DatatypeConstructorDecl>& vector)`

----

.. doxygenclass:: cvc5pp::DatatypeConstructorDecl
    :project: cvc5
    :members:
    :undoc-members:

----

.. doxygenfunction:: cvc5pp::operator<<(std::ostream& out, const DatatypeConstructorDecl& decl)
    :project: cvc5

.. doxygenfunction:: cvc5pp::operator<<(std::ostream& out, const std::vector<DatatypeConstructorDecl>& vector)
    :project: cvc5
