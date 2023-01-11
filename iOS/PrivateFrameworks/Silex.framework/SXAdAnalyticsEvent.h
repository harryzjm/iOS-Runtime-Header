//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SXAdAnalyticsEvent
{
    NSString *_adCampaign;
    NSString *_adLine;
    NSString *_adCreative;
    NSString *_impressionIdentifier;
    double _impressionThreshold;
}

@property(readonly, nonatomic) double impressionThreshold; // @synthesize impressionThreshold=_impressionThreshold;
@property(readonly, nonatomic) NSString *impressionIdentifier; // @synthesize impressionIdentifier=_impressionIdentifier;
@property(readonly, nonatomic) NSString *adCreative; // @synthesize adCreative=_adCreative;
@property(readonly, nonatomic) NSString *adLine; // @synthesize adLine=_adLine;
@property(readonly, nonatomic) NSString *adCampaign; // @synthesize adCampaign=_adCampaign;
- (void).cxx_destruct;
- (id)initWithCampaign:(id)arg1 line:(id)arg2 creative:(id)arg3 impressionIdentifier:(id)arg4 impressionThreshold:(double)arg5;

@end

