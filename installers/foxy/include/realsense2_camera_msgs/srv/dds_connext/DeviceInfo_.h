

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DeviceInfo_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DeviceInfo__919533733_h
#define DeviceInfo__919533733_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace realsense2_camera_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *DeviceInfo_Request_TYPENAME;

            struct DeviceInfo_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DeviceInfo_Request_TypeSupport;
            class DeviceInfo_Request_DataWriter;
            class DeviceInfo_Request_DataReader;
            #endif

            class DeviceInfo_Request_ 
            {
              public:
                typedef struct DeviceInfo_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DeviceInfo_Request_TypeSupport TypeSupport;
                typedef DeviceInfo_Request_DataWriter DataWriter;
                typedef DeviceInfo_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DeviceInfo_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DeviceInfo_Request_Seq, DeviceInfo_Request_);

            NDDSUSERDllExport
            RTIBool DeviceInfo_Request__initialize(
                DeviceInfo_Request_* self);

            NDDSUSERDllExport
            RTIBool DeviceInfo_Request__initialize_ex(
                DeviceInfo_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DeviceInfo_Request__initialize_w_params(
                DeviceInfo_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DeviceInfo_Request__finalize(
                DeviceInfo_Request_* self);

            NDDSUSERDllExport
            void DeviceInfo_Request__finalize_ex(
                DeviceInfo_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DeviceInfo_Request__finalize_w_params(
                DeviceInfo_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DeviceInfo_Request__finalize_optional_members(
                DeviceInfo_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DeviceInfo_Request__copy(
                DeviceInfo_Request_* dst,
                const DeviceInfo_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace realsense2_camera_msgs  */
namespace realsense2_camera_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *DeviceInfo_Response_TYPENAME;

            struct DeviceInfo_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DeviceInfo_Response_TypeSupport;
            class DeviceInfo_Response_DataWriter;
            class DeviceInfo_Response_DataReader;
            #endif

            class DeviceInfo_Response_ 
            {
              public:
                typedef struct DeviceInfo_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DeviceInfo_Response_TypeSupport TypeSupport;
                typedef DeviceInfo_Response_DataWriter DataWriter;
                typedef DeviceInfo_Response_DataReader DataReader;
                #endif

                DDS_Char *   device_name_ ;
                DDS_Char *   serial_number_ ;
                DDS_Char *   firmware_version_ ;
                DDS_Char *   usb_type_descriptor_ ;
                DDS_Char *   firmware_update_id_ ;
                DDS_Char *   sensors_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DeviceInfo_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DeviceInfo_Response_Seq, DeviceInfo_Response_);

            NDDSUSERDllExport
            RTIBool DeviceInfo_Response__initialize(
                DeviceInfo_Response_* self);

            NDDSUSERDllExport
            RTIBool DeviceInfo_Response__initialize_ex(
                DeviceInfo_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DeviceInfo_Response__initialize_w_params(
                DeviceInfo_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DeviceInfo_Response__finalize(
                DeviceInfo_Response_* self);

            NDDSUSERDllExport
            void DeviceInfo_Response__finalize_ex(
                DeviceInfo_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DeviceInfo_Response__finalize_w_params(
                DeviceInfo_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DeviceInfo_Response__finalize_optional_members(
                DeviceInfo_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DeviceInfo_Response__copy(
                DeviceInfo_Response_* dst,
                const DeviceInfo_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace realsense2_camera_msgs  */

#endif /* DeviceInfo_ */

