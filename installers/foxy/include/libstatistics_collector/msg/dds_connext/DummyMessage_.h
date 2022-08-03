

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DummyMessage_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DummyMessage__1804993559_h
#define DummyMessage__1804993559_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace libstatistics_collector {
    namespace msg {
        namespace dds_ {

            extern const char *DummyMessage_TYPENAME;

            struct DummyMessage_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DummyMessage_TypeSupport;
            class DummyMessage_DataWriter;
            class DummyMessage_DataReader;
            #endif

            class DummyMessage_ 
            {
              public:
                typedef struct DummyMessage_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DummyMessage_TypeSupport TypeSupport;
                typedef DummyMessage_DataWriter DataWriter;
                typedef DummyMessage_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DummyMessage__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DummyMessage_Seq, DummyMessage_);

            NDDSUSERDllExport
            RTIBool DummyMessage__initialize(
                DummyMessage_* self);

            NDDSUSERDllExport
            RTIBool DummyMessage__initialize_ex(
                DummyMessage_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DummyMessage__initialize_w_params(
                DummyMessage_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DummyMessage__finalize(
                DummyMessage_* self);

            NDDSUSERDllExport
            void DummyMessage__finalize_ex(
                DummyMessage_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DummyMessage__finalize_w_params(
                DummyMessage_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DummyMessage__finalize_optional_members(
                DummyMessage_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DummyMessage__copy(
                DummyMessage_* dst,
                const DummyMessage_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace libstatistics_collector  */

#endif /* DummyMessage_ */

