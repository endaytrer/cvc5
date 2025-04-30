Sort
====

The :cpp:class:`Sort <cvc5pp::Sort>` class represents the sort of a
:cpp:class:`Term <cvc5pp::Term>`.
Its kind is represented as enum class :cpp:enum:`cvc5pp::SortKind`.

A :cpp:class:`Sort <cvc5pp::Sort>` can be hashed (using
:cpp:class:`std::hash\<cvc5pp::Sort>`) and serialized to an output stream
(using function
:cpp:func:`std::ostream& cvc5pp::operator<< (std::ostream& out, const Sort& s)`).

Class :cpp:class:`cvc5pp::Sort` only provides the default constructor
to create a null Sort. Class :cpp:class:`TermManager <cvc5pp::TermManager>`
provides factory functions for all other sorts, e.g.,
:cpp:func:`cvc5pp::TermManager::getBooleanSort()` for the Boolean sort and
:cpp:func:`cvc5pp::TermManager::mkBitVectorSort()` for bit-vector
sorts.

Sorts are defined as standardized in the SMT-LIB standard for standardized
theories. Additionally, we introduce the following sorts for non-standardized
theories:

- *Bag* (:doc:`Theory of Bags <../../../theories/bags>`)

  - Created with :cpp:func:`cvc5pp::TermManager::mkBagSort()`

- *Set* (:doc:`Theory of Sets and Relations <../../../theories/sets-and-relations>`)

  - Created with :cpp:func:`cvc5pp::TermManager::mkSetSort()`

- *Relation* (:doc:`Theory of Sets and Relations <../../../theories/sets-and-relations>`)

  - Created with :cpp:func:`cvc5pp::TermManager::mkSetSort()` as a set of tuple
    sorts

- *Table*

  - Created with :cpp:func:`cvc5pp::TermManager::mkBagSort()` as a bag of tuple
    sorts

----

- class :cpp:class:`cvc5pp::Sort`
- :cpp:func:`std::ostream& cvc5pp::operator<< (std::ostream& out, const Sort& s)`
- :cpp:struct:`std::hash\<cvc5pp::Sort>`

----

.. doxygenclass:: cvc5pp::Sort
    :project: cvc5
    :members:
    :undoc-members:

----

.. doxygenfunction:: cvc5pp::operator<<(std::ostream& out, const Sort& s)
    :project: cvc5

----


.. doxygenstruct:: std::hash< cvc5pp::Sort >
    :project: std
    :members:
    :undoc-members:

