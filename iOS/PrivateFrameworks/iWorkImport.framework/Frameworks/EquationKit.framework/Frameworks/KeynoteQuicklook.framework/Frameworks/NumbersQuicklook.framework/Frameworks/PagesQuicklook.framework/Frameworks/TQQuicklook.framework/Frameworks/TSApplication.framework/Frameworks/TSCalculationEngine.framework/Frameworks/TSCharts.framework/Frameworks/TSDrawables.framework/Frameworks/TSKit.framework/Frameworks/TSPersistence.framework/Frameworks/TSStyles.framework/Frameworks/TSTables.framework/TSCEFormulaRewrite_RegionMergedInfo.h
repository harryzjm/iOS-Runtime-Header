//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSCEFormulaRewrite_RegionInfo;

@interface TSCEFormulaRewrite_RegionMergedInfo : NSObject
{
    struct TSUCellCoord _mergeSource;
    TSCEFormulaRewrite_RegionInfo *_mergeRegion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TSCEFormulaRewrite_RegionInfo *mergeRegion; // @synthesize mergeRegion=_mergeRegion;
@property(nonatomic) const struct TSUCellCoord *mergeSource; // @synthesize mergeSource=_mergeSource;
- (id)description;
- (id)initWithMergeRegion:(id)arg1 mergeSource:(struct TSUCellCoord)arg2;

@end

