//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"

@class NSArray, PLPhotoLibrary, UIActionSheet;

@interface PLDeletePhotosActionController : NSObject <UIActionSheetDelegate>
{
    UIActionSheet *_actionSheet;
    NSArray *_additionalAssetsToDelete;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _willDeleteHandler;
    int _actionSheetStyle;
    BOOL _deleteDuplicates;
    PLPhotoLibrary *_photoLibrary;
    NSArray *_assets;
    id <PLDeletePhotosActionControllerDelegate> _delegate;
}

+ (id)allUsedElsewhereMessageCombinations;
+ (id)_usedElsewhereWarningTextForAssetCount:(int)arg1 inPhotoStreamCount:(int)arg2 iniPhotoCount:(int)arg3 inSomeAlbumCount:(int)arg4 affectedLocalAlbumsCount:(int)arg5 itemKindSuffix:(id)arg6 actualDeletionCount:(int)arg7;
@property(nonatomic) id <PLDeletePhotosActionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL deleteDuplicates; // @synthesize deleteDuplicates=_deleteDuplicates;
@property(readonly, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)redisplayFromObject:(id)arg1 animated:(BOOL)arg2;
- (void)dismissAnimated:(BOOL)arg1;
- (void)showInView:(id)arg1 willDeleteHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showFromObject:(id)arg1 animated:(BOOL)arg2 willDeleteHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_setupActionSheet;
- (id)_usedElsewhereWarningTextForAssets:(id)arg1 additionalPhotoStreamAssets:(id)arg2 actualDeletionCount:(int)arg3;
- (id)_cloudSharedWarningTextForAssets:(id)arg1;
- (id)_avalancheDeleteWarningForAssets:(id)arg1 actualDeletionCount:(int *)arg2;
- (void)_getDeleteActionSheetTitle:(id *)arg1 destructiveButtonTitle:(id *)arg2 cancelButtonTitle:(id *)arg3 forAssets:(id)arg4 additionalPhotoStreamAssets:(id)arg5;
@property(nonatomic) int actionSheetStyle;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1 assets:(id)arg2 deleteDuplicates:(BOOL)arg3;

@end
