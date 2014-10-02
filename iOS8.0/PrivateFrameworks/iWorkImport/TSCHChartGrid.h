//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "TSDMixing.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSCHChartGrid : NSObject <NSCopying, TSDMixing>
{
    id <TSCHNotifyOnModify> mModifyDelegate;
    int mDirection;
    NSMutableArray *mRowNames;
    NSMutableArray *mColumnNames;
    NSMutableArray *mValues;
    BOOL mDirty;
    BOOL mAddingMultipleRows;
    unsigned int mNextRowNumber;
    BOOL mAddingMultipleCols;
    unsigned int mNextColNumber;
    NSMutableArray *mRowIds;
    NSMutableArray *mColumnIds;
}

@property(readonly, nonatomic) NSArray *columnIds; // @synthesize columnIds=mColumnIds;
@property(readonly, nonatomic) NSArray *rowIds; // @synthesize rowIds=mRowIds;
@property(nonatomic) id <TSCHNotifyOnModify> objectToNotify; // @synthesize objectToNotify=mModifyDelegate;
@property(nonatomic) BOOL dirty; // @synthesize dirty=mDirty;
@property(nonatomic) int direction; // @synthesize direction=mDirection;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (id)gridAdapterForColumnConstant;
- (id)gridAdapterForRowConstant;
- (id)gridAdapterForColumnCount;
- (id)gridAdapterForRowCount;
- (id)gridAdapterForColumn:(unsigned int)arg1;
- (id)gridAdapterForRow:(unsigned int)arg1;
- (void)takeDataFromDictionary:(id)arg1 rowIds:(id)arg2 columnIds:(id)arg3;
- (void)takeDataFromDictionary:(id)arg1;
- (void)insertColumnNames:(id)arg1 at:(unsigned int)arg2 withIds:(id)arg3;
- (void)insertColumnNames:(id)arg1 at:(unsigned int)arg2;
- (void)insertRowsWithNames:(id)arg1 at:(unsigned int)arg2 withIds:(id)arg3;
- (void)insertRowsWithNames:(id)arg1 at:(unsigned int)arg2;
- (void)insertColumnsAt:(unsigned int)arg1 names:(id)arg2 data:(id)arg3 withIds:(id)arg4;
- (void)insertColumnsAt:(unsigned int)arg1 names:(id)arg2 data:(id)arg3;
- (void)insertRowsAt:(unsigned int)arg1 names:(id)arg2 data:(id)arg3 withIds:(id)arg4;
- (void)insertRowsAt:(unsigned int)arg1 names:(id)arg2 data:(id)arg3;
- (id)extractColumnNames:(struct _NSRange)arg1 outValueColumns:(id *)arg2;
- (id)extractRowNames:(struct _NSRange)arg1 outValueRows:(id *)arg2;
- (void)moveColumns:(struct _NSRange)arg1 afterColumn:(int)arg2;
- (void)moveRows:(struct _NSRange)arg1 afterRow:(int)arg2;
- (void)setValue:(id)arg1 forRow:(unsigned int)arg2 column:(unsigned int)arg3;
- (void)removeColumn:(unsigned int)arg1;
- (void)removeRow:(unsigned int)arg1;
- (void)setNameForColumn:(unsigned int)arg1 toName:(id)arg2;
- (void)setNameForRow:(unsigned int)arg1 toName:(id)arg2;
- (void)insertColumn:(unsigned int)arg1 withName:(id)arg2 withId:(id)arg3;
- (void)insertColumn:(unsigned int)arg1 withName:(id)arg2;
- (void)insertRow:(unsigned int)arg1 withName:(id)arg2 withId:(id)arg3;
- (void)insertRow:(unsigned int)arg1 withName:(id)arg2;
- (id)p_uuidsForColumns:(struct _NSRange)arg1;
- (id)p_uuidsForRows:(struct _NSRange)arg1;
- (id)p_generateUUID;
- (void)p_generateRowColumnIdMaps;
- (id)getNewRowName;
- (id)getNewColumnName;
- (void)addingMultipleCols:(BOOL)arg1;
- (void)addingMultipleRows:(BOOL)arg1;
- (BOOL)p_name:(id)arg1 isInArray:(id)arg2;
- (id)description;
- (unsigned int)columnIndexForColumnId:(id)arg1;
- (unsigned int)rowIndexForRowId:(id)arg1;
- (id)columnIdForColumn:(unsigned int)arg1;
- (id)rowIdForRow:(unsigned int)arg1;
- (id *)valuesForRows:(struct _NSRange)arg1 column:(unsigned int)arg2;
- (id *)valuesForRow:(unsigned int)arg1 columns:(struct _NSRange)arg2;
- (id)valueForRow:(unsigned int)arg1 column:(unsigned int)arg2;
- (id)nameForColumn:(unsigned int)arg1;
- (id)nameForRow:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int numberOfColumns;
@property(readonly, nonatomic) unsigned int numberOfRows;
- (BOOL)contentsEqualToGrid:(id)arg1;
- (void)willModify;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (void)loadFromPreUFFArchive:(const struct ChartGridArchive *)arg1;
- (void)saveToUnityArchive:(struct ChartArchive *)arg1 forPasteboard:(BOOL)arg2;
- (void)loadFromUnityArchive:(const struct ChartArchive *)arg1;

@end
