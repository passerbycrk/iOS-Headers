/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OCDDelayedNode.h>

@class EDColorReference, EDHeaderFooter, EDPageSetup, EDProcessors, EDString, EDWarnings, EDWorkbook, ESDContainer, NSMutableArray, SFUPointerKeyDictionary;

@interface EDSheet : OCDDelayedNode
{
    EDWorkbook *mWorkbook;
    EDString *mName;
    _Bool mHidden;
    _Bool mDisplayFormulas;
    _Bool mDisplayGridlines;
    _Bool mIsDialogSheet;
    EDColorReference *mDefaultGridlineColorReference;
    EDHeaderFooter *mHeaderFooter;
    EDPageSetup *mPageSetup;
    NSMutableArray *mDrawables;
    SFUPointerKeyDictionary *mTextBoxMap;
    SFUPointerKeyDictionary *mCommentMap;
    EDProcessors *mProcessors;
    EDWarnings *mWarnings;
    ESDContainer *mEscherDrawing;
}

+ (id)sheetWithWorkbook:(id)arg1;
- (id)initWithWorkbook:(id)arg1;
- (void)dealloc;
- (void)doneWithNonRowContent;
- (id)workbook;
- (id)name;
- (void)setName:(id)arg1;
- (_Bool)isHidden;
- (void)setHidden:(_Bool)arg1;
- (_Bool)isDisplayFormulas;
- (void)setDisplayFormulas:(_Bool)arg1;
- (_Bool)isDisplayGridlines;
- (void)setDisplayGridlines:(_Bool)arg1;
- (id)defaultGridlineColor;
- (void)setDefaultGridlineColor:(id)arg1;
- (id)headerFooter;
- (void)setHeaderFooter:(id)arg1;
- (id)pageSetup;
- (void)setPageSetup:(id)arg1;
- (unsigned int)drawableCount;
- (id)drawableAtIndex:(unsigned int)arg1;
- (void)addDrawable:(id)arg1;
- (void)removeDrawableAtIndex:(unsigned int)arg1;
- (id)drawables;
- (id)edTextBoxForShape:(id)arg1;
- (void)setEDTextBox:(id)arg1 forShape:(id)arg2;
- (id)edCommentForShape:(id)arg1;
- (void)setEDComment:(id)arg1 forShape:(id)arg2;
- (id)processors;
- (void)applyProcessors;
- (id)warnings;
@property(nonatomic) _Bool isDialogSheet; // @synthesize isDialogSheet=mIsDialogSheet;

@end
