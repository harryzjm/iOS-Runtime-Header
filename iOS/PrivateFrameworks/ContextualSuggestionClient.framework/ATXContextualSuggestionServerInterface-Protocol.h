//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContextualSuggestionClient/NSObject-Protocol.h>

@class NSSet;

@protocol ATXContextualSuggestionServerInterface <NSObject>
- (void)requestSnapshotsForEndpoints:(NSSet *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
@end

