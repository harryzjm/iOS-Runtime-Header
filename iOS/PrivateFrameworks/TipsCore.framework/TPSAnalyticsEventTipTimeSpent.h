//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TPSAnalyticsEventTipTimeSpent
{
    NSString *_collectionID;
    NSString *_tipID;
    NSString *_correlationID;
    double _timeSpent;
}

+ (id)eventWithTipID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) double timeSpent; // @synthesize timeSpent=_timeSpent;
@property(retain, nonatomic) NSString *correlationID; // @synthesize correlationID=_correlationID;
@property(retain, nonatomic) NSString *tipID; // @synthesize tipID=_tipID;
@property(retain, nonatomic) NSString *collectionID; // @synthesize collectionID=_collectionID;
- (id)mutableAnalyticsEventRepresentation;
- (id)eventName;
- (id)_initWithTipID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
