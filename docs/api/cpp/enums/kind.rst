Kind
====

Every :cpp:class:`Term <cvc5pp::Term>` has an associated kind, represented
as enum class :cpp:enum:`cvc5pp::Kind`.
This kind distinguishes if the Term is a value, constant, variable or operator,
and what kind of each.
For example, a bit-vector value has kind
:cpp:enumerator:`CONST_BITVECTOR <cvc5pp::Kind::CONST_BITVECTOR>`,
a free constant symbol has kind
:cpp:enumerator:`CONSTANT <cvc5pp::Kind::CONSTANT>`,
an equality over terms of any sort has kind
:cpp:enumerator:`EQUAL <cvc5pp::Kind::EQUAL>`, and a universally
quantified formula has kind :cpp:enumerator:`FORALL <cvc5pp::Kind::FORALL>`.

----

- enum class :cpp:enum:`cvc5pp::Kind`
- :cpp:func:`std::ostream& cvc5pp::operator<< (std::ostream& out, Kind kind)`
- :cpp:func:`std::string std::to_string(cvc5pp::Kind kind)`
- :cpp:struct:`std::hash\<cvc5pp::Kind>`

----

.. doxygenenum:: cvc5pp::Kind
    :project: cvc5

----

.. doxygenfunction:: cvc5pp::operator<<(std::ostream& out, Kind kind)
    :project: cvc5

.. doxygenfunction:: std::to_string(cvc5pp::Kind kind)
    :project: cvc5

----

.. doxygenstruct:: std::hash< cvc5pp::Kind >
    :project: std
    :members:
    :undoc-members:
