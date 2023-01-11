//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSPredicate, _DKEventStream;
@protocol OS_dispatch_queue;

@protocol _DKKnowledgeEventStreamDeleting
- (void)deleteAllEventsMatchingPredicate:(NSPredicate *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(unsigned long long, NSError *))arg3;
- (unsigned long long)deleteAllEventsMatchingPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (void)deleteAllEventsInEventStream:(_DKEventStream *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(unsigned long long, NSError *))arg3;
- (unsigned long long)deleteAllEventsInEventStream:(_DKEventStream *)arg1 error:(id *)arg2;
@end

