SortKind
========

Every :cpp:class:`Sort <cvc5pp::Sort>` has an associated kind, represented
as enum class :cpp:enum:`cvc5pp::SortKind`.

----

- enum class :cpp:enum:`cvc5pp::SortKind`
- :cpp:func:`std::ostream& cvc5pp::operator<< (std::ostream& out, SortKind kind)`
- :cpp:func:`std::string std::to_string(cvc5pp::SortKind kind)`
- :cpp:struct:`std::hash\<cvc5pp::SortKind>`

----

.. doxygenenum:: cvc5pp::SortKind
    :project: cvc5

----

.. doxygenfunction:: cvc5pp::operator<<(std::ostream& out, SortKind kind)
    :project: cvc5

.. doxygenfunction:: std::to_string(cvc5pp::SortKind kind)
    :project: cvc5

----

.. doxygenstruct:: std::hash< cvc5pp::SortKind >
    :project: std
    :members:
    :undoc-members:

