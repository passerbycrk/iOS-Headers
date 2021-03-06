/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKInviteInternal, GKPlayer, NSData, NSString;

@interface GKInvite : NSObject
{
    GKPlayer *_invitingPlayer;
    GKInviteInternal *_internal;
    BOOL _cancelled;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) GKInviteInternal *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) GKPlayer *invitingPlayer; // @synthesize invitingPlayer=_invitingPlayer;
- (id)description;
@property(readonly, nonatomic, getter=isHosted) BOOL hosted; // @dynamic hosted;
@property(readonly, nonatomic) NSString *inviter; // @dynamic inviter;
- (void)dealloc;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSString *inviteID; // @dynamic inviteID;
@property(readonly, nonatomic) BOOL isNearby; // @dynamic isNearby;
@property(readonly, nonatomic) NSString *message; // @dynamic message;
@property(readonly, nonatomic) unsigned int playerAttributes; // @dynamic playerAttributes;
@property(readonly, nonatomic) unsigned int playerGroup; // @dynamic playerGroup;
@property(readonly, nonatomic) NSData *sessionToken; // @dynamic sessionToken;

@end

