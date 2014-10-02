//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCController, NSNumber, NSString;

@protocol GameControllerDaemon <NSObject>
- (void)requestConnectedHosts;
- (void)controllerWithUDID:(unsigned int)arg1 setValue:(float)arg2 forElement:(int)arg3 forward:(BOOL)arg4;
- (void)removeController:(GCController *)arg1 forward:(BOOL)arg2;
- (void)addController:(GCController *)arg1 forward:(BOOL)arg2;
- (void)startBonjourService;
- (void)startForwardingToApplicationNamed:(NSString *)arg1 pid:(NSNumber *)arg2 bundlePath:(NSString *)arg3;
- (void)ping;
@end
