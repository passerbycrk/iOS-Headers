/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell;

@interface EKEventFacebookButtonDetailItem : EKEventDetailItem
{
    UITableViewCell *_cell;
}

- (void)layoutCellsForWidth:(float)arg1 position:(int)arg2;
- (void)eventViewController:(id)arg1 didSelectSubitem:(int)arg2;
- (id)cellForSubitemAtIndex:(int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (void)reset;

@end

