

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ListControllerTypes_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ListControllerTypes__843727314_h
#define ListControllerTypes__843727314_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *ListControllerTypes_Request_TYPENAME;

            struct ListControllerTypes_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ListControllerTypes_Request_TypeSupport;
            class ListControllerTypes_Request_DataWriter;
            class ListControllerTypes_Request_DataReader;
            #endif

            class ListControllerTypes_Request_ 
            {
              public:
                typedef struct ListControllerTypes_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ListControllerTypes_Request_TypeSupport TypeSupport;
                typedef ListControllerTypes_Request_DataWriter DataWriter;
                typedef ListControllerTypes_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ListControllerTypes_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ListControllerTypes_Request_Seq, ListControllerTypes_Request_);

            NDDSUSERDllExport
            RTIBool ListControllerTypes_Request__initialize(
                ListControllerTypes_Request_* self);

            NDDSUSERDllExport
            RTIBool ListControllerTypes_Request__initialize_ex(
                ListControllerTypes_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ListControllerTypes_Request__initialize_w_params(
                ListControllerTypes_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ListControllerTypes_Request__finalize(
                ListControllerTypes_Request_* self);

            NDDSUSERDllExport
            void ListControllerTypes_Request__finalize_ex(
                ListControllerTypes_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ListControllerTypes_Request__finalize_w_params(
                ListControllerTypes_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ListControllerTypes_Request__finalize_optional_members(
                ListControllerTypes_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ListControllerTypes_Request__copy(
                ListControllerTypes_Request_* dst,
                const ListControllerTypes_Request_* src);

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

            extern const char *ListControllerTypes_Response_TYPENAME;

            struct ListControllerTypes_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ListControllerTypes_Response_TypeSupport;
            class ListControllerTypes_Response_DataWriter;
            class ListControllerTypes_Response_DataReader;
            #endif

            class ListControllerTypes_Response_ 
            {
              public:
                typedef struct ListControllerTypes_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ListControllerTypes_Response_TypeSupport TypeSupport;
                typedef ListControllerTypes_Response_DataWriter DataWriter;
                typedef ListControllerTypes_Response_DataReader DataReader;
                #endif

                DDS_StringSeq  types_ ;
                DDS_StringSeq  base_classes_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ListControllerTypes_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ListControllerTypes_Response_Seq, ListControllerTypes_Response_);

            NDDSUSERDllExport
            RTIBool ListControllerTypes_Response__initialize(
                ListControllerTypes_Response_* self);

            NDDSUSERDllExport
            RTIBool ListControllerTypes_Response__initialize_ex(
                ListControllerTypes_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ListControllerTypes_Response__initialize_w_params(
                ListControllerTypes_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ListControllerTypes_Response__finalize(
                ListControllerTypes_Response_* self);

            NDDSUSERDllExport
            void ListControllerTypes_Response__finalize_ex(
                ListControllerTypes_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ListControllerTypes_Response__finalize_w_params(
                ListControllerTypes_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ListControllerTypes_Response__finalize_optional_members(
                ListControllerTypes_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ListControllerTypes_Response__copy(
                ListControllerTypes_Response_* dst,
                const ListControllerTypes_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace controller_manager_msgs  */

#endif /* ListControllerTypes_ */

