//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollViewDelegate.h"

@class NSIndexPath, NSString, SBAppSwitcherPeopleScrollView, SBScrollViewItemWrapper, UIView<SBPeopleScrollViewItemView>;

@protocol SBAppSwitcherPeopleScrollViewDelegate <UIScrollViewDelegate>
- (NSString *)peopleScrollView:(SBAppSwitcherPeopleScrollView *)arg1 placeholderStringForEmptySection:(unsigned long long)arg2;
- (NSString *)peopleScrollView:(SBAppSwitcherPeopleScrollView *)arg1 titleForSection:(unsigned long long)arg2;
- (struct CGSize)peopleScrollView:(SBAppSwitcherPeopleScrollView *)arg1 sizeForItem:(id)arg2 expanded:(_Bool)arg3;
- (struct CGSize)peopleScrollView:(SBAppSwitcherPeopleScrollView *)arg1 sizeForPlaceholderForSection:(long long)arg2;
- (UIView<SBPeopleScrollViewItemView> *)peopleScrollView:(SBAppSwitcherPeopleScrollView *)arg1 viewForItem:(id <NSCopying>)arg2;
- (SBScrollViewItemWrapper *)peopleScrollView:(SBAppSwitcherPeopleScrollView *)arg1 itemAtIndexPath:(NSIndexPath *)arg2;
- (long long)peopleScrollView:(SBAppSwitcherPeopleScrollView *)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInPeopleScrollView:(SBAppSwitcherPeopleScrollView *)arg1;
@end
