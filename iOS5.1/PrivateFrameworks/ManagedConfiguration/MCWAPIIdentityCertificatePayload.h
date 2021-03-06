/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSData;

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload
{
    NSData *_pemData;
}

+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (void)dealloc;
- (struct __SecCertificate *)copyCertificate;
- (struct __SecIdentity *)copyIdentityFromKeychain;
- (BOOL)isIdentity;
- (id)description;
@property(readonly) NSData *pemData; // @synthesize pemData=_pemData;

@end

