//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSMetricsDataSource-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMSMetricsMemoryDataSource : NSObject <AMSMetricsDataSource>
{
    NSMutableDictionary *_batches;
}

+ (id)batchesFromEvents:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *batches; // @synthesize batches=_batches;
- (void)willStartBatchingWithLogKey:(id)arg1 error:(id *)arg2;
- (void)skipEvents:(id)arg1 error:(id *)arg2;
- (void)removeEvents:(id)arg1 error:(id *)arg2;
- (void)enumerateSortedEventsForTopic:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)didFinishBatching;
- (void)cancel;
- (id)initWithEvents:(id)arg1;

@end
