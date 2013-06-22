/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIControl.h"

@class NSString, UIImageView, UILabel;

@interface MFAddressAtom : UIControl
{
    id <MFAddressAtomDelegate> _delegate;
    void *_person;
    NSString *_fullAddress;
    NSString *_displayString;
    UIImageView *_backgroundImageView;
    struct UIEdgeInsets _atomCapInsets;
    UILabel *_addressLabel;
    unsigned int _accessoryStyle;
    int _style;
    unsigned int _maxWidth;
    int _identifier;
    unsigned int _addressIsPhoneNumber:1;
    unsigned int _needsToSendMouseUpEvents:1;
    unsigned int _dragging:1;
    unsigned int _updatedABPerson:1;
    unsigned int _isDisplayStringFromAddressBook:1;
    void *_addressBook;
}

+ (id)copyDisplayStringForAddress:(id)arg1 usingAddressBook:(void *)arg2;
@property(nonatomic) unsigned int accessoryStyle; // @synthesize accessoryStyle=_accessoryStyle;
@property(nonatomic) int style; // @synthesize style=_style;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)setOpaque:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)displayString;
- (id)unmodifiedAddressString;
- (int)identifier;
- (int)ABPropertyType;
- (void *)ABPerson;
- (void)_updateDisplayStringIncludingABPerson:(BOOL)arg1;
- (void)_displayStringDidChange;
- (void)setAddress:(id)arg1;
- (BOOL)isDisplayStringFromAddressBook;
- (id)emailAddress;
- (void)_updateABPerson;
- (void)_addVIPImageToBackgroundImageViewIsSelected:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setMaxWidth:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)_VIPImageNameForStyle:(int)arg1 selected:(BOOL)arg2;
- (void)_setupForStyle;
- (void)addressBookDidChange:(id)arg1;
- (id)initWithAddress:(id)arg1 style:(int)arg2 isPhoneNumber:(BOOL)arg3 maxWidth:(float)arg4 addressBook:(void *)arg5;

@end
