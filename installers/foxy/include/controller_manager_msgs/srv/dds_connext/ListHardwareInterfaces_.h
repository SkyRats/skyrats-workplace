

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ListHardwareInterfaces_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ListHardwareInterfaces__1257315162_h
#define ListHardwareInterfaces__1257315162_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "controller_manager_msgs/msg/dds_connext/HardwareInterface_.h"
namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *ListHardwareInterfaces_Request_TYPENAME;

            struct ListHardwareInterfaces_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ListHardwareInterfaces_Request_TypeSupport;
            class ListHardwareInterfaces_Request_DataWriter;
            class ListHardwareInterfaces_Request_DataReader;
            #endif

            class ListHardwareInterfaces_Request_ 
            {
              public:
                typedef struct ListHardwareInterfaces_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ListHardwareInterfaces_Request_TypeSupport TypeSupport;
                typedef ListHardwareInterfaces_Request_DataWriter DataWriter;
                typedef ListHardwareInterfaces_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ListHardwareInterfaces_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ListHardwareInterfaces_Request_Seq, ListHardwareInterfaces_Request_);

            NDDSUSERDllExport
            RTIBool ListHardwareInterfaces_Request__initialize(
                ListHardwareInterfaces_Request_* self);

            NDDSUSERDllExport
            RTIBool ListHardwareInterfaces_Request__initialize_ex(
                ListHardwareInterfaces_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ListHardwareInterfaces_Request__initialize_w_params(
                ListHardwareInterfaces_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ListHardwareInterfaces_Request__finalize(
                ListHardwareInterfaces_Request_* self);

            NDDSUSERDllExport
            void ListHardwareInterfaces_Request__finalize_ex(
                ListHardwareInterfaces_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ListHardwareInterfaces_Request__finalize_w_params(
                ListHardwareInterfaces_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ListHardwareInterfaces_Request__finalize_optional_members(
                ListHardwareInterfaces_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ListHardwareInterfaces_Request__copy(
                ListHardwareInterfaces_Request_* dst,
                const ListHardwareInterfaces_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace controller_manager_msgs  */
namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *ListHardwareInterfaces_Response_TYPENAME;

            struct ListHardwareInterfaces_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ListHardwareInterfaces_Response_TypeSupport;
            class ListHardwareInterfaces_Response_DataWriter;
            class ListHardwareInterfaces_Response_DataReader;
            #endif

            class ListHardwareInterfaces_Response_ 
            {
              public:
                typedef struct ListHardwareInterfaces_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ListHardwareInterfaces_Response_TypeSupport TypeSupport;
                typedef ListHardwareInterfaces_Response_DataWriter DataWriter;
                typedef ListHardwareInterfaces_Response_DataReader DataReader;
                #endif

                controller_manager_msgs::msg::dds_::HardwareInterface_Seq  command_interfaces_ ;
                controller_manager_msgs::msg::dds_::HardwareInterface_Seq  state_interfaces_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ListHardwareInterfaces_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ListHardwareInterfaces_Response_Seq, ListHardwareInterfaces_Response_);

            NDDSUSERDllExport
            RTIBool ListHardwareInterfaces_Response__initialize(
                ListHardwareInterfaces_Response_* self);

            NDDSUSERDllExport
            RTIBool ListHardwareInterfaces_Response__initialize_ex(
                ListHardwareInterfaces_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ListHardwareInterfaces_Response__initialize_w_params(
                ListHardwareInterfaces_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ListHardwareInterfaces_Response__finalize(
                ListHardwareInterfaces_Response_* self);

            NDDSUSERDllExport
            void ListHardwareInterfaces_Response__finalize_ex(
                ListHardwareInterfaces_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ListHardwareInterfaces_Response__finalize_w_params(
                ListHardwareInterfaces_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ListHardwareInterfaces_Response__finalize_optional_members(
                ListHardwareInterfaces_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ListHardwareInterfaces_Response__copy(
                ListHardwareInterfaces_Response_* dst,
                const ListHardwareInterfaces_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace controller_manager_msgs  */

#endif /* ListHardwareInterfaces_ */

