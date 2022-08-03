

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WorldState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WorldState__2139257776_h
#define WorldState__2139257776_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Pose_.h"
#include "geometry_msgs/msg/dds_connext/Twist_.h"
#include "geometry_msgs/msg/dds_connext/Wrench_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace gazebo_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *WorldState_TYPENAME;

            struct WorldState_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class WorldState_TypeSupport;
            class WorldState_DataWriter;
            class WorldState_DataReader;
            #endif

            class WorldState_ 
            {
              public:
                typedef struct WorldState_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WorldState_TypeSupport TypeSupport;
                typedef WorldState_DataWriter DataWriter;
                typedef WorldState_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_StringSeq  name_ ;
                geometry_msgs::msg::dds_::Pose_Seq  pose_ ;
                geometry_msgs::msg::dds_::Twist_Seq  twist_ ;
                geometry_msgs::msg::dds_::Wrench_Seq  wrench_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* WorldState__get_typecode(void); /* Type code */

            DDS_SEQUENCE(WorldState_Seq, WorldState_);

            NDDSUSERDllExport
            RTIBool WorldState__initialize(
                WorldState_* self);

            NDDSUSERDllExport
            RTIBool WorldState__initialize_ex(
                WorldState_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WorldState__initialize_w_params(
                WorldState_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void WorldState__finalize(
                WorldState_* self);

            NDDSUSERDllExport
            void WorldState__finalize_ex(
                WorldState_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WorldState__finalize_w_params(
                WorldState_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WorldState__finalize_optional_members(
                WorldState_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WorldState__copy(
                WorldState_* dst,
                const WorldState_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace gazebo_msgs  */

#endif /* WorldState_ */

