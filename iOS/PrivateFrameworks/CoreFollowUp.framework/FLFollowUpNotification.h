//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/NSSecureCoding-Protocol.h>

@class FLFollowUpAction, NSDate, NSSet, NSString;

@interface FLFollowUpNotification : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_informativeText;
    FLFollowUpAction *_activateAction;
    FLFollowUpAction *_clearAction;
    NSString *_unlockActionLabel;
    double _frequency;
    double _firstNotificationDelay;
    NSSet *_options;
    unsigned long long _sqlID;
    NSDate *_previousNotificationActionDate;
    FLFollowUpAction *_dismissAction;
    NSDate *_creationDate;
}

+ (id)defaultOptions;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) FLFollowUpAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property(retain, nonatomic) NSDate *previousNotificationActionDate; // @synthesize previousNotificationActionDate=_previousNotificationActionDate;
@property(nonatomic) unsigned long long sqlID; // @synthesize sqlID=_sqlID;
@property(copy, nonatomic) NSSet *options; // @synthesize options=_options;
@property(nonatomic) double firstNotificationDelay; // @synthesize firstNotificationDelay=_firstNotificationDelay;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(copy, nonatomic) NSString *unlockActionLabel; // @synthesize unlockActionLabel=_unlockActionLabel;
@property(retain, nonatomic) FLFollowUpAction *clearAction; // @synthesize clearAction=_clearAction;
@property(retain, nonatomic) FLFollowUpAction *activateAction; // @synthesize activateAction=_activateAction;
@property(copy, nonatomic) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (void)recalculateActionDateToAccountForDelay;
- (double)_creationDateAugmentedRepeatTimer;
- (double)_frequencyDelta;
- (void)set_optionsData:(id)arg1;
- (id)_optionsData;
@property(nonatomic) _Bool forceDelivery;
- (_Bool)_shouldDeliverNotificationWithStringOut:(id *)arg1;
- (_Bool)shouldDeliverNotification;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

