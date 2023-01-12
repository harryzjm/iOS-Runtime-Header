//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContextKitExtraction/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSNumber, NSString, NSUUID, NSUserActivity;

@interface CKContextUserActivity : NSObject <NSSecureCoding>
{
    double _recordedTimeIntervalSince1970;
    NSUserActivity *_userActivity;
    NSData *_userActivityData;
    _Bool _generatedActivity;
    NSUUID *_uuid;
    NSNumber *_numberOfOccurrences;
    NSString *_bundleIdentifier;
}

+ (id)_establishServiceConnection;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, getter=isGeneratedActivity) _Bool generatedActivity; // @synthesize generatedActivity=_generatedActivity;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSNumber *numberOfOccurrences; // @synthesize numberOfOccurrences=_numberOfOccurrences;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (void)donate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(nonatomic) __weak NSDate *entryDate;
- (void)prepareForDonationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithUserActivity:(id)arg1;

@end
