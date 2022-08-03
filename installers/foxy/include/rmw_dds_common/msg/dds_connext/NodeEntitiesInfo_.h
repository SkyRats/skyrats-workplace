

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NodeEntitiesInfo_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NodeEntitiesInfo__1494420206_h
#define NodeEntitiesInfo__1494420206_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "rmw_dds_common/msg/dds_connext/Gid_.h"
namespace rmw_dds_common {
    namespace msg {
        namespace dds_ {

            extern const char *NodeEntitiesInfo_TYPENAME;

            struct NodeEntitiesInfo_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NodeEntitiesInfo_TypeSupport;
            class NodeEntitiesInfo_DataWriter;
            class NodeEntitiesInfo_DataReader;
            #endif

            class NodeEntitiesInfo_ 
            {
              public:
                typedef struct NodeEntitiesInfo_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NodeEntitiesInfo_TypeSupport TypeSupport;
                typedef NodeEntitiesInfo_DataWriter DataWriter;
                typedef NodeEntitiesInfo_DataReader DataReader;
                #endif

                DDS_Char *   node_namespace_ ;
                DDS_Char *   node_name_ ;
                rmw_dds_common::msg::dds_::Gid_Seq  reader_gid_seq_ ;
                rmw_dds_common::msg::dds_::Gid_Seq  writer_gid_seq_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* NodeEntitiesInfo__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NodeEntitiesInfo_Seq, NodeEntitiesInfo_);

            NDDSUSERDllExport
            RTIBool NodeEntitiesInfo__initialize(
                NodeEntitiesInfo_* self);

            NDDSUSERDllExport
            RTIBool NodeEntitiesInfo__initialize_ex(
                NodeEntitiesInfo_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NodeEntitiesInfo__initialize_w_params(
                NodeEntitiesInfo_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NodeEntitiesInfo__finalize(
                NodeEntitiesInfo_* self);

            NDDSUSERDllExport
            void NodeEntitiesInfo__finalize_ex(
                NodeEntitiesInfo_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NodeEntitiesInfo__finalize_w_params(
                NodeEntitiesInfo_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NodeEntitiesInfo__finalize_optional_members(
                NodeEntitiesInfo_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NodeEntitiesInfo__copy(
                NodeEntitiesInfo_* dst,
                const NodeEntitiesInfo_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rmw_dds_common  */

#endif /* NodeEntitiesInfo_ */

