/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TcpkaliOrchestration"
 * 	found in "TcpkaliOrchestration.asn1"
 * 	`asn1c -gen-OER -gen-PER -pdu=TcpkaliMessage`
 */

#ifndef	_PositiveReal_H_
#define	_PositiveReal_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeReal.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PositiveReal */
typedef float	 PositiveReal_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PositiveReal_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PositiveReal;
extern const asn_NativeReal_specifics_t asn_SPC_PositiveReal_specs_1;
asn_struct_free_f PositiveReal_free;
asn_struct_print_f PositiveReal_print;
asn_constr_check_f PositiveReal_constraint;
ber_type_decoder_f PositiveReal_decode_ber;
der_type_encoder_f PositiveReal_encode_der;
xer_type_decoder_f PositiveReal_decode_xer;
xer_type_encoder_f PositiveReal_encode_xer;
oer_type_decoder_f PositiveReal_decode_oer;
oer_type_encoder_f PositiveReal_encode_oer;
per_type_decoder_f PositiveReal_decode_uper;
per_type_encoder_f PositiveReal_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PositiveReal_H_ */
#include <asn_internal.h>
