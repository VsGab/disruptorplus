#ifndef DISRUPTORPLUS_CONFIG_HPP_INCLUDED
#define DISRUPTORPLUS_CONFIG_HPP_INCLUDED

#include <cstddef>
#include <cstdint>

namespace disruptorplus
{
    /// \brief
    /// The expected size of a cache-line in bytes.
    ///
    /// Some data structures are padded according to this value to
    /// ensure certain data members do not share a cache line with
    /// other data in order to reduce the problem of false-sharing.
    ///
    /// The value of 64 bytes is typical for x86/x64 architectures.
    const size_t CacheLineSize = 64;

    /// \brief
    /// Integer type used to represent sequence number of an item
    /// added to a ring buffer.
    ///
    /// The first item added to a ring buffer always has a sequence number
    /// of zero, with the second item having a sequence number of 1, etc.
    /// Sequence numbers wrap around back to zero when they overflow.
    typedef uint64_t sequence_t;

    /// \typedef sequence_diff_t
    /// \brief
    /// Integer type used to represent the difference between two
    /// \ref sequence_t values.
    typedef int64_t sequence_diff_t;
}

#endif
