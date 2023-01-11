//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFRequestFailureTracker : NSObject
{
    unsigned long long _requestFailures;
    unsigned long long _requestSuccesses;
}

@property(readonly, nonatomic) unsigned long long requestSuccesses; // @synthesize requestSuccesses=_requestSuccesses;
@property(readonly, nonatomic) unsigned long long requestFailures; // @synthesize requestFailures=_requestFailures;
- (double)failureRate;
- (void)incrementSuccessCount;
- (void)incrementFailCount;

@end
