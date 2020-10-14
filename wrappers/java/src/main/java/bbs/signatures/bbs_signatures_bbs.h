/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class bbs_signatures_Bbs */

#ifndef _Included_bbs_signatures_Bbs
#define _Included_bbs_signatures_Bbs
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     bbs_signatures_Bbs
 * Method:    bls_public_key_g1_size
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bls_1public_1key_1g1_1size
  (JNIEnv *, jclass);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bls_public_key_g2_size
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bls_1public_1key_1g2_1size
  (JNIEnv *, jclass);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    blinding_factor_size
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_blinding_1factor_1size
  (JNIEnv *, jclass);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bls_secret_key_size
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bls_1secret_1key_1size
  (JNIEnv *, jclass);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bls_generate_g1_key
 * Signature: ([B[B[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bls_1generate_1g1_1key
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bls_generate_g2_key
 * Signature: ([B[B[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bls_1generate_1g2_1key
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bls_generate_blinded_g1_key
 * Signature: ([B[B[B[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bls_1generate_1blinded_1g1_1key
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bls_generate_blinded_g2_key
 * Signature: ([B[B[B[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bls_1generate_1blinded_1g2_1key
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bls_secret_key_to_bbs_key
 * Signature: ([BI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_bbs_signatures_Bbs_bls_1secret_1key_1to_1bbs_1key
  (JNIEnv *, jclass, jbyteArray, jint);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bls_public_key_to_bbs_key
 * Signature: ([BI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_bbs_signatures_Bbs_bls_1public_1key_1to_1bbs_1key
  (JNIEnv *, jclass, jbyteArray, jint);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_signature_size
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1signature_1size
  (JNIEnv *, jclass);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_sign_init
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_bbs_signatures_Bbs_bbs_1sign_1init
  (JNIEnv *, jclass);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_sign_set_secret_key
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1sign_1set_1secret_1key
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_sign_set_public_key
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1sign_1set_1public_1key
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_sign_add_message_bytes
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1sign_1add_1message_1bytes
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_sign_add_message_prehashed
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1sign_1add_1message_1prehashed
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_sign_finish
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1sign_1finish
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_verify_init
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_bbs_signatures_Bbs_bbs_1verify_1init
  (JNIEnv *, jclass);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_verify_add_message_bytes
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1verify_1add_1message_1bytes
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_verify_add_message_prehashed
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1verify_1add_1message_1prehashed
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_verify_set_public_key
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1verify_1set_1public_1key
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_verify_set_signature
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1verify_1set_1signature
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_verify_finish
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1verify_1finish
  (JNIEnv *, jclass, jlong);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_blind_signature_size
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1blind_1signature_1size
  (JNIEnv *, jclass);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_blind_commitment_init
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_bbs_signatures_Bbs_bbs_1blind_1commitment_1init
  (JNIEnv *, jclass);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_blind_commitment_add_message_bytes
 * Signature: (JI[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1blind_1commitment_1add_1message_1bytes
  (JNIEnv *, jclass, jlong, jint, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_blind_commitment_add_prehashed
 * Signature: (JI[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1blind_1commitment_1add_1prehashed
  (JNIEnv *, jclass, jlong, jint, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_blind_commitment_set_public_key
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1blind_1commitment_1set_1public_1key
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_blind_commitment_set_nonce_bytes
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1blind_1commitment_1set_1nonce_1bytes
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_blind_commitment_finish
 * Signature: (J[B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_bbs_signatures_Bbs_bbs_1blind_1commitment_1finish
  (JNIEnv *, jclass, jlong, jbyteArray, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_blind_sign_init
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_bbs_signatures_Bbs_bbs_1blind_1sign_1init
  (JNIEnv *, jclass);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_blind_sign_set_secret_key
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1blind_1sign_1set_1secret_1key
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_blind_sign_set_public_key
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1blind_1sign_1set_1public_1key
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_blind_sign_set_commitment
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1blind_1sign_1set_1commitment
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_blind_sign_add_message_bytes
 * Signature: (JI[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1blind_1sign_1add_1message_1bytes
  (JNIEnv *, jclass, jlong, jint, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_blind_sign_add_prehashed
 * Signature: (JI[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1blind_1sign_1add_1prehashed
  (JNIEnv *, jclass, jlong, jint, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_blind_sign_finish
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1blind_1sign_1finish
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_unblind_signature
 * Signature: ([B[B[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1unblind_1signature
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_create_proof_context_init
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_bbs_signatures_Bbs_bbs_1create_1proof_1context_1init
  (JNIEnv *, jclass);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_create_proof_context_set_public_key
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1create_1proof_1context_1set_1public_1key
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_create_proof_context_set_signature
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1create_1proof_1context_1set_1signature
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_create_proof_context_set_nonce_bytes
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1create_1proof_1context_1set_1nonce_1bytes
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_create_proof_context_add_proof_message_bytes
 * Signature: (J[BI[B)I
 */
JNIEXPORT jint JNICALL Java_bbs_signatures_Bbs_bbs_1create_1proof_1context_1add_1proof_1message_1bytes
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jbyteArray);

/*
 * Class:     bbs_signatures_Bbs
 * Method:    bbs_create_proof_context_finish
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_bbs_signatures_Bbs_bbs_1create_1proof_1context_1finish
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
