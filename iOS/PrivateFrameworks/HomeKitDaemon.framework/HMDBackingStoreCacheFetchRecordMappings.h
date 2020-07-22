//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDBackingStoreCacheGroup, HMDBackingStoreCacheShareGroup;

@interface HMDBackingStoreCacheFetchRecordMappings
{
    HMDBackingStoreCacheGroup *_group;
    HMDBackingStoreCacheShareGroup *_share;
    CDUnknownBlockType _fetchResult;
}

@property(copy, nonatomic) CDUnknownBlockType fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) HMDBackingStoreCacheShareGroup *share; // @synthesize share=_share;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithGroup:(id)arg1 fetchResult:(CDUnknownBlockType)arg2;
- (id)initWithShareGroup:(id)arg1 fetchResult:(CDUnknownBlockType)arg2;

@end
