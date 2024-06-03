(element) @variable
(defnclass_name) @function
(defn_name) @function.method
(rule_name) @property
(namespace_prefix) @string
(hom_name) @keyword
(comment) @comment
(production_name) @property
(production_mod) @type

[
 (dash_line)
 (dots)
  "|"
  "::"
  "::="
  ","
] @punctuation.delimiter

[
 "{{"
 "}}"
] @punctuation.bracket

[
  "</"
  "//"
  "/>"
] @punctuation.special

[
  "metavar"
  "indexvar"
  "grammar"
  "defns"
  "defn"
  "by"
  "embed"
] @keyword
