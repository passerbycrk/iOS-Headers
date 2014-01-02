/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@class UIColor, _SLSheetMaskLayer;

// Not exported
@interface SLSheetMasklayer : CALayer
{
    CALayer *_topLayer;
    CALayer *_leftLayer;
    CALayer *_bottomLayer;
    CALayer *_rightLayer;
    _SLSheetMaskLayer *_sheetMaskLayer;
    CALayer *_solidSheetMaskLayer;
    UIColor *_backgroundColor;
    struct CGRect _lastBounds;
    struct CGRect _lastMaskRect;
    double _clipCornerRadius;
    UIColor *_clipBackgroundColor;
}

@property(retain, nonatomic) UIColor *clipBackgroundColor; // @synthesize clipBackgroundColor=_clipBackgroundColor;
@property(nonatomic) double clipCornerRadius; // @synthesize clipCornerRadius=_clipCornerRadius;
- (void).cxx_destruct;
- (void)updateMaskWithBounds:(struct CGRect)arg1 maskRect:(struct CGRect)arg2;
- (void)animateSheetMaskFromOldSheetFrame:(struct CGRect)arg1 toSheetFrame:(struct CGRect)arg2 duration:(double)arg3;
- (void)restoreSheetCutout;
- (void)removeSheetCutout;
- (id)initWithBackgroundColor:(id)arg1 cornerRadius:(double)arg2;

@end
