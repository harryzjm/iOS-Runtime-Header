//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/NSObject-Protocol.h>

@protocol MapsSuggestionsSourceProxy <NSObject>
- (void)forceEarlyUpdateWithCompletionBlock:(void (^)(void))arg1;
- (void)stopMonitoringWithCompletionBlock:(void (^)(void))arg1;
- (void)startMonitoringWithCompletionBlock:(void (^)(void))arg1;
@end
