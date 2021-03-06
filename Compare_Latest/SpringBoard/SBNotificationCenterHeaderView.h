//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_SBFVibrantTableViewHeaderFooterView.h"

#import "SBModalLayoutCaching.h"

@class NSString, SBNotificationsClearButton, UIImageView, UILabel;

@interface SBNotificationCenterHeaderView : _SBFVibrantTableViewHeaderFooterView <SBModalLayoutCaching>
{
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    SBNotificationsClearButton *_clearButton;
    CDUnknownBlockType _xAction;
    CDUnknownBlockType _clearAction;
    _Bool _showingClear;
    long long _layoutMode;
}

+ (double)_titleBaseline;
+ (id)titleFont;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long layoutMode; // @synthesize layoutMode=_layoutMode;
- (void)buttonAction:(id)arg1;
- (void)layoutSubviews;
- (void)resetAnimated:(_Bool)arg1;
- (struct CGRect)_clearButtonFrame;
- (struct CGRect)contentBounds;
- (void)setTarget:(id)arg1 forClearButtonAction:(CDUnknownBlockType)arg2;
- (void)setTarget:(id)arg1 forClearButtonVisibleAction:(CDUnknownBlockType)arg2;
- (void)setHasClearButton:(_Bool)arg1;
- (void)_removeClearButton;
- (void)_addClearButton;
- (void)setBackgroundView:(id)arg1;
- (long long)initialGraphicsQuality;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

