/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQDGraphic.h>

#import "GQDNameMappable-Protocol.h"

@class GQDPath, GQDWPLayoutFrame;

@interface GQDShape : GQDGraphic <GQDNameMappable>
{
    GQDPath *mPath;
    GQDWPLayoutFrame *mLayoutFrame;
}

+ (const struct StateSpec *)stateForReading;
- (struct CGPath *)createBezierPath;
- (id)path;
- (BOOL)isRectangularAndAxisAlignedToAngle:(float)arg1;
- (BOOL)isBlank;
- (id)layoutFrame;
- (void)dealloc;
- (id)initWithGraphic:(id)arg1 path:(id)arg2 geometry:(id)arg3;

@end

