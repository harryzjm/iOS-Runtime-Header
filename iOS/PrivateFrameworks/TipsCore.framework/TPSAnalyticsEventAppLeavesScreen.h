//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface TPSAnalyticsEventAppLeavesScreen
{
    NSNumber *_previouslyUnseenTipViews;
    NSNumber *_collectionViews;
    NSNumber *_tipViewsThisSession;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)mutableAnalyticsEventRepresentation;
@property(readonly, nonatomic) NSNumber *tipViewsInThisSession;
@property(readonly, nonatomic) NSNumber *collectionViews;
@property(readonly, nonatomic) NSNumber *previouslyUnseenTipViewsInThisSession;
- (id)eventName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
