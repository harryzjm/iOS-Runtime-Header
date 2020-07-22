//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NFLBatchContext, NSMutableArray;

@interface NFLBatch : NSObject
{
    double _batchHeight;
    NFLBatchContext *_batchContext;
    NSMutableArray *_layoutInfos;
}

@property(retain, nonatomic) NSMutableArray *layoutInfos; // @synthesize layoutInfos=_layoutInfos;
@property(copy, nonatomic) NFLBatchContext *batchContext; // @synthesize batchContext=_batchContext;
@property(nonatomic) double batchHeight; // @synthesize batchHeight=_batchHeight;
- (void).cxx_destruct;
- (void)addLayoutInfos:(id)arg1;
- (void)addLayoutInfo:(id)arg1;
- (id)init;

@end
