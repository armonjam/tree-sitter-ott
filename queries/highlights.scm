; Identifiers
;------------

[
  "metavar"
  "indexvar"
  "grammar"
  "defns"
  "defn"
  "by"
] @keyword

(comment) @comment

(homomorphism
  open: "{{" @punctuation.bracket
  name: (hom_name) @keyword
  close: "}}" @punctuation.bracket)

[
  "|"
  "::"
  "::="
] @punctuation.delimiter
