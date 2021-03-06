//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DLinkablePipeline.h>

@class TSCH3DGLFramebuffer;

__attribute__((visibility("hidden")))
@interface TSCH3DFramebufferTransformPipeline : TSCH3DLinkablePipeline
{
    id <TSCH3DPipelineLinkable> mSource;
    TSCH3DGLFramebuffer *mTarget;
    TSCH3DGLFramebuffer *mInput;
}

@property(retain, nonatomic) TSCH3DGLFramebuffer *target; // @synthesize target=mTarget;
@property(retain, nonatomic) id <TSCH3DPipelineLinkable> source; // @synthesize source=mSource;
- (BOOL)run;
- (BOOL)prepareFramebuffer;
- (void)loadSource;
- (void)dealloc;

@end

