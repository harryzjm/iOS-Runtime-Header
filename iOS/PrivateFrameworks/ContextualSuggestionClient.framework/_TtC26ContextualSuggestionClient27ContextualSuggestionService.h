//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSDictionary;

@interface _TtC26ContextualSuggestionClient27ContextualSuggestionService : _TtCs12_SwiftObject
{
    MISSING_TYPE *queue;
    MISSING_TYPE *_queue_connection;
    MISSING_TYPE *_queue_snapshots;
    MISSING_TYPE *_queue_observers;
    MISSING_TYPE *startupToken;
}

- (void)updateWith:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;

@end

