//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationControllerLogEvent : HMMLogEvent
{
    NSString *_isTriggeredOnControllerDevice;
    NSString *_userPrivilege;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *userPrivilege; // @synthesize userPrivilege=_userPrivilege;
@property(readonly, copy) NSString *isTriggeredOnControllerDevice; // @synthesize isTriggeredOnControllerDevice=_isTriggeredOnControllerDevice;
- (id)initWithIsTriggeredOnControllerDevice:(id)arg1 userPrivilege:(id)arg2;

@end

