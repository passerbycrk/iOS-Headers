//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface TSDWrapPolygon : NSObject <NSCopying>
{
    void *mPolygon;
    BOOL mIntersectsSelf;
    BOOL mComputedSelfIntersection;
    struct CGRect mBounds;
    BOOL mComputedBounds;
}

- (id).cxx_construct;
- (struct CGPoint)intersectionPointBetween:(struct CGPoint)arg1 and:(struct CGPoint)arg2;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (id)bezierPath;
- (struct CGRect)bounds;
- (void *)polygon;
- (BOOL)intersectsSelf;
- (void)setIntersectsSelf:(BOOL)arg1;
- (void)setPath:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPath:(id)arg1;
- (void)p_computeIntersectionState;
- (int)p_countSegments;
- (void)p_setPolygon:(CDStruct_727a4eeb *)arg1;
- (void)p_freePolygon;

@end

