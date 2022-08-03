

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ListControllers_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ListControllers__91617079_h
#define ListControllers__91617079_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "controller_manager_msgs/msg/dds_connext/ControllerState_.h"
namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *ListControllers_Request_TYPENAME;

            struct ListControllers_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ListControllers_Request_TypeSupport;
            class ListControllers_Request_DataWriter;
            class ListControllers_Request_DataReader;
            #endif

            class ListControllers_Request_ 
            {
              public:
                typedef struct ListControllers_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ListControllers_Request_TypeSupport TypeSupport;
                typedef ListControllers_Request_DataWriter DataWriter;
                typedef ListControllers_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ListControllers_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ListControllers_Request_Seq, ListControllers_Request_);

            NDDSUSERDllExport
            RTIBool ListControllers_Request__initialize(
                ListControllers_Request_* self);

            NDDSUSERDllExport
            RTIBool ListControllers_Request__initialize_ex(
                ListControllers_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ListControllers_Request__initialize_w_params(
                ListControllers_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ListControllers_Request__finalize(
                ListControllers_Request_* self);

            NDDSUSERDllExport
            void ListControllers_Request__finalize_ex(
                ListControllers_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ListControllers_Request__finalize_w_params(
                ListControllers_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ListControllers_Request__finalize_optional_members(
                ListControllers_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ListControllers_Request__copy(
                ListControllers_Request_* dst,
                const ListControllers_Request_* src);

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

            extern const char *ListControllers_Response_TYPENAME;

            struct ListControllers_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ListControllers_Response_TypeSupport;
            class ListControllers_Response_DataWriter;
            class ListControllers_Response_DataReader;
            #endif

            class ListControllers_Response_ 
            {
              public:
                typedef struct ListControllers_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ListControllers_Response_TypeSupport TypeSupport;
                typedef ListControllers_Response_DataWriter DataWriter;
                typedef ListControllers_Response_DataReader DataReader;
                #endif

                controller_manager_msgs::msg::dds_::ControllerState_Seq  controller_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ListControllers_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ListControllers_Response_Seq, ListControllers_Response_);

            NDDSUSERDllExport
            RTIBool ListControllers_Response__initialize(
                ListControllers_Response_* self);

            NDDSUSERDllExport
            RTIBool ListControllers_Response__initialize_ex(
                ListControllers_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ListControllers_Response__initialize_w_params(
                ListControllers_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ListControllers_Response__finalize(
                ListControllers_Response_* self);

            NDDSUSERDllExport
            void ListControllers_Response__finalize_ex(
                ListControllers_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ListControllers_Response__finalize_w_params(
                ListControllers_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ListControllers_Response__finalize_optional_members(
                ListControllers_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ListControllers_Response__copy(
                ListControllers_Response_* dst,
                const ListControllers_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace controller_manager_msgs  */

#endif /* ListControllers_ */

