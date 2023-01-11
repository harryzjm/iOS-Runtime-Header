//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface DESRecordSet : NSObject
{
    CDUnknownBlockType _dataFetcher;
    NSDictionary *_nativeRecords;
    NSDictionary *_nativeRecordInfo;
    NSArray *_coreDuetEvents;
    NSDictionary *_predicate;
}

+ (void)initialize;
@property(readonly, nonatomic) NSDictionary *predicate; // @synthesize predicate=_predicate;
@property(readonly, copy, nonatomic) NSArray *coreDuetEvents; // @synthesize coreDuetEvents=_coreDuetEvents;
@property(readonly, copy, nonatomic) NSDictionary *nativeRecordInfo; // @synthesize nativeRecordInfo=_nativeRecordInfo;
@property(readonly, copy, nonatomic) NSDictionary *nativeRecords; // @synthesize nativeRecords=_nativeRecords;
- (void).cxx_destruct;
- (id)filteredRecordSetWithJSONPredicate:(id)arg1;
- (id)_anyNativeRecordUUID;
@property(readonly, nonatomic) unsigned long long count;
- (id)nativeRecordDataForRecordUUID:(id)arg1 error:(id *)arg2;
- (id)nativeRecordInfoForRecordUUID:(id)arg1;
- (id)_initWithNativeRecords:(id)arg1 nativeRecordInfo:(id)arg2 coreDuetEvents:(id)arg3 predicate:(id)arg4 dataFetcher:(CDUnknownBlockType)arg5;

@end
