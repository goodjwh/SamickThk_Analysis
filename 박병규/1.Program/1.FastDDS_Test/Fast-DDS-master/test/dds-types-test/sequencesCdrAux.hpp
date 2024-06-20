// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file sequencesCdrAux.hpp
 * This source file contains some definitions of CDR related functions.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_SEQUENCESCDRAUX_HPP_
#define _FAST_DDS_GENERATED_SEQUENCESCDRAUX_HPP_

#include "sequences.hpp"

constexpr uint32_t SequenceLongDouble_max_cdr_typesize {8UL};
constexpr uint32_t SequenceLongDouble_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceBitset_max_cdr_typesize {12UL};
constexpr uint32_t SequenceBitset_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceStructure_max_cdr_typesize {12UL};
constexpr uint32_t SequenceStructure_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceShortArray_max_cdr_typesize {12UL};
constexpr uint32_t SequenceShortArray_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceLongLong_max_cdr_typesize {8UL};
constexpr uint32_t SequenceLongLong_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceAlias_max_cdr_typesize {8UL};
constexpr uint32_t SequenceAlias_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceLong_max_cdr_typesize {8UL};
constexpr uint32_t SequenceLong_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceStringBounded_max_cdr_typesize {12UL};
constexpr uint32_t SequenceStringBounded_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceMap_max_cdr_typesize {12UL};
constexpr uint32_t SequenceMap_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceBoolean_max_cdr_typesize {8UL};
constexpr uint32_t SequenceBoolean_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceWStringBounded_max_cdr_typesize {12UL};
constexpr uint32_t SequenceWStringBounded_max_key_cdr_typesize {0UL};

constexpr uint32_t BoundedBigSequences_max_cdr_typesize {150428UL};
constexpr uint32_t BoundedBigSequences_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceString_max_cdr_typesize {12UL};
constexpr uint32_t SequenceString_max_key_cdr_typesize {0UL};


constexpr uint32_t SequenceShort_max_cdr_typesize {8UL};
constexpr uint32_t SequenceShort_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceDouble_max_cdr_typesize {8UL};
constexpr uint32_t SequenceDouble_max_key_cdr_typesize {0UL};


constexpr uint32_t BoundedSmallSequences_max_cdr_typesize {1320UL};
constexpr uint32_t BoundedSmallSequences_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceBitMask_max_cdr_typesize {12UL};
constexpr uint32_t SequenceBitMask_max_key_cdr_typesize {0UL};


constexpr uint32_t SequenceUShort_max_cdr_typesize {8UL};
constexpr uint32_t SequenceUShort_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceEnum_max_cdr_typesize {8UL};
constexpr uint32_t SequenceEnum_max_key_cdr_typesize {0UL};



constexpr uint32_t SequenceOctet_max_cdr_typesize {8UL};
constexpr uint32_t SequenceOctet_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceWChar_max_cdr_typesize {8UL};
constexpr uint32_t SequenceWChar_max_key_cdr_typesize {0UL};


constexpr uint32_t SequenceSequence_max_cdr_typesize {12UL};
constexpr uint32_t SequenceSequence_max_key_cdr_typesize {0UL};




constexpr uint32_t SequenceUnion_max_cdr_typesize {12UL};
constexpr uint32_t SequenceUnion_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceULong_max_cdr_typesize {8UL};
constexpr uint32_t SequenceULong_max_key_cdr_typesize {0UL};




constexpr uint32_t SequenceULongLong_max_cdr_typesize {8UL};
constexpr uint32_t SequenceULongLong_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceFloat_max_cdr_typesize {8UL};
constexpr uint32_t SequenceFloat_max_key_cdr_typesize {0UL};

constexpr uint32_t SequenceWString_max_cdr_typesize {12UL};
constexpr uint32_t SequenceWString_max_key_cdr_typesize {0UL};



constexpr uint32_t SequenceChar_max_cdr_typesize {8UL};
constexpr uint32_t SequenceChar_max_key_cdr_typesize {0UL};


namespace eprosima {
namespace fastcdr {

class Cdr;
class CdrSizeCalculator;

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceShort& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceUShort& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceLong& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceULong& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceLongLong& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceULongLong& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceFloat& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceDouble& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceLongDouble& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceBoolean& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceOctet& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceChar& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceWChar& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceString& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceWString& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceStringBounded& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceWStringBounded& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceEnum& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceBitMask& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceAlias& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceShortArray& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceSequence& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceMap& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceUnion& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceStructure& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const SequenceBitset& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const BoundedSmallSequences& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const BoundedBigSequences& data);


} // namespace fastcdr
} // namespace eprosima

#endif // _FAST_DDS_GENERATED_SEQUENCESCDRAUX_HPP_

