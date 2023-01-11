//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPCPlaybackEngineEvent, NSArray, NSDictionary, NSString;
@protocol MPCPlaybackEngineEventStreamCursor;

@protocol MPCPlaybackEngineEventStreamCursor <NSObject>
- (id <MPCPlaybackEngineEventStreamCursor>)cursorFromEvent:(MPCPlaybackEngineEvent *)arg1 untilEvent:(MPCPlaybackEngineEvent *)arg2;
- (id <MPCPlaybackEngineEventStreamCursor>)cursorUntilEvent:(MPCPlaybackEngineEvent *)arg1;
- (long long)countOfPreviousEventsWithTypes:(NSArray *)arg1 matchingPayload:(NSDictionary *)arg2;
- (long long)countOfPreviousEventsWithType:(NSString *)arg1 matchingPayload:(NSDictionary *)arg2;
- (MPCPlaybackEngineEvent *)findPreviousEventWithTypes:(NSArray *)arg1 matchingPayload:(NSDictionary *)arg2;
- (MPCPlaybackEngineEvent *)findPreviousEventWithType:(NSString *)arg1 matchingPayload:(NSDictionary *)arg2;
- (void)enumeratePreviousEventsWithTypes:(NSArray *)arg1 matchingPayload:(NSDictionary *)arg2 usingBlock:(void (^)(MPCPlaybackEngineEvent *, _Bool *))arg3;
- (void)enumeratePreviousEventsWithTypes:(NSArray *)arg1 usingBlock:(void (^)(MPCPlaybackEngineEvent *, _Bool *))arg2;
- (void)enumeratePreviousEventsWithType:(NSString *)arg1 matchingPayload:(NSDictionary *)arg2 usingBlock:(void (^)(MPCPlaybackEngineEvent *, _Bool *))arg3;
- (void)enumeratePreviousEventsWithType:(NSString *)arg1 usingBlock:(void (^)(MPCPlaybackEngineEvent *, _Bool *))arg2;
@end
