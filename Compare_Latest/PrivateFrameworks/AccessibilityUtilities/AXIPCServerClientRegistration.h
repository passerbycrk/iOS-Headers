/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface AXIPCServerClientRegistration : NSObject
{
    unsigned int _port;
    NSString *_identifier;
}

@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int port; // @synthesize port=_port;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end
