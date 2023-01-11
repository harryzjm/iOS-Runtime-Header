//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface MCCloudConfiguration : NSObject
{
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSDictionary *_memberQueueDetails;
    NSDictionary *_memberQueueSetAsideDetails;
}

+ (id)sharedConfiguration;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *memberQueueSetAsideDetails; // @synthesize memberQueueSetAsideDetails=_memberQueueSetAsideDetails;
@property(retain, nonatomic) NSDictionary *memberQueueDetails; // @synthesize memberQueueDetails=_memberQueueDetails;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
- (id)skipSetupKeys;
- (id)tvProviderUserToken;
- (id)provisionalEnrollmentExpirationDate;
- (_Bool)isProvisionallyEnrolled;
- (id)languageScript;
- (id)region;
- (id)language;
- (_Bool)alreadySignedIntoFaceTime;
- (_Bool)hasMAIDCredential;
- (id)MAIDUsername;
- (id)diagnosticsUploadURL;
- (int)userMode;
- (id)mdmVersionProtocol;
- (_Bool)isAwaitingConfiguration;
- (_Bool)isTeslaEnrolled;
- (_Bool)isSupervised;
@property(copy, nonatomic) NSDictionary *setAsideDetails;
@property(copy, nonatomic) NSDictionary *details;
- (void)refreshDetailsFromDisk;
- (id)init;

@end
