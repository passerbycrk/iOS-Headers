//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AITXPCConnectionDelegate.h"

@class AITXPCConnection, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface AITTarget : NSObject <AITXPCConnectionDelegate>
{
    int _notifyToken;
    NSMutableDictionary *_observerRecords;
    AITXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_clientQueue;
    double _startTime;
    NSMutableArray *_queuedProbes;
    NSObject<OS_dispatch_queue> *_rpcDispatchQueue;
    NSString *_rpcSelectorPrefix;
    id _rpcTarget;
    NSObject<OS_dispatch_source> *_watchdogSource;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedTarget;
- (void)xpcConnectionFailed:(id)arg1;
- (void)xpcConnectionUnhandledMessage:(id)arg1;
- (void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3;
- (void)_sendAckForToken:(id)arg1 success:(BOOL)arg2 returnValue:(id)arg3 details:(id)arg4;
- (void)_flushQueuedProbes;
- (void)_probeBarrier:(CDUnknownBlockType)arg1;
- (void)_fireProbe:(id)arg1 withArgumentDictionary:(id)arg2;
- (BOOL)_probeIsEnabled:(id)arg1;
@property(nonatomic) NSObject<OS_dispatch_queue> *rpcDispatchQueue;
@property(copy, nonatomic) NSString *rpcSelectorPrefix;
@property(retain, nonatomic) id rpcTarget;
- (id)_rpcTarget;
- (void)removeObserver:(id)arg1 forMessage:(id)arg2;
- (void)addObserver:(id)arg1 forMessage:(id)arg2 dispatchQueue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)_setupXPCConnectionIfNeeded;
- (BOOL)_appIsWhitelisted;
- (void)_setupWatchdog;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

