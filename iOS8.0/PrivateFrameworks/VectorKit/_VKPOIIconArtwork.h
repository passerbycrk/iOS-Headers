//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKIconArtwork.h>

__attribute__((visibility("hidden")))
@interface _VKPOIIconArtwork : VKIconArtwork
{
    struct CGImage *_glyphImage;
    CDStruct_5977520b _style;
}

- (id).cxx_construct;
- (void)_cleanUpAfterDrawing;
- (id)_newImage;
- (struct CGSize)size;
- (void)dealloc;
- (id)initWithGlyph:(struct CGImage *)arg1 style:(CDStruct_5977520b *)arg2 contentScale:(float)arg3;

@end
