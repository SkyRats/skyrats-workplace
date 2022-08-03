

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParticipantEntitiesInfo_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ParticipantEntitiesInfo__569828908_h
#define ParticipantEntitiesInfo__569828908_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "rmw_dds_common/msg/dds_connext/Gid_.h"
#include "rmw_dds_common/msg/dds_connext/NodeEntitiesInfo_.h"
namespace rmw_dds_common {
    namespace msg {
        namespace dds_ {

            extern const char *ParticipantEntitiesInfo_TYPENAME;

            struct ParticipantEntitiesInfo_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParticipantEntitiesInfo_TypeSupport;
            class ParticipantEntitiesInfo_DataWriter;
            class ParticipantEntitiesInfo_DataReader;
            #endif

            class ParticipantEntitiesInfo_ 
            {
              public:
                typedef struct ParticipantEntitiesInfo_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParticipantEntitiesInfo_TypeSupport TypeSupport;
                typedef ParticipantEntitiesInfo_DataWriter DataWriter;
                typedef ParticipantEntitiesInfo_DataReader DataReader;
                #endif

                rmw_dds_common::msg::dds_::Gid_   gid_ ;
                rmw_dds_common::msg::dds_::NodeEntitiesInfo_Seq  node_entities_info_seq_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ParticipantEntitiesInfo__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParticipantEntitiesInfo_Seq, ParticipantEntitiesInfo_);

            NDDSUSERDllExport
            RTIBool ParticipantEntitiesInfo__initialize(
                ParticipantEntitiesInfo_* self);

            NDDSUSERDllExport
            RTIBool ParticipantEntitiesInfo__initialize_ex(
                ParticipantEntitiesInfo_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParticipantEntitiesInfo__initialize_w_params(
                ParticipantEntitiesInfo_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParticipantEntitiesInfo__finalize(
                ParticipantEntitiesInfo_* self);

            NDDSUSERDllExport
            void ParticipantEntitiesInfo__finalize_ex(
                ParticipantEntitiesInfo_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParticipantEntitiesInfo__finalize_w_params(
                ParticipantEntitiesInfo_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParticipantEntitiesInfo__finalize_optional_members(
                ParticipantEntitiesInfo_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParticipantEntitiesInfo__copy(
                ParticipantEntitiesInfo_* dst,
                const ParticipantEntitiesInfo_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rmw_dds_common  */

#endif /* ParticipantEntitiesInfo_ */

