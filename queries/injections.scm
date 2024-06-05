; Return to ott highlighting when inside a homomorphism's inner string `[[ ... ]]`
((hom_inner_block) @injection.content (#set! injection.language "ott") (#set! injection.include_children) )

; Supported homomorphism highlighting:

; LaTeX
(homomorphism
  name: (hom_name) @_hom_name (#match? @_hom_name "tex(-preamble)?")
  ; TODO: in helix, `tex` must be replaced with `latex`. Any way to automate this?
  body: (hom_body) @injection.content (#set! injection.language "tex") (#set! injection.include_children))
