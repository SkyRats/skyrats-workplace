

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MapFeature_.idl using "rtiddsgen".
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

#include "MapFeature_.h"

#include <new>

namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *MapFeature_TYPENAME = "geographic_msgs::msg::dds_::MapFeature_";

            DDS_TypeCode* MapFeature__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MapFeature__g_tc_components__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode MapFeature__g_tc_props__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member MapFeature__g_tc_members[3]=
                {

                    {
                        (char *)"id_",/* Member name */
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
                        (char *)"components_",/* Member name */
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
                    }, 
                    {
                        (char *)"props_",/* Member name */
                        {
                            2,/* Representation ID */          
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

                static DDS_TypeCode MapFeature__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"geographic_msgs::msg::dds_::MapFeature_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        MapFeature__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MapFeature_*/

                if (is_initialized) {
                    return &MapFeature__g_tc;
                }

                MapFeature__g_tc_components__sequence._data._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                MapFeature__g_tc_props__sequence._data._typeCode = (RTICdrTypeCode *)geographic_msgs::msg::dds_::KeyValue__get_typecode();

                MapFeature__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                MapFeature__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& MapFeature__g_tc_components__sequence;
                MapFeature__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& MapFeature__g_tc_props__sequence;

                is_initialized = RTI_TRUE;

                return &MapFeature__g_tc;
            }

            RTIBool MapFeature__initialize(
                MapFeature_* sample) {
                return geographic_msgs::msg::dds_::MapFeature__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MapFeature__initialize_ex(
                MapFeature_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return geographic_msgs::msg::dds_::MapFeature__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MapFeature__initialize_w_params(
                MapFeature_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    unique_identifier_msgs::msg::dds_::UUID_Seq_initialize(&sample->components_ );
                    unique_identifier_msgs::msg::dds_::UUID_Seq_set_element_allocation_params(&sample->components_ ,allocParams);
                    unique_identifier_msgs::msg::dds_::UUID_Seq_set_absolute_maximum(&sample->components_ , RTI_INT32_MAX);
                    if (!unique_identifier_msgs::msg::dds_::UUID_Seq_set_maximum(&sample->components_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    unique_identifier_msgs::msg::dds_::UUID_Seq_set_length(&sample->components_, 0);
                }
                if (allocParams->allocate_memory) {
                    geographic_msgs::msg::dds_::KeyValue_Seq_initialize(&sample->props_ );
                    geographic_msgs::msg::dds_::KeyValue_Seq_set_element_allocation_params(&sample->props_ ,allocParams);
                    geographic_msgs::msg::dds_::KeyValue_Seq_set_absolute_maximum(&sample->props_ , RTI_INT32_MAX);
                    if (!geographic_msgs::msg::dds_::KeyValue_Seq_set_maximum(&sample->props_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geographic_msgs::msg::dds_::KeyValue_Seq_set_length(&sample->props_, 0);
                }
                return RTI_TRUE;
            }

            void MapFeature__finalize(
                MapFeature_* sample)
            {

                geographic_msgs::msg::dds_::MapFeature__finalize_ex(sample,RTI_TRUE);
            }

            void MapFeature__finalize_ex(
                MapFeature_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                geographic_msgs::msg::dds_::MapFeature__finalize_w_params(
                    sample,&deallocParams);
            }

            void MapFeature__finalize_w_params(
                MapFeature_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->id_,deallocParams);

                unique_identifier_msgs::msg::dds_::UUID_Seq_set_element_deallocation_params(
                    &sample->components_,deallocParams);
                unique_identifier_msgs::msg::dds_::UUID_Seq_finalize(&sample->components_);

                geographic_msgs::msg::dds_::KeyValue_Seq_set_element_deallocation_params(
                    &sample->props_,deallocParams);
                geographic_msgs::msg::dds_::KeyValue_Seq_finalize(&sample->props_);

            }

            void MapFeature__finalize_optional_members(
                MapFeature_* sample, RTIBool deletePointers)
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

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->id_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = unique_identifier_msgs::msg::dds_::UUID_Seq_get_length(
                        &sample->components_);

                    for (i = 0; i < length; i++) {
                        unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(
                            unique_identifier_msgs::msg::dds_::UUID_Seq_get_reference(
                                &sample->components_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = geographic_msgs::msg::dds_::KeyValue_Seq_get_length(
                        &sample->props_);

                    for (i = 0; i < length; i++) {
                        geographic_msgs::msg::dds_::KeyValue__finalize_optional_members(
                            geographic_msgs::msg::dds_::KeyValue_Seq_get_reference(
                                &sample->props_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool MapFeature__copy(
                MapFeature_* dst,
                const MapFeature_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->id_)) {
                        return RTI_FALSE;
                    } 
                    if (!unique_identifier_msgs::msg::dds_::UUID_Seq_copy(&dst->components_ ,
                    &src->components_ )) {
                        return RTI_FALSE;
                    }
                    if (!geographic_msgs::msg::dds_::KeyValue_Seq_copy(&dst->props_ ,
                    &src->props_ )) {
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
            * Configure and implement 'MapFeature_' sequence class.
            */
            #define T MapFeature_
            #define TSeq MapFeature_Seq

            #define T_initialize_w_params geographic_msgs::msg::dds_::MapFeature__initialize_w_params

            #define T_finalize_w_params   geographic_msgs::msg::dds_::MapFeature__finalize_w_params
            #define T_copy       geographic_msgs::msg::dds_::MapFeature__copy

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

