//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFPunchout;

@interface SFCardSectionEngagementFeedback
{
    SFPunchout *_destination;
    unsigned long long _triggerEvent;
    unsigned long long _actionCardType;
    unsigned long long _actionTarget;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long actionTarget; // @synthesize actionTarget=_actionTarget;
@property(nonatomic) unsigned long long actionCardType; // @synthesize actionCardType=_actionCardType;
@property(nonatomic) unsigned long long triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(retain, nonatomic) SFPunchout *destination; // @synthesize destination=_destination;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCardSection:(id)arg1 destination:(id)arg2 triggerEvent:(unsigned long long)arg3 actionCardType:(unsigned long long)arg4;

@end
