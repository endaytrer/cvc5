Proof
=====

This class encapsulates a cvc5 proof object, which can be retrieved via
function :cpp:func:`cvc5pp::Solver::getProof()` after a
:cpp:func:`cvc5pp::Solver::checkSat()` query returns an `unsat` result.

----

- class :cpp:class:`cvc5pp::Proof`
- :cpp:func:`cvc5pp::Solver::proofToString()`
- :cpp:struct:`std::hash\<cvc5pp::Term>`

----

.. doxygenclass:: cvc5pp::Proof
    :project: cvc5
    :members:
    :undoc-members:

----

.. doxygenstruct:: std::hash< cvc5pp::Proof >
    :project: std
    :members:
    :undoc-members:
