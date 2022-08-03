

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeoPath_.idl using "rtiddsgen".
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

#include "GeoPath_.h"

#include <new>

namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *GeoPath_TYPENAME = "geographic_msgs::msg::dds_::GeoPath_";

            DDS_TypeCode* GeoPath__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GeoPath__g_tc_poses__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member GeoPath__g_tc_members[2]=
                {

                    {
                        (char *)"header_",/* Member name */
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
                        (char *)"poses_",/* Member name */
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

                static DDS_TypeCode GeoPath__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"geographic_msgs::msg::dds_::GeoPath_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GeoPath__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GeoPath_*/

                if (is_initialized) {
                    return &GeoPath__g_tc;
                }

                GeoPath__g_tc_poses__sequence._data._typeCode = (RTICdrTypeCode *)geographic_msgs::msg::dds_::GeoPoseStamped__get_typecode();

                GeoPath__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                GeoPath__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& GeoPath__g_tc_poses__sequence;

                is_initialized = RTI_TRUE;

                return &GeoPath__g_tc;
            }

            RTIBool GeoPath__initialize(
                GeoPath_* sample) {
                return geographic_msgs::msg::dds_::GeoPath__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GeoPath__initialize_ex(
                GeoPath_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return geographic_msgs::msg::dds_::GeoPath__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GeoPath__initialize_w_params(
                GeoPath_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!std_msgs::msg::dds_::Header__initialize_w_params(&sample->header_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    geographic_msgs::msg::dds_::GeoPoseStamped_Seq_initialize(&sample->poses_ );
                    geographic_msgs::msg::dds_::GeoPoseStamped_Seq_set_element_allocation_params(&sample->poses_ ,allocParams);
                    geographic_msgs::msg::dds_::GeoPoseStamped_Seq_set_absolute_maximum(&sample->poses_ , RTI_INT32_MAX);
                    if (!geographic_msgs::msg::dds_::GeoPoseStamped_Seq_set_maximum(&sample->poses_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geographic_msgs::msg::dds_::GeoPoseStamped_Seq_set_length(&sample->poses_, 0);
                }
                return RTI_TRUE;
            }

            void GeoPath__finalize(
                GeoPath_* sample)
            {

                geographic_msgs::msg::dds_::GeoPath__finalize_ex(sample,RTI_TRUE);
            }

            void GeoPath__finalize_ex(
                GeoPath_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                geographic_msgs::msg::dds_::GeoPath__finalize_w_params(
                    sample,&deallocParams);
            }

            void GeoPath__finalize_w_params(
                GeoPath_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                geographic_msgs::msg::dds_::GeoPoseStamped_Seq_set_element_deallocation_params(
                    &sample->poses_,deallocParams);
                geographic_msgs::msg::dds_::GeoPoseStamped_Seq_finalize(&sample->poses_);

            }

            void GeoPath__finalize_optional_members(
                GeoPath_* sample, RTIBool deletePointers)
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

                std_msgs::msg::dds_::Header__finalize_optional_members(&sample->header_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = geographic_msgs::msg::dds_::GeoPoseStamped_Seq_get_length(
                        &sample->poses_);

                    for (i = 0; i < length; i++) {
                        geographic_msgs::msg::dds_::GeoPoseStamped__finalize_optional_members(
                            geographic_msgs::msg::dds_::GeoPoseStamped_Seq_get_reference(
                                &sample->poses_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool GeoPath__copy(
                GeoPath_* dst,
                const GeoPath_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!geographic_msgs::msg::dds_::GeoPoseStamped_Seq_copy(&dst->poses_ ,
                    &src->poses_ )) {
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
            * Configure and implement 'GeoPath_' sequence class.
            */
            #define T GeoPath_
            #define TSeq GeoPath_Seq

            #define T_initialize_w_params geographic_msgs::msg::dds_::GeoPath__initialize_w_params

            #define T_finalize_w_params   geographic_msgs::msg::dds_::GeoPath__finalize_w_params
            #define T_copy       geographic_msgs::msg::dds_::GeoPath__copy

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

