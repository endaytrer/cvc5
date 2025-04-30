OptionInfo
==========

This class encapsulates all the information associated with a configuration
option. It can be retrieved via :cpp:func:`cvc5pp::Solver::getOptionInfo()`
and allows to query any configuration information associated with an option.

----

- class :cpp:class:`cvc5pp::OptionInfo`
- :cpp:func:`std::ostream& cvc5pp::operator<< (std::ostream& out, const OptionInfo& info)`

----

.. doxygenstruct:: cvc5pp::OptionInfo
    :project: cvc5
    :members:

----

.. doxygenfunction:: cvc5pp::operator<<(std::ostream& out, const OptionInfo& info)
    :project: cvc5
