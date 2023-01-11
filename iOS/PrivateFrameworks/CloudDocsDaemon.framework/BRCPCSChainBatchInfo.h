//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAppLibrary, NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCPCSChainBatchInfo : NSObject
{
    NSMutableArray *_fullyChainRecordBatch;
    NSMutableDictionary *_fullyChainRecordInfoMap;
    NSMutableDictionary *_halfChainedParentMap;
    BRCAppLibrary *_appLibrary;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *records;
@property(readonly, nonatomic) unsigned long long batchCount;
- (void)chainPreparedRecordBatch:(id)arg1;
- (void)addFullyChainedRecordInfo:(id)arg1;
- (_Bool)containsRecordInfo:(id)arg1;
- (id)initWithAppLibrary:(id)arg1;

@end

