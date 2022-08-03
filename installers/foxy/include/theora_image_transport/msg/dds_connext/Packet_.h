

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Packet_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Packet__2097600945_h
#define Packet__2097600945_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace theora_image_transport {
    namespace msg {
        namespace dds_ {

            extern const char *Packet_TYPENAME;

            struct Packet_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Packet_TypeSupport;
            class Packet_DataWriter;
            class Packet_DataReader;
            #endif

            class Packet_ 
            {
              public:
                typedef struct Packet_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Packet_TypeSupport TypeSupport;
                typedef Packet_DataWriter DataWriter;
                typedef Packet_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_OctetSeq  data_ ;
                DDS_Long   b_o_s_ ;
                DDS_Long   e_o_s_ ;
                DDS_LongLong   granulepos_ ;
                DDS_LongLong   packetno_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Packet__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Packet_Seq, Packet_);

            NDDSUSERDllExport
            RTIBool Packet__initialize(
                Packet_* self);

            NDDSUSERDllExport
            RTIBool Packet__initialize_ex(
                Packet_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Packet__initialize_w_params(
                Packet_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Packet__finalize(
                Packet_* self);

            NDDSUSERDllExport
            void Packet__finalize_ex(
                Packet_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Packet__finalize_w_params(
                Packet_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Packet__finalize_optional_members(
                Packet_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Packet__copy(
                Packet_* dst,
                const Packet_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace theora_image_transport  */

#endif /* Packet_ */

