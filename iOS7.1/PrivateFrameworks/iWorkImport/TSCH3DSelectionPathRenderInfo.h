//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCH3DSelectionPathRenderInfo : NSObject
{
    NSString *mString;
    unsigned int mStyleIndex;
    float mRotation;
}

+ (id)renderInfoWithString:(id)arg1 styleIndex:(unsigned int)arg2 rotation:(float)arg3;
@property(readonly, nonatomic) float rotation; // @synthesize rotation=mRotation;
@property(readonly, nonatomic) unsigned int styleIndex; // @synthesize styleIndex=mStyleIndex;
@property(readonly, nonatomic) NSString *string; // @synthesize string=mString;
- (void)dealloc;
- (id)initWithString:(id)arg1 styleIndex:(unsigned int)arg2 rotation:(float)arg3;

@end

