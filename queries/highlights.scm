; Identifiers
;------------

(element) @variable

[
  "metavar"
  "indexvar"
  "grammar"
  "defns"
  "defn"
  "by"
  "embed"
] @keyword

(defnclass_name) @function
(defn_name) @function.method
(namespace_prefix) @string
(hom_name) @keyword
(comment) @comment

(rule_separator
  rule_name: (string) @property)

(production
  modifier: (id)* @type
  production_name: (string) @property)

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
