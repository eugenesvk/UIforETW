#pragma once

// const float in a header file can lead to duplication of the storage
// but I don't really care in this case. Just don't do it with a header
// that is included hundreds of times.
const float kCurrentVersion = 1.52f;

// Put a "#define VERSION_SUFFIX 'b'" line here to add a minor version
// increment that won't trigger the new-version checks, handy for minor
// releases that I don't want to bother users about.
//#define VERSION_SUFFIX 'b'
