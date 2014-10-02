//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AXHearingAidSupport/AXHARemoteController.h>

#import "AXHARemoteUpdateProtocol.h"
#import "NSNetServiceDelegate.h"

@class AXHATimer, AXRemoteHearingAidDevice, NSString;

@interface AXHearingSlaveController : AXHARemoteController <NSNetServiceDelegate, AXHARemoteUpdateProtocol>
{
    struct __CFSocket *_ipv4socket;
    struct __CFSocket *_ipv6socket;
    AXHATimer *_resolveTimer;
    BOOL _isVisible;
    AXRemoteHearingAidDevice *_device;
    CDUnknownBlockType _searchCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType searchCompletion; // @synthesize searchCompletion=_searchCompletion;
@property(retain, nonatomic) AXRemoteHearingAidDevice *device; // @synthesize device=_device;
- (void)writeValue:(id)arg1 forProperty:(int)arg2 forDeviceID:(id)arg3;
- (void)updateProperty:(int)arg1 forDeviceID:(id)arg2;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (BOOL)isSlave;
- (void)resetConnection;
- (void)closeConnectionWithError:(id)arg1;
- (void)openConnectionIfNecessary;
- (void)validatePairedAid;
- (void)receivedData:(id)arg1;
- (void)acceptConnection:(int)arg1;
- (void)resolveMasterWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)setVisible:(BOOL)arg1;
- (BOOL)initialize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
