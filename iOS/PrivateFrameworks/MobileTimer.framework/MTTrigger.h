//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/NAEquatable-Protocol.h>
#import <MobileTimer/NSCopying-Protocol.h>
#import <MobileTimer/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface MTTrigger : NSObject <NAEquatable, NSCopying, NSSecureCoding>
{
    unsigned long long _triggerType;
    NSDate *_triggerDate;
}

+ (id)_stringForType:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)triggerWithDate:(id)arg1 triggerType:(unsigned long long)arg2;
@property(copy, nonatomic) NSDate *triggerDate; // @synthesize triggerDate=_triggerDate;
@property(nonatomic) unsigned long long triggerType; // @synthesize triggerType=_triggerType;
- (void).cxx_destruct;
- (_Bool)isEvent;
@property(readonly, nonatomic) _Bool isScheduled;
@property(readonly, nonatomic) _Bool isForAlert;
@property(readonly, nonatomic) _Bool isForGoToBed;
@property(readonly, nonatomic) _Bool isForSnooze;
@property(readonly, copy) NSString *description;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToTrigger:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithDate:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

