//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSPredicate, _DKEventStream;

@protocol _DKKnowledgeEventStreamDeleting
- (unsigned long long)deleteAllEventsMatchingPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (unsigned long long)deleteAllEventsInEventStream:(_DKEventStream *)arg1 error:(id *)arg2;
@end

