//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/NSSecureCoding-Protocol.h>

@class CSAttSiriRequestContext, NSString;

@interface CSAttSiriAttendingTriggerEventInfo : NSObject <NSSecureCoding>
{
    CSAttSiriRequestContext *_ctx;
    NSString *_detectedToken;
    unsigned long long _triggerMachTime;
    unsigned long long _triggerAbsStartSampleId;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long triggerAbsStartSampleId; // @synthesize triggerAbsStartSampleId=_triggerAbsStartSampleId;
@property(nonatomic) unsigned long long triggerMachTime; // @synthesize triggerMachTime=_triggerMachTime;
@property(retain, nonatomic) NSString *detectedToken; // @synthesize detectedToken=_detectedToken;
@property(copy, nonatomic) CSAttSiriRequestContext *ctx; // @synthesize ctx=_ctx;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
