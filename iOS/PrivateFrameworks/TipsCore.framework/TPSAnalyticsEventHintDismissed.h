//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TPSAnalyticsEventHintDismissed
{
    double _timeToDismissal;
    NSString *_contentID;
    NSString *_bundleID;
    NSString *_context;
    NSString *_dismissType;
}

+ (id)eventWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 dismissType:(id)arg4 timeToDismissal:(double)arg5 date:(id)arg6;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *dismissType; // @synthesize dismissType=_dismissType;
@property(readonly, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(nonatomic) double timeToDismissal; // @synthesize timeToDismissal=_timeToDismissal;
- (id)mutableAnalyticsEventRepresentation;
- (void)setDataProvider:(id)arg1;
- (id)eventName;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 dismissType:(id)arg4 timeToDismissal:(double)arg5 date:(id)arg6;
- (id)initWithCoder:(id)arg1;

@end
