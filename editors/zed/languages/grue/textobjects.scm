; A top-level definition behaves like a "function" for navigation.
(source_file
  (list) @function.around)

(list
  (symbol (defform))
  (_)+ @function.inside)

(comment)+ @comment.around
