/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.3-dev at Sat Mar  7 13:39:01 2015. */

#include "nmsg.pb.h"

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t nmsg_Nmsg_fields[5] = {
    PB_FIELD(  1, MESSAGE , REPEATED, CALLBACK, FIRST, nmsg_Nmsg, payloads, payloads, &nmsg_NmsgPayload_fields),
    PB_FIELD(  2, UINT32  , REPEATED, CALLBACK, OTHER, nmsg_Nmsg, payload_crcs, payloads, 0),
    PB_FIELD(  3, UINT32  , OPTIONAL, STATIC  , OTHER, nmsg_Nmsg, sequence, payload_crcs, 0),
    PB_FIELD(  4, UINT64  , OPTIONAL, STATIC  , OTHER, nmsg_Nmsg, sequence_id, sequence, 0),
    PB_LAST_FIELD
};

const pb_field_t nmsg_NmsgFragment_fields[6] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, nmsg_NmsgFragment, id, id, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, nmsg_NmsgFragment, current, id, 0),
    PB_FIELD(  3, UINT32  , REQUIRED, STATIC  , OTHER, nmsg_NmsgFragment, last, current, 0),
    PB_FIELD(  4, BYTES   , REQUIRED, CALLBACK, OTHER, nmsg_NmsgFragment, fragment, last, 0),
    PB_FIELD(  5, UINT32  , OPTIONAL, STATIC  , OTHER, nmsg_NmsgFragment, crc, fragment, 0),
    PB_LAST_FIELD
};

const pb_field_t nmsg_NmsgPayload_fields[9] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, nmsg_NmsgPayload, vid, vid, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, nmsg_NmsgPayload, msgtype, vid, 0),
    PB_FIELD(  3, INT64   , REQUIRED, STATIC  , OTHER, nmsg_NmsgPayload, time_sec, msgtype, 0),
    PB_FIELD(  4, FIXED32 , REQUIRED, STATIC  , OTHER, nmsg_NmsgPayload, time_nsec, time_sec, 0),
    PB_FIELD(  5, BYTES   , OPTIONAL, CALLBACK, OTHER, nmsg_NmsgPayload, payload, time_nsec, 0),
    PB_FIELD(  7, UINT32  , OPTIONAL, STATIC  , OTHER, nmsg_NmsgPayload, source, payload, 0),
    PB_FIELD(  8, UINT32  , OPTIONAL, STATIC  , OTHER, nmsg_NmsgPayload, operator, source, 0),
    PB_FIELD(  9, UINT32  , OPTIONAL, STATIC  , OTHER, nmsg_NmsgPayload, group, operator, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(nmsg_Nmsg, payloads) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_nmsg_Nmsg_nmsg_NmsgFragment_nmsg_NmsgPayload)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(nmsg_Nmsg, payloads) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_nmsg_Nmsg_nmsg_NmsgFragment_nmsg_NmsgPayload)
#endif


