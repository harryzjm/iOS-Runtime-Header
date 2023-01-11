//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString;

@interface _PSMessagesPinningFeedback : NSObject <NSSecureCoding>
{
    long long _actionType;
    long long _interactionMethod;
    NSArray *_onboardingSuggestions;
    NSArray *_actualPinnings;
    NSString *_trialId;
    NSDate *_eventDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)pinsChangedWithNowCurrentPins:(id)arg1;
+ (id)acceptedWithActualPinnings:(id)arg1 OnboardingSuggestions:(id)arg2;
+ (id)skipOnboardingWithOnboardingSuggestions:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *eventDate; // @synthesize eventDate=_eventDate;
@property(copy, nonatomic) NSString *trialId; // @synthesize trialId=_trialId;
@property(readonly, nonatomic) NSArray *actualPinnings; // @synthesize actualPinnings=_actualPinnings;
@property(readonly, nonatomic) NSArray *onboardingSuggestions; // @synthesize onboardingSuggestions=_onboardingSuggestions;
@property(nonatomic) long long interactionMethod; // @synthesize interactionMethod=_interactionMethod;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAction:(long long)arg1 actualPinnings:(id)arg2 onboardingSuggestions:(id)arg3 trialId:(id)arg4 eventDate:(id)arg5;

@end
