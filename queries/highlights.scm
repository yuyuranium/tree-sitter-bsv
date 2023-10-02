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
  ; "ifc_inout"
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
  "union"
  ; "valueOf"
  ; "valueof"
] @keyword

[
  "import"
  "export"
] @include

"typedef" @keyword.definition

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
  "void"
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
  "&&&"
] @operator

"matches" @keyword.operator

"?" @constant

[ ";" ":" "," "::" ] @punctuation.delimiter

[ "(" ")" "[" "]" "{" "}"] @punctuation.bracket

(condExpr [ "?" ":" ] @conditional.ternary)

(typeIde) @type
(typeNat) @type.quantifier

(comment) @comment @spell

(intLiteral) @number
(realLiteral) @number
(stringLiteral) @string

(attrName
  (identifier) @property)

(typeFormal
  (identifier) @parameter)

(moduleProto
  (identifier) @constructor)
(moduleFormalParam
  (identifier) @parameter)
(moduleApp
  (identifier) @constructor)

(functionProto
  (identifier) @function)
(functionFormal
  (identifier) @parameter)
(functionCall
  (exprPrimary (identifier) @function.call))

(methodProto
  (identifier) @function)
(methodProtoFormal
  (identifier) @parameter)
(methodDef
  (identifier) @function)
(methodFormal
  (identifier) @parameter)

(structMember
  (identifier) @field)

(unionMember
  (Identifier) @field)

(typedefEnum
  (Identifier) @type)
(typedefEnumElement
  (Identifier) @field)
