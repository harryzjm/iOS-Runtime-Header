//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemon/HMMCoreAnalyticsLogging-Protocol.h>

@class NSString;

@interface HMDHomeMigrationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    NSString *_model;
    NSString *_reason;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy) NSString *model; // @synthesize model=_model;
- (id)attributeDescriptions;
- (id)serializedEvent;
- (id)eventName;
- (id)initWithModel:(id)arg1 reason:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end
