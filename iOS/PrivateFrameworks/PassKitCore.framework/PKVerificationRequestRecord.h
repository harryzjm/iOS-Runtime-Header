//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString, PKVerificationChannel;

@interface PKVerificationRequestRecord : NSObject <NSSecureCoding>
{
    NSString *_currentStepIdentifier;
    NSString *_previousStepIdentifier;
    long long _verificationStatus;
    NSString *_passUniqueID;
    NSDate *_date;
    PKVerificationChannel *_channel;
    NSArray *_allChannels;
    NSDictionary *_requiredFieldData;
}

+ (_Bool)supportsSecureCoding;
+ (id)verificationRequestRecordForPass:(id)arg1;
@property(copy, nonatomic) NSDictionary *requiredFieldData; // @synthesize requiredFieldData=_requiredFieldData;
@property(copy, nonatomic) NSArray *allChannels; // @synthesize allChannels=_allChannels;
@property(copy, nonatomic) PKVerificationChannel *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *passUniqueID; // @synthesize passUniqueID=_passUniqueID;
@property(nonatomic) long long verificationStatus; // @synthesize verificationStatus=_verificationStatus;
@property(copy, nonatomic) NSString *previousStepIdentifier; // @synthesize previousStepIdentifier=_previousStepIdentifier;
@property(copy, nonatomic) NSString *currentStepIdentifier; // @synthesize currentStepIdentifier=_currentStepIdentifier;
- (void).cxx_destruct;
- (id)requiredVerificationFields;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

