//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDCoreAnalyticsLogging-Protocol.h>

@class NSString;

@interface HMDMPCSessionControllerExecutionEvent <HMDCoreAnalyticsLogging>
{
    _Bool _didPartiallySucceed;
}

+ (id)identifier;
@property _Bool didPartiallySucceed; // @synthesize didPartiallySucceed=_didPartiallySucceed;
@property(readonly, copy) NSString *resultString;
- (id)serializedEvent;
- (id)eventName;

@end
