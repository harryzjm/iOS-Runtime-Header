//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TPSAnalyticsEventTipDismissed
{
    double _timeToDismissal;
    NSString *_tipID;
    NSString *_correlationID;
    NSString *_bundleID;
    NSString *_context;
    unsigned long long _displayCount;
    NSString *_dismissType;
}

+ (id)eventWithTipID:(id)arg1 correlationID:(id)arg2 bundleID:(id)arg3 context:(id)arg4 dismissType:(id)arg5 timeToDismissal:(double)arg6 date:(id)arg7;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *dismissType; // @synthesize dismissType=_dismissType;
@property(nonatomic) unsigned long long displayCount; // @synthesize displayCount=_displayCount;
@property(readonly, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSString *correlationID; // @synthesize correlationID=_correlationID;
@property(readonly, nonatomic) NSString *tipID; // @synthesize tipID=_tipID;
@property(nonatomic) double timeToDismissal; // @synthesize timeToDismissal=_timeToDismissal;
- (id)mutableAnalyticsEventRepresentation;
- (void)setDataProvider:(id)arg1;
- (id)eventName;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithTipID:(id)arg1 correlationID:(id)arg2 bundleID:(id)arg3 context:(id)arg4 dismissType:(id)arg5 timeToDismissal:(double)arg6 date:(id)arg7;
- (id)initWithCoder:(id)arg1;

@end
