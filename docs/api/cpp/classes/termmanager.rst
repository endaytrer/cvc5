TermManager
===========

This class represents a cvc5 term manager instance.

:cpp:class:`Terms <cvc5pp::Term>`, :cpp:class:`Sorts <cvc5pp::Sort>` and
:cpp:class:`Ops <cvc5pp::Op>` are not tied to a :cpp:class:`cvc5pp::Solver`
but associated with a :cpp:class:`cvc5pp::TermManager` instance, which can be
shared between solver instances (and thus allows sharing of terms and sorts
between solver instances).
Term kinds are defined via enum class :doc:`cvc5pp::Kind <../enums/kind>`, and
sort kinds via enum class :doc:`cvc5pp::SortKind <../enums/sortkind>`.

----

.. doxygenclass:: cvc5pp::TermManager
    :project: cvc5
    :members:
    :undoc-members:

