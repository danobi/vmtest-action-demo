# vmtest-action-demo

This repository demonstrates how to use `vmtest-action`.

Basically we compile this C++ program that dynamically links with
`jsoncpp`. We choose this setup because it requires both build time
and runtime dependencies. This helps prove that `vmtest` can handle
this kind of typical setup.

See [commit 210118201][0] for how to drop `vmtest-action` into your
existing workflow.


[0]: https://github.com/danobi/vmtest-action-demo/commit/210118201b0654dddaa6dee137e31f8dda926d2e
