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
  "dependencies"
  "deriving"
  "determines"
  ; "e"
  ; "enable"
  "end"
  "enum"
  ; "ifc_inout"
  ; "inout"
  ; "input_clock"
  ; "input_reset"
  "instance"
  "interface"
  "let"
  "match"
  "matches"
  "method"
  "module"
  "numeric"
  ; "output_clock"
  ; "output_reset"
  "package"
  "seq"
  "par"
  "parameter"
  ; "path"
  ; "port"
  "endaction"
  "endactionvalue"
  "endcase"
  "endinstance"
  "endinterface"
  "endmethod"
  "endmodule"
  "endpackage"
  "endseq"
  "endpar"
  "provisos"
  "reset_by"
  "rules"
  "endrules"
  ; "same_family"
  ; "schedule"
  "struct"
  "tagged"
  "type"
  "typeclass"
  "endtypeclass"
  "union"
] @keyword

[
  "\"BDPI\""
] @string

[
  "import"
  "export"
] @keyword.import

"typedef" @keyword.definition

[
  "while"
  "for"
  "continue"
  "break"
] @keyword.repeat

[
 "if"
 "else"
 "case"
] @keyword.conditional

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
 "True"
 "False"
] @boolean

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

[
  "matches"
  "valueOf"
  "valueof"
  "noAction"
] @keyword.operator

"?" @constant

[ ";" ":" "," "::" ] @punctuation.delimiter

[ "(" ")" "[" "]" "{" "}"] @punctuation.bracket

(condExpr [ "?" ":" ] @conditional.ternary)

(typeIde) @type
(typeNat) @type.quantifier

(comment) @comment.documentation @spell

(intLiteral) @number
(realLiteral) @number
(stringLiteral) @string

; Struct member selection
(exprPrimary
  "." (identifier) @property)
(lValue
  "." (identifier) @property)

(exprPrimary
  (Identifier) @constant)

(structMember
  (identifier) @field)

(unionMember
  (Identifier) @field)

(structExpr
  (Identifier) @type)

(taggedUnionExpr .
  (Identifier) @type)

(memberBind .
  (identifier) @property)

(typedefEnum
  (Identifier) @type)
(typedefEnumElement
  (Identifier) @constant)

(attrName
  (identifier) @property)

(typeFormal
  (typeIde (identifier) @parameter))

(typeclassIde) @type
(proviso
  (Identifier) @type)

(moduleProto
  (identifier) @constructor)
(moduleFormalParam
  (identifier) @parameter)
(moduleApp
  (identifier) @constructor)

(functionProto
  (identifier) @function)
(functionAssign
  (identifier) @function)
(functionFormal
  (identifier) @parameter)
(functionCall
  (exprPrimary (identifier) @function.call))

(systemTaskStmt
  (displayTaskName) @function.call)

(systemTaskStmt
  (dollarIdentifier) @function.call)

(systemFunctionCall) @function.call

(methodProto
  (identifier) @function)
(methodProtoFormal
  (identifier) @parameter)
(methodDef
  (identifier) @function)
(methodFormal
  (identifier) @parameter)
