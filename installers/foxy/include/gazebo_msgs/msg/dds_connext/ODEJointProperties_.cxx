

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ODEJointProperties_.idl using "rtiddsgen".
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

#include "ODEJointProperties_.h"

#include <new>

namespace gazebo_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *ODEJointProperties_TYPENAME = "gazebo_msgs::msg::dds_::ODEJointProperties_";

            DDS_TypeCode* ODEJointProperties__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ODEJointProperties__g_tc_damping__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ODEJointProperties__g_tc_hi_stop__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ODEJointProperties__g_tc_lo_stop__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ODEJointProperties__g_tc_erp__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ODEJointProperties__g_tc_cfm__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ODEJointProperties__g_tc_stop_erp__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ODEJointProperties__g_tc_stop_cfm__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ODEJointProperties__g_tc_fudge_factor__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ODEJointProperties__g_tc_fmax__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ODEJointProperties__g_tc_vel__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member ODEJointProperties__g_tc_members[10]=
                {

                    {
                        (char *)"damping_",/* Member name */
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
                        (char *)"hi_stop_",/* Member name */
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
                        (char *)"lo_stop_",/* Member name */
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
                    }, 
                    {
                        (char *)"erp_",/* Member name */
                        {
                            3,/* Representation ID */          
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
                        (char *)"cfm_",/* Member name */
                        {
                            4,/* Representation ID */          
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
                        (char *)"stop_erp_",/* Member name */
                        {
                            5,/* Representation ID */          
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
                        (char *)"stop_cfm_",/* Member name */
                        {
                            6,/* Representation ID */          
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
                        (char *)"fudge_factor_",/* Member name */
                        {
                            7,/* Representation ID */          
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
                        (char *)"fmax_",/* Member name */
                        {
                            8,/* Representation ID */          
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
                        (char *)"vel_",/* Member name */
                        {
                            9,/* Representation ID */          
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

                static DDS_TypeCode ODEJointProperties__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::msg::dds_::ODEJointProperties_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        ODEJointProperties__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ODEJointProperties_*/

                if (is_initialized) {
                    return &ODEJointProperties__g_tc;
                }

                ODEJointProperties__g_tc_damping__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                ODEJointProperties__g_tc_hi_stop__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                ODEJointProperties__g_tc_lo_stop__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                ODEJointProperties__g_tc_erp__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                ODEJointProperties__g_tc_cfm__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                ODEJointProperties__g_tc_stop_erp__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                ODEJointProperties__g_tc_stop_cfm__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                ODEJointProperties__g_tc_fudge_factor__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                ODEJointProperties__g_tc_fmax__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                ODEJointProperties__g_tc_vel__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                ODEJointProperties__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& ODEJointProperties__g_tc_damping__sequence;
                ODEJointProperties__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& ODEJointProperties__g_tc_hi_stop__sequence;
                ODEJointProperties__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& ODEJointProperties__g_tc_lo_stop__sequence;
                ODEJointProperties__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& ODEJointProperties__g_tc_erp__sequence;
                ODEJointProperties__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& ODEJointProperties__g_tc_cfm__sequence;
                ODEJointProperties__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& ODEJointProperties__g_tc_stop_erp__sequence;
                ODEJointProperties__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& ODEJointProperties__g_tc_stop_cfm__sequence;
                ODEJointProperties__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)& ODEJointProperties__g_tc_fudge_factor__sequence;
                ODEJointProperties__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)& ODEJointProperties__g_tc_fmax__sequence;
                ODEJointProperties__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)& ODEJointProperties__g_tc_vel__sequence;

                is_initialized = RTI_TRUE;

                return &ODEJointProperties__g_tc;
            }

            RTIBool ODEJointProperties__initialize(
                ODEJointProperties_* sample) {
                return gazebo_msgs::msg::dds_::ODEJointProperties__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ODEJointProperties__initialize_ex(
                ODEJointProperties_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::msg::dds_::ODEJointProperties__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ODEJointProperties__initialize_w_params(
                ODEJointProperties_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->damping_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->damping_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->damping_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->damping_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->hi_stop_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->hi_stop_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->hi_stop_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->hi_stop_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->lo_stop_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->lo_stop_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->lo_stop_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->lo_stop_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->erp_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->erp_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->erp_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->erp_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->cfm_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->cfm_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->cfm_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->cfm_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->stop_erp_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->stop_erp_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->stop_erp_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->stop_erp_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->stop_cfm_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->stop_cfm_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->stop_cfm_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->stop_cfm_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->fudge_factor_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->fudge_factor_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->fudge_factor_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->fudge_factor_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->fmax_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->fmax_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->fmax_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->fmax_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->vel_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->vel_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->vel_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->vel_, 0);
                }
                return RTI_TRUE;
            }

            void ODEJointProperties__finalize(
                ODEJointProperties_* sample)
            {

                gazebo_msgs::msg::dds_::ODEJointProperties__finalize_ex(sample,RTI_TRUE);
            }

            void ODEJointProperties__finalize_ex(
                ODEJointProperties_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::msg::dds_::ODEJointProperties__finalize_w_params(
                    sample,&deallocParams);
            }

            void ODEJointProperties__finalize_w_params(
                ODEJointProperties_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                DDS_DoubleSeq_finalize(&sample->damping_);

                DDS_DoubleSeq_finalize(&sample->hi_stop_);

                DDS_DoubleSeq_finalize(&sample->lo_stop_);

                DDS_DoubleSeq_finalize(&sample->erp_);

                DDS_DoubleSeq_finalize(&sample->cfm_);

                DDS_DoubleSeq_finalize(&sample->stop_erp_);

                DDS_DoubleSeq_finalize(&sample->stop_cfm_);

                DDS_DoubleSeq_finalize(&sample->fudge_factor_);

                DDS_DoubleSeq_finalize(&sample->fmax_);

                DDS_DoubleSeq_finalize(&sample->vel_);

            }

            void ODEJointProperties__finalize_optional_members(
                ODEJointProperties_* sample, RTIBool deletePointers)
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

            }

            RTIBool ODEJointProperties__copy(
                ODEJointProperties_* dst,
                const ODEJointProperties_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!DDS_DoubleSeq_copy(&dst->damping_ ,
                    &src->damping_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->hi_stop_ ,
                    &src->hi_stop_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->lo_stop_ ,
                    &src->lo_stop_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->erp_ ,
                    &src->erp_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->cfm_ ,
                    &src->cfm_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->stop_erp_ ,
                    &src->stop_erp_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->stop_cfm_ ,
                    &src->stop_cfm_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->fudge_factor_ ,
                    &src->fudge_factor_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->fmax_ ,
                    &src->fmax_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->vel_ ,
                    &src->vel_ )) {
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
            * Configure and implement 'ODEJointProperties_' sequence class.
            */
            #define T ODEJointProperties_
            #define TSeq ODEJointProperties_Seq

            #define T_initialize_w_params gazebo_msgs::msg::dds_::ODEJointProperties__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::msg::dds_::ODEJointProperties__finalize_w_params
            #define T_copy       gazebo_msgs::msg::dds_::ODEJointProperties__copy

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
} /* namespace gazebo_msgs  */

