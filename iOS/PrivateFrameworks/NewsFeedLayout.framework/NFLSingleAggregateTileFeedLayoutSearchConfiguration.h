//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedLayoutSearchConfiguration-Protocol.h>

@class NSArray, NSString;

@interface NFLSingleAggregateTileFeedLayoutSearchConfiguration : NSObject <NFLFeedLayoutSearchConfiguration>
{
    _Bool _showAccessoryText;
    Class _subBatchLayoutTilingOperationClass;
    Class _rankedLayoutGenerationOperationClass;
    long long _cellType;
    long long _rowSpan;
}

@property(nonatomic) long long rowSpan; // @synthesize rowSpan=_rowSpan;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) Class rankedLayoutGenerationOperationClass; // @synthesize rankedLayoutGenerationOperationClass=_rankedLayoutGenerationOperationClass;
@property(retain, nonatomic) Class subBatchLayoutTilingOperationClass; // @synthesize subBatchLayoutTilingOperationClass=_subBatchLayoutTilingOperationClass;
@property(nonatomic, getter=isShowingAccessoryText) _Bool showAccessoryText; // @synthesize showAccessoryText=_showAccessoryText;
- (void).cxx_destruct;
- (Class)rankedLayoutGenerationOperationClassForRequest:(id)arg1;
- (double)transitionRankFromRowTypeToNone:(unsigned long long)arg1;
- (double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2;
- (id)nextRowTypeCandidatesForRowType:(unsigned long long)arg1;
- (double)transitionRankFromNoneToRowType:(unsigned long long)arg1;
- (CDStruct_bfc4548b)subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(id)arg2;
- (Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1;
- (unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)arg1;
- (id)descriptionForRowType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *allRowTypes;
@property(readonly, nonatomic) unsigned long long preferredTileInfoBatchSize;
- (_Bool)supportsTileInfoType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubBatchLayoutTilingOperationClass:(Class)arg1 rankedLayoutGenerationOperationClass:(Class)arg2 cellType:(long long)arg3 rowSpan:(long long)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

