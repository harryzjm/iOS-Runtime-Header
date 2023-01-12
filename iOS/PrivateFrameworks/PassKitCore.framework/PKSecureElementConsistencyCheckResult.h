//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface PKSecureElementConsistencyCheckResult : NSObject
{
    NSArray *_requestedActions;
    long long _cleanupActions;
    NSDictionary *_summary;
    NSArray *_registerRegions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *registerRegions; // @synthesize registerRegions=_registerRegions;
@property(readonly, nonatomic) NSDictionary *summary; // @synthesize summary=_summary;
@property(readonly, nonatomic) long long cleanupActions; // @synthesize cleanupActions=_cleanupActions;
@property(readonly, nonatomic) NSArray *requestedActions; // @synthesize requestedActions=_requestedActions;
- (id)description;
- (id)initWithCleanupActions:(long long)arg1 resultsSummary:(id)arg2 requestedActions:(id)arg3 registeredRegions:(id)arg4;

@end
