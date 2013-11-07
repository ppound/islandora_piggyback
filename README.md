islandora_piggyback
================

This is an extentsion of the Islandora Pig Latin module.
If this module is enabled it will
modify the output of the pig latin module in several ways.
* it will reverse the order of the transformed string and output it on the
same tab as the pig latin module
* it will add a PiggyBack View tab and output the orginal string of text
ingested by the pig latin module with all the a's replaced with eh.
* it will modify the datastreams output of the manage tab in several useless ways
* also the islandora porcus admin form will be altered and a new submit handler will
be added to the form.
* if the piggyback module is enabled it will also add a datastream and a
relationship to an object when ingested using the porcus module.

We have also added a islandora_solr primary display to this module by implementing
the required hooks.  All it does is reverse the text of the labels.

This module is designed to be deliberately trivial and useless.
It exists only as demo to illustrate how Islandora ingests and displays
digital assets and how modules can be used to alter output.

