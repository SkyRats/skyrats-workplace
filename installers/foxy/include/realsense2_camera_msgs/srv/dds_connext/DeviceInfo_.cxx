

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DeviceInfo_.idl using "rtiddsgen".
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

#include "DeviceInfo_.h"

#include <new>

namespace realsense2_camera_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *DeviceInfo_Request_TYPENAME = "realsense2_camera_msgs::srv::dds_::DeviceInfo_Request_";

            DDS_TypeCode* DeviceInfo_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DeviceInfo_Request__g_tc_members[1]=
                {

                    {
                        (char *)"structure_needs_at_least_one_member_",/* Member name */
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
                    }
                };

                static DDS_TypeCode DeviceInfo_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"realsense2_camera_msgs::srv::dds_::DeviceInfo_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        DeviceInfo_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for DeviceInfo_Request_*/

                if (is_initialized) {
                    return &DeviceInfo_Request__g_tc;
                }

                DeviceInfo_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &DeviceInfo_Request__g_tc;
            }

            RTIBool DeviceInfo_Request__initialize(
                DeviceInfo_Request_* sample) {
                return realsense2_camera_msgs::srv::dds_::DeviceInfo_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool DeviceInfo_Request__initialize_ex(
                DeviceInfo_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return realsense2_camera_msgs::srv::dds_::DeviceInfo_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool DeviceInfo_Request__initialize_w_params(
                DeviceInfo_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->structure_needs_at_least_one_member_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void DeviceInfo_Request__finalize(
                DeviceInfo_Request_* sample)
            {

                realsense2_camera_msgs::srv::dds_::DeviceInfo_Request__finalize_ex(sample,RTI_TRUE);
            }

            void DeviceInfo_Request__finalize_ex(
                DeviceInfo_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                realsense2_camera_msgs::srv::dds_::DeviceInfo_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void DeviceInfo_Request__finalize_w_params(
                DeviceInfo_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void DeviceInfo_Request__finalize_optional_members(
                DeviceInfo_Request_* sample, RTIBool deletePointers)
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

            RTIBool DeviceInfo_Request__copy(
                DeviceInfo_Request_* dst,
                const DeviceInfo_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->structure_needs_at_least_one_member_, &src->structure_needs_at_least_one_member_)) { 
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
            * Configure and implement 'DeviceInfo_Request_' sequence class.
            */
            #define T DeviceInfo_Request_
            #define TSeq DeviceInfo_Request_Seq

            #define T_initialize_w_params realsense2_camera_msgs::srv::dds_::DeviceInfo_Request__initialize_w_params

            #define T_finalize_w_params   realsense2_camera_msgs::srv::dds_::DeviceInfo_Request__finalize_w_params
            #define T_copy       realsense2_camera_msgs::srv::dds_::DeviceInfo_Request__copy

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
    } /* namespace srv  */
} /* namespace realsense2_camera_msgs  */
namespace realsense2_camera_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *DeviceInfo_Response_TYPENAME = "realsense2_camera_msgs::srv::dds_::DeviceInfo_Response_";

            DDS_TypeCode* DeviceInfo_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DeviceInfo_Response__g_tc_device_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode DeviceInfo_Response__g_tc_serial_number__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode DeviceInfo_Response__g_tc_firmware_version__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode DeviceInfo_Response__g_tc_usb_type_descriptor__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode DeviceInfo_Response__g_tc_firmware_update_id__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode DeviceInfo_Response__g_tc_sensors__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member DeviceInfo_Response__g_tc_members[6]=
                {

                    {
                        (char *)"device_name_",/* Member name */
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
                        (char *)"serial_number_",/* Member name */
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
                        (char *)"firmware_version_",/* Member name */
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
                        (char *)"usb_type_descriptor_",/* Member name */
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
                        (char *)"firmware_update_id_",/* Member name */
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
                        (char *)"sensors_",/* Member name */
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
                    }
                };

                static DDS_TypeCode DeviceInfo_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"realsense2_camera_msgs::srv::dds_::DeviceInfo_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        DeviceInfo_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for DeviceInfo_Response_*/

                if (is_initialized) {
                    return &DeviceInfo_Response__g_tc;
                }

                DeviceInfo_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DeviceInfo_Response__g_tc_device_name__string;

                DeviceInfo_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DeviceInfo_Response__g_tc_serial_number__string;

                DeviceInfo_Response__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DeviceInfo_Response__g_tc_firmware_version__string;

                DeviceInfo_Response__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DeviceInfo_Response__g_tc_usb_type_descriptor__string;

                DeviceInfo_Response__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DeviceInfo_Response__g_tc_firmware_update_id__string;

                DeviceInfo_Response__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DeviceInfo_Response__g_tc_sensors__string;

                is_initialized = RTI_TRUE;

                return &DeviceInfo_Response__g_tc;
            }

            RTIBool DeviceInfo_Response__initialize(
                DeviceInfo_Response_* sample) {
                return realsense2_camera_msgs::srv::dds_::DeviceInfo_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool DeviceInfo_Response__initialize_ex(
                DeviceInfo_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return realsense2_camera_msgs::srv::dds_::DeviceInfo_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool DeviceInfo_Response__initialize_w_params(
                DeviceInfo_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->device_name_= DDS_String_alloc ((0));
                    if (sample->device_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->device_name_!= NULL) { 
                        sample->device_name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->serial_number_= DDS_String_alloc ((0));
                    if (sample->serial_number_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->serial_number_!= NULL) { 
                        sample->serial_number_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->firmware_version_= DDS_String_alloc ((0));
                    if (sample->firmware_version_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->firmware_version_!= NULL) { 
                        sample->firmware_version_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->usb_type_descriptor_= DDS_String_alloc ((0));
                    if (sample->usb_type_descriptor_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->usb_type_descriptor_!= NULL) { 
                        sample->usb_type_descriptor_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->firmware_update_id_= DDS_String_alloc ((0));
                    if (sample->firmware_update_id_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->firmware_update_id_!= NULL) { 
                        sample->firmware_update_id_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->sensors_= DDS_String_alloc ((0));
                    if (sample->sensors_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->sensors_!= NULL) { 
                        sample->sensors_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void DeviceInfo_Response__finalize(
                DeviceInfo_Response_* sample)
            {

                realsense2_camera_msgs::srv::dds_::DeviceInfo_Response__finalize_ex(sample,RTI_TRUE);
            }

            void DeviceInfo_Response__finalize_ex(
                DeviceInfo_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                realsense2_camera_msgs::srv::dds_::DeviceInfo_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void DeviceInfo_Response__finalize_w_params(
                DeviceInfo_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->device_name_ != NULL) {
                    DDS_String_free(sample->device_name_);
                    sample->device_name_=NULL;

                }
                if (sample->serial_number_ != NULL) {
                    DDS_String_free(sample->serial_number_);
                    sample->serial_number_=NULL;

                }
                if (sample->firmware_version_ != NULL) {
                    DDS_String_free(sample->firmware_version_);
                    sample->firmware_version_=NULL;

                }
                if (sample->usb_type_descriptor_ != NULL) {
                    DDS_String_free(sample->usb_type_descriptor_);
                    sample->usb_type_descriptor_=NULL;

                }
                if (sample->firmware_update_id_ != NULL) {
                    DDS_String_free(sample->firmware_update_id_);
                    sample->firmware_update_id_=NULL;

                }
                if (sample->sensors_ != NULL) {
                    DDS_String_free(sample->sensors_);
                    sample->sensors_=NULL;

                }
            }

            void DeviceInfo_Response__finalize_optional_members(
                DeviceInfo_Response_* sample, RTIBool deletePointers)
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

            RTIBool DeviceInfo_Response__copy(
                DeviceInfo_Response_* dst,
                const DeviceInfo_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->device_name_, src->device_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->serial_number_, src->serial_number_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->firmware_version_, src->firmware_version_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->usb_type_descriptor_, src->usb_type_descriptor_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->firmware_update_id_, src->firmware_update_id_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->sensors_, src->sensors_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
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
            * Configure and implement 'DeviceInfo_Response_' sequence class.
            */
            #define T DeviceInfo_Response_
            #define TSeq DeviceInfo_Response_Seq

            #define T_initialize_w_params realsense2_camera_msgs::srv::dds_::DeviceInfo_Response__initialize_w_params

            #define T_finalize_w_params   realsense2_camera_msgs::srv::dds_::DeviceInfo_Response__finalize_w_params
            #define T_copy       realsense2_camera_msgs::srv::dds_::DeviceInfo_Response__copy

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
    } /* namespace srv  */
} /* namespace realsense2_camera_msgs  */

