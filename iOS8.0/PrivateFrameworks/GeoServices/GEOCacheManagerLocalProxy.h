//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOCacheManaging.h"

@class NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface GEOCacheManagerLocalProxy : NSObject <GEOCacheManaging>
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (BOOL)_isKey:(id)arg1 subsetOf:(id)arg2;
- (int)invalidationStateForPlace:(id)arg1;
- (BOOL)_invalidationDataHasExpiredByVersion:(unsigned int)arg1 domains:(id)arg2;
- (int)_invalidationStateForTTL:(double)arg1 timestamp:(double)arg2 version:(unsigned int)arg3 versionDomains:(id)arg4;
- (int)_invalidationDataHasExpired:(id)arg1;
- (void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)versionsForDomains:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
