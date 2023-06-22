# cpp-dependency-graph-template
A template repository for demo'ing vcpkg's GitHub dependency graph integration

In order for the dependencies to appear, the dependency graph must be enabled. It is enabled by default for public repositories.

For private repositories:

1. Select the __Insights__ tab for your repository and select the __Dependency graph__ section.
2. Select the __Enable dependency graph__ button.

## Testing the example that directly invokes `vcpkg install`

1. Select the __Actions tab__ for your repository.
2. Select the workflow named __Example that directly invokes `vcpkg install`__.
3. Select the __Run workflow__ drop down, select the branch to build, and then select __Run workflow__.
4. When the build has finished, select the __Insights__ tab and the __Dependency graph__ section to see the recorded dependencies.

## Testing the example that uses CMake integration

1. Select the __Actions tab__ for your repository.
2. Select the workflow named __Example that uses CMake integration__.
3. Select the __Run workflow__ drop down, select the branch to build, and then select __Run workflow__.
4. When the build has finished, select the __Insights__ tab and the __Dependency graph__ section to see the recorded dependencies.