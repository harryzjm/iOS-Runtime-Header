//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RecapPerformanceTesting/NSObject-Protocol.h>

@class NSString, RCPSyntheticEventStream;

@protocol RPTScrollTestParameters <NSObject>
@property(copy, nonatomic) NSString *testName;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler;
@property(readonly, nonatomic) RCPSyntheticEventStream *eventStream;
@end
