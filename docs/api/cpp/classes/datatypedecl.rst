DatatypeDecl
============

This class encapsulates a datatype declaration. A datatype declaration is
constructed via :cpp:func:`cvc5pp::Solver::mkDatatypeDecl()`. This is not a
:doc:`datatype itself <datatype>`, but the representation of the
specification for creating a datatype :cpp:class:`Sort <cvc5pp::Sort>` via
:cpp:func:`cvc5pp::Solver::mkDatatypeSort()` and
:cpp:func:`cvc5pp::Solver::mkDatatypeSorts()`.


----

- class :cpp:class:`cvc5pp::DatatypeDecl`
- :cpp:func:`std::ostream& cvc5pp::operator<< (std::ostream& out, const DatatypeDecl& decl)`

----

.. doxygenclass:: cvc5pp::DatatypeDecl
    :project: cvc5
    :members:
    :undoc-members:

----

.. doxygenfunction:: cvc5pp::operator<<(std::ostream& out, const DatatypeDecl& decl)
    :project: cvc5
