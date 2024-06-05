; TODO: the hom_name is not always the exact tree-sitter language that is desired. How can we fix this?
(homomorphism
  name: (hom_name) @injection.language
  body: (hom_body) @injection.content (#set! injection.include_children))
(homomorphism
  name: (hom_name) @_hom_name (#eq? @_hom_name "tex-preamble")
  body: (hom_body) @injection.content (#set! injection.language "tex") (#set! injection.include_children))
((hom_inner_block) @injection.content (#set! injection.language "ott") (#set! injection.include_children) )
