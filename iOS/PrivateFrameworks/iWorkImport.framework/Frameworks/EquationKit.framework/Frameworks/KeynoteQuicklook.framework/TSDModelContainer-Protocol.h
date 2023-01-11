//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, TSPObject;

@protocol TSDModelContainer
@property(readonly, nonatomic) NSArray *containedModels;
- (void)moveModel:(TSPObject *)arg1 toIndex:(unsigned long long)arg2;
- (void)removeContainedModel:(TSPObject *)arg1;
- (void)insertContainedModel:(TSPObject *)arg1 atIndex:(unsigned long long)arg2;
@end
