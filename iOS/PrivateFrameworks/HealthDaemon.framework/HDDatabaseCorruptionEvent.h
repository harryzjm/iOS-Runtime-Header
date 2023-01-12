//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class HKProfileIdentifier, NSDate, NSError, NSString;

@interface HDDatabaseCorruptionEvent : NSObject <NSSecureCoding>
{
    NSDate *_date;
    NSError *_error;
    HKProfileIdentifier *_profileIdentifier;
    long long _component;
    NSString *_buildDescription;
    NSString *_failedObliterationReason;
}

+ (_Bool)supportsSecureCoding;
+ (id)createForProfile:(id)arg1 component:(long long)arg2 error:(id)arg3 failedObliterationReason:(id)arg4;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *failedObliterationReason; // @synthesize failedObliterationReason=_failedObliterationReason;
@property(readonly, copy, nonatomic) NSString *buildDescription; // @synthesize buildDescription=_buildDescription;
@property(readonly) long long component; // @synthesize component=_component;
@property(readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier; // @synthesize profileIdentifier=_profileIdentifier;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithError:(id)arg1 date:(id)arg2 profileIdentifier:(id)arg3 component:(long long)arg4 build:(id)arg5 failedObliterationReason:(id)arg6;

@end
