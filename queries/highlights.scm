[
  ; "BVI"
  ; "C"
  ; "CF"
  ; "E"
  ; "SB"
  ; "SBR"
  "action"
  "actionvalue"
  ; "ancestor"
  "begin"
  "clocked_by"
  "default"
  ; "default_clock"
  ; "default_reset"
  ; "dependencies"
  "deriving"
  ; "determines"
  ; "e"
  ; "enable"
  "end"
  "enum"
  "export"
  ; "ifc_inout"
  "import"
  ; "inout"
  ; "input_clock"
  ; "input_reset"
  ; "instance"
  "interface"
  "let"
  ; "match"
  "matches"
  "method"
  "module"
  "numeric"
  ; "output_clock"
  ; "output_reset"
  "package"
  "parameter"
  ; "path"
  ; "port"
  "endaction"
  "endactionvalue"
  "endcase"
  ; "endinstance"
  "endinterface"
  "endmethod"
  "endmodule"
  "endpackage"
  "provisos"
  "reset_by"
  ; "rules"
  ; "endrules"
  ; "same_family"
  ; "schedule"
  "struct"
  "tagged"
  "type"
  ; "typeclass"
  ; "endtypeclass"
  "typedef"
  "union"
  ; "valueOf"
  ; "valueof"
  "void"
  "while"
] @keyword

[
  "while"
  "for"
  ; "continue"
  ; "break"
] @repeat

[
 "if"
 "else"
 "case"
] @conditional

[
  "function"
  "endfunction"

  "rule"
  "endrule"
] @keyword.function

"return" @keyword.return

[
  "bit"
  "int"
  "Action"
  "ActionValue"
] @type.builtin

[
  "+"
  "-"
  "!"
  "~"
  "&"
  "~&"
  "|"
  "~|"
  "^"
  "^~"
  "~^"
  "*"
  "/"
  "%"
  "<<"
  ">>"
  "<="
  ">="
  "<"
  ">"
  "=="
  "!="
  "|"
  "&&"
  "||"
  "="
  "<-"
] @operator

[ ";" ":" "," ] @punctuation.delimiter

(typeIde) @type
(typeNat) @type.quantifier

(comment) @comment @spell

"?" @constant
(intLiteral) @number
(realLiteral) @number

(moduleApp
  (identifier) @constructor)

(methodProto
  (identifier) @function)

(methodDef
  (identifier) @function)
