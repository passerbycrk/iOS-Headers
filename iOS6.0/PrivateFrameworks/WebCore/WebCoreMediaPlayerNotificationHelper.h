/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface WebCoreMediaPlayerNotificationHelper : NSObject
{
    struct MediaPlayerPrivateIOS *_client;
    BOOL _deferredPropertiesScheduled;
}

- (void)scheduleDeferredPropertiesWithOptionalDelay:(id)arg1;
- (void)schedulePrepareToPlayWithOptionalDelay:(id)arg1;
- (void)deliverNotification:(id)arg1;
- (void)delayNotification:(int)arg1;
- (void)cancelPendingRequests;
- (void)disconnect;
- (id)initWithClient:(struct MediaPlayerPrivateIOS *)arg1;

@end

