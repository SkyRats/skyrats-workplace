

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeoPose_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "GeoPose_.h"

#include <new>

namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *GeoPose_TYPENAME = "geographic_msgs::msg::dds_::GeoPose_";

            DDS_TypeCode* GeoPose__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GeoPose__g_tc_members[2]=
                {

                    {
                        (char *)"position_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"orientation_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode GeoPose__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"geographic_msgs::msg::dds_::GeoPose_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GeoPose__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GeoPose_*/

                if (is_initialized) {
                    return &GeoPose__g_tc;
                }

                GeoPose__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)geographic_msgs::msg::dds_::GeoPoint__get_typecode();

                GeoPose__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Quaternion__get_typecode();

                is_initialized = RTI_TRUE;

                return &GeoPose__g_tc;
            }

            RTIBool GeoPose__initialize(
                GeoPose_* sample) {
                return geographic_msgs::msg::dds_::GeoPose__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GeoPose__initialize_ex(
                GeoPose_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return geographic_msgs::msg::dds_::GeoPose__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GeoPose__initialize_w_params(
                GeoPose_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!geographic_msgs::msg::dds_::GeoPoint__initialize_w_params(&sample->position_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!geometry_msgs::msg::dds_::Quaternion__initialize_w_params(&sample->orientation_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void GeoPose__finalize(
                GeoPose_* sample)
            {

                geographic_msgs::msg::dds_::GeoPose__finalize_ex(sample,RTI_TRUE);
            }

            void GeoPose__finalize_ex(
                GeoPose_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                geographic_msgs::msg::dds_::GeoPose__finalize_w_params(
                    sample,&deallocParams);
            }

            void GeoPose__finalize_w_params(
                GeoPose_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                geographic_msgs::msg::dds_::GeoPoint__finalize_w_params(&sample->position_,deallocParams);

                geometry_msgs::msg::dds_::Quaternion__finalize_w_params(&sample->orientation_,deallocParams);

            }

            void GeoPose__finalize_optional_members(
                GeoPose_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                geographic_msgs::msg::dds_::GeoPoint__finalize_optional_members(&sample->position_, deallocParams->delete_pointers);
                geometry_msgs::msg::dds_::Quaternion__finalize_optional_members(&sample->orientation_, deallocParams->delete_pointers);
            }

            RTIBool GeoPose__copy(
                GeoPose_* dst,
                const GeoPose_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!geographic_msgs::msg::dds_::GeoPoint__copy(
                        &dst->position_,(const geographic_msgs::msg::dds_::GeoPoint_*)&src->position_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Quaternion__copy(
                        &dst->orientation_,(const geometry_msgs::msg::dds_::Quaternion_*)&src->orientation_)) {
                        return RTI_FALSE;
                    } 

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'GeoPose_' sequence class.
            */
            #define T GeoPose_
            #define TSeq GeoPose_Seq

            #define T_initialize_w_params geographic_msgs::msg::dds_::GeoPose__initialize_w_params

            #define T_finalize_w_params   geographic_msgs::msg::dds_::GeoPose__finalize_w_params
            #define T_copy       geographic_msgs::msg::dds_::GeoPose__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geographic_msgs  */

