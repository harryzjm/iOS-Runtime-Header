//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDXPCMessageCountersLogEvent : HMMLogEvent
{
    NSString *_type;
    NSString *_peerInformation;
    NSString *_messageName;
    NSNumber *_count;
}

+ (id)XPCMessageCountersLogEventWithType:(id)arg1 peerInformation:(id)arg2 messageName:(id)arg3 count:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(readonly, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property(readonly, nonatomic) NSString *peerInformation; // @synthesize peerInformation=_peerInformation;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (_Bool)shouldSubmit;
- (id)__initWithType:(id)arg1 peerInformation:(id)arg2 messageName:(id)arg3 count:(id)arg4;

@end

