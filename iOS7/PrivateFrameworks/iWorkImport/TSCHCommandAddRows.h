/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCHChartCommand.h>

@class NSString;

// Not exported
@interface TSCHCommandAddRows : TSCHChartCommand
{
    struct _NSRange mRowRange;
    NSString *mRowName;
}

- (id).cxx_construct;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (const struct ChartCommandArchive *)chartCommandArchiveFromUnarchiver:(id)arg1;
- (void)dealloc;
- (void)redoPrimitive;
- (void)undoPrimitive;
- (void)commitPrimitive;
- (id)initWithChartInfo:(id)arg1 rowRange:(struct _NSRange)arg2 rowName:(id)arg3;

@end

