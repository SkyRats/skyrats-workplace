

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ODEPhysics_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ODEPhysics__758935278_h
#define ODEPhysics__758935278_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace gazebo_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *ODEPhysics_TYPENAME;

            struct ODEPhysics_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ODEPhysics_TypeSupport;
            class ODEPhysics_DataWriter;
            class ODEPhysics_DataReader;
            #endif

            class ODEPhysics_ 
            {
              public:
                typedef struct ODEPhysics_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ODEPhysics_TypeSupport TypeSupport;
                typedef ODEPhysics_DataWriter DataWriter;
                typedef ODEPhysics_DataReader DataReader;
                #endif

                DDS_Boolean   auto_disable_bodies_ ;
                DDS_UnsignedLong   sor_pgs_precon_iters_ ;
                DDS_UnsignedLong   sor_pgs_iters_ ;
                DDS_Double   sor_pgs_w_ ;
                DDS_Double   sor_pgs_rms_error_tol_ ;
                DDS_Double   contact_surface_layer_ ;
                DDS_Double   contact_max_correcting_vel_ ;
                DDS_Double   cfm_ ;
                DDS_Double   erp_ ;
                DDS_UnsignedLong   max_contacts_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ODEPhysics__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ODEPhysics_Seq, ODEPhysics_);

            NDDSUSERDllExport
            RTIBool ODEPhysics__initialize(
                ODEPhysics_* self);

            NDDSUSERDllExport
            RTIBool ODEPhysics__initialize_ex(
                ODEPhysics_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ODEPhysics__initialize_w_params(
                ODEPhysics_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ODEPhysics__finalize(
                ODEPhysics_* self);

            NDDSUSERDllExport
            void ODEPhysics__finalize_ex(
                ODEPhysics_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ODEPhysics__finalize_w_params(
                ODEPhysics_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ODEPhysics__finalize_optional_members(
                ODEPhysics_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ODEPhysics__copy(
                ODEPhysics_* dst,
                const ODEPhysics_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace gazebo_msgs  */

#endif /* ODEPhysics_ */

