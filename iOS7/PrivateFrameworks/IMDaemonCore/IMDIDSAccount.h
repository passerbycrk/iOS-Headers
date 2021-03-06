/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMDaemonCore/IMDAccount.h>

@class IDSAccount;

@interface IMDIDSAccount : IMDAccount
{
    IDSAccount *_idsAccount;
}

@property(readonly, nonatomic) IDSAccount *idsAccount; // @synthesize idsAccount=_idsAccount;
- (id)accountDefaults;
- (void)writeAccountDefaults:(id)arg1;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3 idsAccount:(id)arg4;

@end

