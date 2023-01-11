//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSCopying-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>

@class DEDNotifierConfiguration, NSDictionary, NSNumber, NSSet, NSString;

@interface DEDBugSessionConfiguration : NSObject <NSSecureCoding, NSCopying, DEDSecureArchiving>
{
    NSSet *_requestedCapabilities;
    _Bool _allowsCellularUpload;
    _Bool _cloudkitUseDevelopmentEnvironment;
    long long _finishingMove;
    long long _notifyingMove;
    NSString *_seedingDeviceToken;
    long long _seedingSubmissionID;
    long long _seedingSubmissionType;
    long long _seedingEnvironment;
    NSString *_seedingHost;
    NSNumber *_radarProblemID;
    NSString *_radarAuthToken;
    NSString *_cloudkitContainer;
    NSDictionary *_cloudkitData;
    DEDNotifierConfiguration *_notifierConfiguration;
}

+ (id)secureUnarchiveWithData:(id)arg1;
+ (id)archivedClasses;
+ (_Bool)supportsSecureCoding;
@property(retain) DEDNotifierConfiguration *notifierConfiguration; // @synthesize notifierConfiguration=_notifierConfiguration;
@property(retain) NSDictionary *cloudkitData; // @synthesize cloudkitData=_cloudkitData;
@property _Bool cloudkitUseDevelopmentEnvironment; // @synthesize cloudkitUseDevelopmentEnvironment=_cloudkitUseDevelopmentEnvironment;
@property(retain) NSString *cloudkitContainer; // @synthesize cloudkitContainer=_cloudkitContainer;
@property(retain) NSString *radarAuthToken; // @synthesize radarAuthToken=_radarAuthToken;
@property(retain) NSNumber *radarProblemID; // @synthesize radarProblemID=_radarProblemID;
@property(retain) NSString *seedingHost; // @synthesize seedingHost=_seedingHost;
@property long long seedingEnvironment; // @synthesize seedingEnvironment=_seedingEnvironment;
@property long long seedingSubmissionType; // @synthesize seedingSubmissionType=_seedingSubmissionType;
@property long long seedingSubmissionID; // @synthesize seedingSubmissionID=_seedingSubmissionID;
@property(retain) NSString *seedingDeviceToken; // @synthesize seedingDeviceToken=_seedingDeviceToken;
@property _Bool allowsCellularUpload; // @synthesize allowsCellularUpload=_allowsCellularUpload;
@property long long notifyingMove; // @synthesize notifyingMove=_notifyingMove;
@property long long finishingMove; // @synthesize finishingMove=_finishingMove;
- (void).cxx_destruct;
- (id)secureArchive;
- (_Bool)isEqualToConfiguration:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)requestedCapabilities;
- (void)requestCapabilities:(id)arg1;
- (void)requestCapabilitiesSet:(id)arg1;
@property(readonly) NSString *requestedCapabilitiesString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

