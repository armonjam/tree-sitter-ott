; TODO: use the content of the hom_name to get the language highlighting.
((hom_body) @injection.content (#set! injection.language "tex") (#set! injection.include_children) )
((hom_inner_block) @injection.content (#set! injection.language "ott") (#set! injection.include_children) )
