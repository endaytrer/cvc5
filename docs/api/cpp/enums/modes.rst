Modes
======

Some API functions require a configuration mode argument, e.g.,
:cpp:func:`cvc5pp::Solver::blockModel()`.
The following enum classes define such configuration modes.

----

- enum class :cpp:enum:`cvc5pp::modes::BlockModelsMode`
- :cpp:func:`std::ostream& cvc5pp::modes::operator<< (std::ostream& out, BlockModelsMode mode)`
- :cpp:func:`std::string std::to_string(cvc5pp::modes::BlockModelsMode mode)`

- enum class :cpp:enum:`cvc5pp::modes::LearnedLitType`
- :cpp:func:`std::ostream& cvc5pp::modes::operator<< (std::ostream& out, LearnedLitType type)`
- :cpp:func:`std::string std::to_string(cvc5pp::modes::LearnedLitType type)`

- enum class :cpp:enum:`cvc5pp::modes::ProofComponent`
- :cpp:func:`std::ostream& cvc5pp::modes::operator<< (std::ostream& out, ProofComponent pc)`
- :cpp:func:`std::string std::to_string(cvc5pp::modes::ProofComponent component)`

- enum class :cpp:enum:`cvc5pp::modes::ProofFormat`
- :cpp:func:`std::ostream& cvc5pp::modes::operator<< (std::ostream& out, ProofFormat pc)`
- :cpp:func:`std::string std::to_string(cvc5pp::modes::ProofFormat format)`

- enum class :cpp:enum:`cvc5pp::modes::FindSynthTarget`
- :cpp:func:`std::ostream& cvc5pp::modes::operator<< (std::ostream& out, FindSynthTarget target)`
- :cpp:func:`std::string std::to_string(cvc5pp::modes::FindSynthTarget target)`

----

.. doxygenenum:: cvc5pp::modes::BlockModelsMode
    :project: cvc5

.. doxygenfunction:: cvc5pp::modes::operator<<(std::ostream& out, BlockModelsMode mode)
    :project: cvc5

.. doxygenfunction:: std::to_string(cvc5pp::modes::BlockModelsMode mode)
    :project: cvc5

----

.. doxygenenum:: cvc5pp::modes::LearnedLitType
    :project: cvc5

.. doxygenfunction:: cvc5pp::modes::operator<<(std::ostream& out, LearnedLitType type)
    :project: cvc5

.. doxygenfunction:: std::to_string(cvc5pp::modes::LearnedLitType type)
    :project: cvc5

----

.. doxygenenum:: cvc5pp::modes::ProofComponent
    :project: cvc5

.. doxygenfunction:: cvc5pp::modes::operator<<(std::ostream& out, ProofComponent pc)
    :project: cvc5

.. doxygenfunction:: std::to_string(cvc5pp::modes::ProofComponent component)
    :project: cvc5

----

.. doxygenenum:: cvc5pp::modes::ProofFormat
    :project: cvc5

.. doxygenfunction:: cvc5pp::modes::operator<<(std::ostream& out, ProofFormat pc)
    :project: cvc5

.. doxygenfunction:: std::to_string(cvc5pp::modes::ProofFormat format)
    :project: cvc5

----

.. doxygenenum:: cvc5pp::modes::FindSynthTarget
    :project: cvc5

.. doxygenfunction:: cvc5pp::modes::operator<<(std::ostream& out, FindSynthTarget target)
    :project: cvc5

.. doxygenfunction:: std::to_string(cvc5pp::modes::FindSynthTarget target)
    :project: cvc5
