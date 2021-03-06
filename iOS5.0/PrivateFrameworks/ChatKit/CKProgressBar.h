/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIImageView;

@interface CKProgressBar : UIView
{
    UIImageView *_well;
    UIImageView *_fill;
    float _progressValue;
}

+ (float)defaultHeight;
+ (float)_minFillWidth;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
@property(nonatomic) float progressValue; // @synthesize progressValue=_progressValue;
- (void)_setupFillFrame;
- (void)_stopAnimating;

@end

