/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface SUDelayedQuitController : NSObject
{
    int _delayTerminateCount;
    NSMutableArray *_longLivedViewControllers;
}

+ (void)endDelayingTerminate;
+ (void)beginDelayingTerminate;
+ (BOOL)isDelayingTerminate;
+ (id)checkedInViewControllerOfClass:(Class)arg1;
+ (BOOL)viewControllerIsLongLived:(id)arg1;
+ (void)checkOutLongLivedViewController:(id)arg1;
+ (void)checkInLongLivedViewController:(id)arg1;
+ (id)sharedInstance;
- (BOOL)_viewControllerIsLongLived:(id)arg1;
- (BOOL)_isDelayingTerminate;
- (void)_endDelayingTerminate;
- (id)_checkedInViewControllerOfClass:(Class)arg1;
- (void)_checkOutLongLivedViewController:(id)arg1;
- (void)_checkInLongLivedViewController:(id)arg1;
- (void)_beginDelayingTerminate;
- (void)dealloc;

@end
