Solver
======

This class represents a cvc5 solver instance.

:cpp:class:`Terms <cvc5pp::Term>`, :cpp:class:`Sorts <cvc5pp::Sort>` and
:cpp:class:`Ops <cvc5pp::Op>` are not tied to a :cpp:class:`cvc5pp::Solver`
but associated with a :cpp:class:`cvc5pp::TermManager` instance, which can be
shared between solver instances.

Solver options are configured via :cpp:func:`cvc5pp::Solver::setOption()`
and queried via :cpp:func:`cvc5pp::Solver::getOption()`
(for more information on configuration options, see :doc:`../../../options`).
Information about a specific option can be retrieved via
:cpp:func:`cvc5pp::getOptionInfo()` (see :doc:`optioninfo`).

----

.. doxygenclass:: cvc5pp::Solver
    :project: cvc5
    :members:
    :undoc-members:
