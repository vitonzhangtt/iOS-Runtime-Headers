/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData;



@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload 
{
    NSData *_pemData;
}

@property(readonly) NSData *pemData;

+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(NSUInteger)arg1;

- (id)description;
- (void)dealloc;
- (id)pemData;
- (struct __SecCertificate { }*)copyCertificate;
- (struct __SecIdentity { }*)copyIdentityFromKeychain;
- (BOOL)isIdentity;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;

@end