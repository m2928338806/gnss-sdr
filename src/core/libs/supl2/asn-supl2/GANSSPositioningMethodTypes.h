/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-parameter-extensions"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_GANSSPositioningMethodTypes_H_
#define	_GANSSPositioningMethodTypes_H_


#include "asn_application.h"

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GANSSPositioningMethodTypes */
typedef struct GANSSPositioningMethodTypes {
	BOOLEAN_t	 setAssisted;
	BOOLEAN_t	 setBased;
	BOOLEAN_t	 autonomous;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSPositioningMethodTypes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSPositioningMethodTypes;
extern asn_SEQUENCE_specifics_t asn_SPC_GANSSPositioningMethodTypes_specs_1;
extern asn_TYPE_member_t asn_MBR_GANSSPositioningMethodTypes_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _GANSSPositioningMethodTypes_H_ */
#include <asn_internal.h>