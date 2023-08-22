fetch('./operations.cpp')
.then(response => response.arrayBuffer())
.then(buffer => WebAssembly.instantiate(buffer))
.then(module => {
  const { instance } = module;

  // Call the C++ function and get the result
  const result = instance.exports.your_cpp_function();

  // Print the result in the browser console
  console.log('Your code miss:', result);
})
.catch(error => {
  console.error('Error :', error);
});
