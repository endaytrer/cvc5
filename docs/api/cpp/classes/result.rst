Result
======

This class represents a :cpp:class:`cvc5pp::Solver` result.

A :cpp:class:`cvc5pp::Result` encapsulates a 3-valued solver result (sat, unsat,
unknown). Explanations for unknown results are represented as enum class
:cpp:enum:`cvc5pp::UnknownExplanation` and can be queried via
:cpp:func:`cvc5pp::Result::getUnknownExplanation()`.

----

- class :cpp:class:`cvc5pp::Result`
- :cpp:func:`std::ostream& cvc5pp::operator<< (std::ostream& out, const Result& r)`

----

.. doxygenclass:: cvc5pp::Result
    :project: cvc5
    :members:
    :undoc-members:

----

.. doxygenfunction:: cvc5pp::operator<<(std::ostream& out, const Result& r)
    :project: cvc5

