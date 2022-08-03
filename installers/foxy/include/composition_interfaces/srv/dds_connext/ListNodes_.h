

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ListNodes_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ListNodes__1033251661_h
#define ListNodes__1033251661_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace composition_interfaces {
    namespace srv {
        namespace dds_ {

            extern const char *ListNodes_Request_TYPENAME;

            struct ListNodes_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ListNodes_Request_TypeSupport;
            class ListNodes_Request_DataWriter;
            class ListNodes_Request_DataReader;
            #endif

            class ListNodes_Request_ 
            {
              public:
                typedef struct ListNodes_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ListNodes_Request_TypeSupport TypeSupport;
                typedef ListNodes_Request_DataWriter DataWriter;
                typedef ListNodes_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ListNodes_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ListNodes_Request_Seq, ListNodes_Request_);

            NDDSUSERDllExport
            RTIBool ListNodes_Request__initialize(
                ListNodes_Request_* self);

            NDDSUSERDllExport
            RTIBool ListNodes_Request__initialize_ex(
                ListNodes_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ListNodes_Request__initialize_w_params(
                ListNodes_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ListNodes_Request__finalize(
                ListNodes_Request_* self);

            NDDSUSERDllExport
            void ListNodes_Request__finalize_ex(
                ListNodes_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ListNodes_Request__finalize_w_params(
                ListNodes_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ListNodes_Request__finalize_optional_members(
                ListNodes_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ListNodes_Request__copy(
                ListNodes_Request_* dst,
                const ListNodes_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace composition_interfaces  */
namespace composition_interfaces {
    namespace srv {
        namespace dds_ {

            extern const char *ListNodes_Response_TYPENAME;

            struct ListNodes_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ListNodes_Response_TypeSupport;
            class ListNodes_Response_DataWriter;
            class ListNodes_Response_DataReader;
            #endif

            class ListNodes_Response_ 
            {
              public:
                typedef struct ListNodes_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ListNodes_Response_TypeSupport TypeSupport;
                typedef ListNodes_Response_DataWriter DataWriter;
                typedef ListNodes_Response_DataReader DataReader;
                #endif

                DDS_StringSeq  full_node_names_ ;
                DDS_UnsignedLongLongSeq  unique_ids_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ListNodes_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ListNodes_Response_Seq, ListNodes_Response_);

            NDDSUSERDllExport
            RTIBool ListNodes_Response__initialize(
                ListNodes_Response_* self);

            NDDSUSERDllExport
            RTIBool ListNodes_Response__initialize_ex(
                ListNodes_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ListNodes_Response__initialize_w_params(
                ListNodes_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ListNodes_Response__finalize(
                ListNodes_Response_* self);

            NDDSUSERDllExport
            void ListNodes_Response__finalize_ex(
                ListNodes_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ListNodes_Response__finalize_w_params(
                ListNodes_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ListNodes_Response__finalize_optional_members(
                ListNodes_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ListNodes_Response__copy(
                ListNodes_Response_* dst,
                const ListNodes_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace composition_interfaces  */

#endif /* ListNodes_ */

