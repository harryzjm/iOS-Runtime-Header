//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSKit/TSKSelection.h>

@class NSArray, NSSet, TSCHChartDrawableInfo, TSCHSelectionPath, TSCHSelectionPathType;

@interface TSCHSelection : TSKSelection
{
    TSCHChartDrawableInfo *_info;
    NSArray *_paths;
}

+ (Class)archivedSelectionClass;
+ (id)selectionWithChartInfo:(id)arg1 paths:(id)arg2;
+ (id)emptySelectionWithChartInfo:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(readonly, retain, nonatomic) TSCHChartDrawableInfo *chartInfo; // @synthesize chartInfo=_info;
@property(readonly, copy, nonatomic) NSSet *pathTypes;
@property(readonly, copy, nonatomic) TSCHSelectionPathType *pathType;
@property(readonly, copy, nonatomic) TSCHSelectionPath *firstPath;
@property(readonly, nonatomic) _Bool returnChartFrameForAutoscroll;
- (id)selectionByRemovingPathsFromArray:(id)arg1;
- (id)selectionByAddingPathsFromArray:(id)arg1;
@property(readonly, nonatomic) unsigned long long pathCount;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const void *)arg1 unarchiver:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPaths:(id)arg1;
- (id)initWithChartInfo:(id)arg1 path:(id)arg2;
- (id)initWithChartInfo:(id)arg1 paths:(id)arg2;

@end

