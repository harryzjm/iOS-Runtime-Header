//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDMPCSessionControllerExecutionEvent
{
    _Bool _didPartiallySucceed;
}

+ (id)identifier;
@property _Bool didPartiallySucceed; // @synthesize didPartiallySucceed=_didPartiallySucceed;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
@property(readonly, copy) NSString *resultString;

@end

