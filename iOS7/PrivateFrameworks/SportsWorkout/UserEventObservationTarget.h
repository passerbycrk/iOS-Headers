/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SportsWorkout/ObservationTarget.h>

@class NSString;

@interface UserEventObservationTarget : ObservationTarget
{
    NSString *_event;
}

+ (id)targetWithEvent:(id)arg1 selector:(SEL)arg2;
@property(retain, nonatomic) NSString *event; // @synthesize event=_event;
- (id)description;
- (void)dealloc;

@end

