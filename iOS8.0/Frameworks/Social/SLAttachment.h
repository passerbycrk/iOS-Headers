//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSItemProvider, NSString, NSURL, UIImage;

@interface SLAttachment : NSObject <NSSecureCoding>
{
    CDUnknownBlockType _previewUpdateObserver;
    CDUnknownBlockType _payloadUpdateObserver;
    NSString *_identifier;
    BOOL _startedPayloadLoad;
    BOOL _needsAnotherPreviewGeneration;
    int _previewType;
    UIImage *_previewImage;
    int _type;
    id _payload;
    NSURL *_payloadSourceFileURL;
    NSItemProvider *_itemProvider;
    NSString *_typeIdentifier;
    int _itemProviderPreviewType;
    int _downsampleStatus;
}

+ (BOOL)attachmentTypeRepresentsAnImage:(int)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL needsAnotherPreviewGeneration; // @synthesize needsAnotherPreviewGeneration=_needsAnotherPreviewGeneration;
@property(nonatomic) BOOL startedPayloadLoad; // @synthesize startedPayloadLoad=_startedPayloadLoad;
@property(nonatomic) int downsampleStatus; // @synthesize downsampleStatus=_downsampleStatus;
@property(readonly, nonatomic) int itemProviderPreviewType; // @synthesize itemProviderPreviewType=_itemProviderPreviewType;
@property(copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(retain, nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
@property(copy, nonatomic) NSURL *payloadSourceFileURL; // @synthesize payloadSourceFileURL=_payloadSourceFileURL;
@property(copy, nonatomic) id payload; // @synthesize payload=_payload;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property int previewType; // @synthesize previewType=_previewType;
- (void).cxx_destruct;
- (id)description;
- (void)setPayloadUpdateObserverWithBlock:(CDUnknownBlockType)arg1;
- (void)setPreviewUpdateObserverWithBlock:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_uniqueIdentifier;
- (id)initWithPayload:(id)arg1 type:(int)arg2 previewImage:(id)arg3;
- (id)init;

@end

