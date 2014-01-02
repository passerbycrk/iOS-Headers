/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "QLPreviewItem-Protocol.h"

@class NSString, NSURL, QLPreviewItemProxy, QLServicePreviewContentController;

@interface QLPreviewRemoteItem : NSObject <QLPreviewItem>
{
    QLServicePreviewContentController *_contentController;
    long long _index;
    QLPreviewItemProxy *_proxy;
    _Bool _resolving;
    id _completionBlock;
}

- (id)previewItemURLForDisplay;
- (id)previewItemContentType;
@property(readonly) NSString *previewItemTitle;
@property(readonly) NSURL *previewItemURL;
- (id)description;
@property(readonly) QLPreviewItemProxy *proxy;
- (void)invalidate;
- (void)resolveWithCompletionBlock:(id)arg1;
- (void)_clearCompletionBlock;
- (void)dealloc;
- (id)initWithContentController:(id)arg1 index:(long long)arg2;

@end
