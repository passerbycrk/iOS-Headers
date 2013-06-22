/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSURLCredential, UIAlertView;

@interface WebUIAuthenticationManager : NSObject
{
    NSMutableArray *_authenticationChallenges;
    NSURLCredential *_credentials;
    UIAlertView *_authenticationView;
    id _delegate;
    BOOL _isShowingAuthenticationPanel;
}

- (id)authenticationChallenge;
- (void)setShowingAuthentication:(BOOL)arg1;
- (void)sheetReturnKeyPressed:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)dealloc;
- (void)cancelAuthentication;
- (void)setDelegate:(id)arg1;
- (void)addAuthenticationChallenge:(id)arg1;
- (void)addAuthenticationChallenge:(id)arg1 displayPanel:(BOOL)arg2;
- (void)removeAuthenticationChallenge:(id)arg1;

@end
