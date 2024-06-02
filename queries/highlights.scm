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
] @keyword

(defnclass
  class_name: (string) @function)
(defn
  (id) @function.method)

(rule_separator
  rule_name: (string) @property)

(production
  (string) @property)


(comment) @comment
(namespace_prefix) @string

(homomorphism
  open: "{{" @punctuation.bracket
  name: (hom_name) @keyword
  close: "}}" @punctuation.bracket)

[
 (dash_line)
 (dots)
  "|"
  "::"
  "::="
  ","
] @punctuation.delimiter

[
  "</"
  "//"
  "/>"
] @punctuation.special
