/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIButton.h"

#import "SBUIControlCenterControl-Protocol.h"

@class UIImage;

@interface SBUIControlCenterButton : UIButton <SBUIControlCenterControl>
{
    struct UIEdgeInsets _bgCapInsets;
    id <SBUIControlCenterButtonDelegate> _delegate;
    UIImage *_bgMaskImage;
    UIImage *_selectedBGMaskImage;
    UIImage *_glyphMaskImage;
    UIImage *_selectedGlyphMaskImage;
    double _naturalHeight;
}

+ (struct UIEdgeInsets)visibleContentInsets;
+ (id)_buttonWithBGImage:(id)arg1 selectedBGImage:(id)arg2 glyphImage:(id)arg3 naturalHeight:(double)arg4;
+ (id)roundRectButtonWithGlyphImage:(id)arg1;
+ (id)circularButtonWithGlyphImage:(id)arg1;
+ (id)roundRectButton;
+ (id)circularButton;
+ (id)_roundRectSelectedBackgroundImage;
+ (id)_roundRectBackgroundImage;
+ (id)_circleBackgroundImage;
@property(nonatomic) double naturalHeight; // @synthesize naturalHeight=_naturalHeight;
@property(retain, nonatomic) UIImage *selectedGlyphMaskImage; // @synthesize selectedGlyphMaskImage=_selectedGlyphMaskImage;
@property(retain, nonatomic) UIImage *glyphMaskImage; // @synthesize glyphMaskImage=_glyphMaskImage;
@property(retain, nonatomic, setter=setSelectedBGMaskImage:) UIImage *selectedBGMaskImage; // @synthesize selectedBGMaskImage=_selectedBGMaskImage;
@property(retain, nonatomic, setter=setBGMaskImage:) UIImage *bgMaskImage; // @synthesize bgMaskImage=_bgMaskImage;
@property(nonatomic) id <SBUIControlCenterButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)controlConfigurationDidChangeForState:(long long)arg1;
- (void)controlAppearanceDidChangeForState:(long long)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)_updateSelected:(_Bool)arg1 highlighted:(_Bool)arg2;
- (_Bool)_drawingAsSelected;
- (void)_pressAction;
- (struct CGSize)visibleContentSize;
- (void)setBackgroundImage:(id)arg1;
- (void)_setBackgroundImage:(id)arg1 selectedBackgroundImage:(id)arg2 naturalHeight:(double)arg3;
- (void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2;
- (void)_updateForStateChange;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)_updateDisabledImage;
- (void)_updateHighlightImage;
- (void)_updateNormalImage;
- (long long)_currentState;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backgroundImage:(id)arg2 selectedBackgroundImage:(id)arg3 glyphImage:(id)arg4 naturalHeight:(double)arg5;

@end
