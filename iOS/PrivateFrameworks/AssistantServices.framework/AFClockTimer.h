//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFClockItem-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDate, NSString, NSURL, NSUUID;

@interface AFClockTimer : NSObject <AFClockItem, NSCopying, NSSecureCoding>
{
    _Bool _isFiring;
    NSUUID *_timerID;
    NSURL *_timerURL;
    NSString *_title;
    long long _state;
    double _duration;
    double _fireTimeInterval;
    NSDate *_fireDate;
    NSDate *_firedDate;
    NSDate *_dismissedDate;
    NSDate *_lastModifiedDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, copy, nonatomic) NSDate *dismissedDate; // @synthesize dismissedDate=_dismissedDate;
@property(readonly, copy, nonatomic) NSDate *firedDate; // @synthesize firedDate=_firedDate;
@property(readonly, copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(readonly, nonatomic) double fireTimeInterval; // @synthesize fireTimeInterval=_fireTimeInterval;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool isFiring; // @synthesize isFiring=_isFiring;
@property(readonly, copy, nonatomic) NSURL *timerURL; // @synthesize timerURL=_timerURL;
@property(readonly, copy, nonatomic) NSUUID *timerID; // @synthesize timerID=_timerID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithTimerID:(id)arg1 timerURL:(id)arg2 isFiring:(_Bool)arg3 title:(id)arg4 state:(long long)arg5 duration:(double)arg6 fireTimeInterval:(double)arg7 fireDate:(id)arg8 firedDate:(id)arg9 dismissedDate:(id)arg10 lastModifiedDate:(id)arg11;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSURL *itemURL;
@property(readonly, nonatomic) NSUUID *itemID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

