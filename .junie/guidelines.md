Plugins-first architecture: Prefer developing features as independent plugins rather than directly in the main project module.
    - Never create a new plugin by your own volition, only create them as a directive request
    - Ask when you want to create new modules, never create them without asking or direct instruction
    - When making interfaces, especially used for bridging, consider making them in a separate module. These will require no testing.


Test mirroring: For every module, create a corresponding moduleTests that depends on it. This ensures isolation and repeatable tests.
    - Create tests that project the intention or showcase example of how to use various aspect of the module.
    - Start with very few basic tests. Then as the module is used in the project and functinality id develop, create simple tests about these uses. 

Minimal inter-plugin dependencies: Prefer data-driven interfaces or events rather than direct cross-dependencies.

ECS-first mindset: Treat gameplay logic as systems operating on data rather than class hierarchies.

Avoid UObject bloat: Use USTRUCTs and POD-style data where possible. Only use UObject/UActorComponent when serialization, reflection, or editor integration is needed.

System composition: Systems should be small, focused, and stateless, acting purely on provided component data.

Follow Epic coding standard: Match Unreal naming, brace style, and macro conventions (PascalCase for classes, CamelCase for functions, b prefix for booleans, etc.).

Header hygiene: Minimize includes in headers; prefer forward declarations.

Avoid using monolithic headers (core.h, coremminimal.h etc) and use the proper header.

Comments: Explain why, not what. The what should be evident from clear naming and system design/structure.

Avoid cleverness: Favor simplicity, clarity, and explicit intent.

To write tests, use CQTest suite. When multiple tests are needed, move as much logic to common BEFORE_EACH/AFTER_EACH function as possible.

Update each plugin README.md as you work on it. Create a table of content and add information about the usage of the plugin (the public API).
    - The README.md will only exists in .git on the main project, and then on main plugins that are also git repositories.
    - Keep only one README.md per UPlugin where you keep updated information on: "Intentions, basic usages, choices, APIs, important classes" etc..

Memory layout awareness: Group related data to improve cache locality (SoA where appropriate).