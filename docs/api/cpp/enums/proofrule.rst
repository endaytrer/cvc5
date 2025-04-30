ProofRule and ProofRewriteRule
==============================

Enum class :cpp:enum:`ProofRule <cvc5pp::ProofRule>` captures the reasoning steps
performed by the SAT solver, the theory solvers and the preprocessor. It
represents the inference rules used to derive conclusions within a proof.

Enum class :cpp:enum:`ProofRewriteRule <cvc5pp::ProofRewriteRule>` pertains to
rewrites performed on terms. These identifiers are arguments of the proof rules
:cpp:enumerator:`THEORY_REWRITE <cvc5pp::ProofRule::THEORY_REWRITE>` and
:cpp:enumerator:`DSL_REWRITE <cvc5pp::ProofRule::DSL_REWRITE>`.

----

- enum class :cpp:enum:`cvc5pp::ProofRule`
- :cpp:func:`std::ostream& cvc5pp::operator<< (std::ostream& out, ProofRule pc)`
- :cpp:func:`std::string std::to_string(cvc5pp::ProofRule rule)`
- :cpp:struct:`std::hash\<cvc5pp::ProofRule>`

- enum class :cpp:enum:`cvc5pp::ProofRewriteRule`
- :cpp:func:`std::ostream& cvc5pp::operator<< (std::ostream& out, ProofRewriteRule pc)`
- :cpp:func:`std::string std::to_string(cvc5pp::ProofRewriteRule rule)`
- :cpp:struct:`std::hash\<cvc5pp::ProofRewriteRule>`

----

.. doxygenenum:: cvc5pp::ProofRule
    :project: cvc5

.. doxygenfunction:: cvc5pp::operator<<(std::ostream& out, ProofRule pc)
    :project: cvc5

.. doxygenfunction:: std::to_string(cvc5pp::ProofRule rule)
    :project: cvc5

.. doxygenstruct:: std::hash< cvc5pp::ProofRule >
    :project: std
    :members:
    :undoc-members:

----

.. doxygenenum:: cvc5pp::ProofRewriteRule
    :project: cvc5

.. doxygenfunction:: cvc5pp::operator<<(std::ostream& out, ProofRewriteRule pc)
    :project: cvc5

.. doxygenfunction:: std::to_string(cvc5pp::ProofRewriteRule rule)
    :project: cvc5

.. doxygenstruct:: std::hash< cvc5pp::ProofRewriteRule >
    :project: std
    :members:
    :undoc-members:
