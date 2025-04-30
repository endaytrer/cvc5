Grammar
=======

This class encapsulates a SyGuS grammar. It is created via
:cpp:func:`cvc5pp::Solver::mkGrammar()` and allows to define a context-free
grammar of terms, according to the definition of grammars in the SyGuS IF 2.1
standard.

----

- class :cpp:class:`cvc5pp::Grammar`
- :cpp:func:`std::ostream& cvc5pp::operator<< (std::ostream& out, const Grammar& g)`

----

.. doxygenclass:: cvc5pp::Grammar
    :project: cvc5
    :members:
    :undoc-members:

----

.. doxygenfunction:: cvc5pp::operator<<(std::ostream& out, const Grammar& g)
    :project: cvc5
