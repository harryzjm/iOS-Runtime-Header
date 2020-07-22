//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDuet/_DKExecutableQuery-Protocol.h>

@class NSArray, NSObject, NSPredicate;
@protocol OS_dispatch_queue;

@interface _DKEventQuery <_DKExecutableQuery>
{
    NSObject<OS_dispatch_queue> *_defaultQueue;
    _Bool _readMetadata;
    _Bool _deduplicateValues;
    NSPredicate *_predicate;
    NSArray *_eventStreams;
    NSArray *_sortDescriptors;
    unsigned long long _limit;
    unsigned long long _offset;
    long long _resultType;
    CDUnknownBlockType _resultsHandler;
}

+ (_Bool)supportsSecureCoding;
+ (id)predicateForEventsOfMaximumDuration:(double)arg1;
+ (id)predicateForEventsOfMinimumDuration:(double)arg1;
+ (id)expressionForEventDuration;
+ (id)eventQueryWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescriptors:(id)arg5;
+ (id)eventQueryWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescriptors:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;
@property(copy) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
@property long long resultType; // @synthesize resultType=_resultType;
@property _Bool deduplicateValues; // @synthesize deduplicateValues=_deduplicateValues;
@property _Bool readMetadata; // @synthesize readMetadata=_readMetadata;
@property unsigned long long offset; // @synthesize offset=_offset;
@property unsigned long long limit; // @synthesize limit=_limit;
@property(retain) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain) NSArray *eventStreams; // @synthesize eventStreams=_eventStreams;
@property(retain) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id *)arg2;
- (id)constructFetchRequestPredicate;
- (id)init;
- (id)initWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescriptors:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;

@end
