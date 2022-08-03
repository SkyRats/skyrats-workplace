

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Metadata_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Metadata__1205104567_h
#define Metadata__1205104567_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace realsense2_camera_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Metadata_TYPENAME;

            struct Metadata_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Metadata_TypeSupport;
            class Metadata_DataWriter;
            class Metadata_DataReader;
            #endif

            class Metadata_ 
            {
              public:
                typedef struct Metadata_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Metadata_TypeSupport TypeSupport;
                typedef Metadata_DataWriter DataWriter;
                typedef Metadata_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Char *   json_data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Metadata__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Metadata_Seq, Metadata_);

            NDDSUSERDllExport
            RTIBool Metadata__initialize(
                Metadata_* self);

            NDDSUSERDllExport
            RTIBool Metadata__initialize_ex(
                Metadata_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Metadata__initialize_w_params(
                Metadata_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Metadata__finalize(
                Metadata_* self);

            NDDSUSERDllExport
            void Metadata__finalize_ex(
                Metadata_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Metadata__finalize_w_params(
                Metadata_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Metadata__finalize_optional_members(
                Metadata_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Metadata__copy(
                Metadata_* dst,
                const Metadata_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace realsense2_camera_msgs  */

#endif /* Metadata_ */

