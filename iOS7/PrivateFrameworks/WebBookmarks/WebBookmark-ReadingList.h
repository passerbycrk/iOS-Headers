/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebBookmarks/WebBookmark.h>

@class NSDate, NSDictionary, NSString;

@interface WebBookmark (ReadingList)
+ (id)_trimmedPreviewText:(id)arg1;
+ (id)_trimmedTitle:(id)arg1;
- (void)cleanupRedundantPreviewText;
@property(retain, nonatomic) NSString *localPreviewText;
@property(retain, nonatomic) NSString *siteName;
@property(retain, nonatomic) NSDictionary *nextPageURLs;
- (void)setTitle:(id)arg1 previewText:(id)arg2 dateLastFetched:(id)arg3;
@property(retain, nonatomic) NSString *sourceBundleID;
@property(retain, nonatomic) NSString *sourceLocalizedAppName;
@property(retain, nonatomic) NSDate *dateLastFetched;
@property(retain, nonatomic) NSDate *dateLastViewed;
@property(retain, nonatomic) NSDate *dateAdded;
@property(retain, nonatomic) NSDate *dateLastArchived;
@property(nonatomic) int webFilterStatus;
@property(nonatomic) int archiveStatus;
@property(nonatomic) _Bool locallyAdded;
@property(retain, nonatomic) NSString *previewText;
- (_Bool)isReadingListItem;
- (id)initReadingListBookmarkWithTitle:(id)arg1 address:(id)arg2 previewText:(id)arg3;
@end

