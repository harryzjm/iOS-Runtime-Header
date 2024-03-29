//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraSessionID : HMFObject
{
    _Bool _spiClient;
    NSString *_description;
    NSString *_sessionID;
    NSString *_hostProcessBundleIdentifier;
    NSMutableDictionary *_milestones;
    NSString *_deviceSectionName;
    NSMutableDictionary *_deviceMilestones;
}

+ (id)millisecondsSince1970;
+ (id)hostProcessBundleIdentifierForMessage:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSMutableDictionary *deviceMilestones; // @synthesize deviceMilestones=_deviceMilestones;
@property(readonly) NSString *deviceSectionName; // @synthesize deviceSectionName=_deviceSectionName;
@property(readonly) NSMutableDictionary *milestones; // @synthesize milestones=_milestones;
@property(readonly, getter=isSPIClient) _Bool spiClient; // @synthesize spiClient=_spiClient;
@property(readonly, copy) NSString *hostProcessBundleIdentifier; // @synthesize hostProcessBundleIdentifier=_hostProcessBundleIdentifier;
@property(readonly) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (id)description;
- (void)addParameterFor:(id)arg1 value:(id)arg2;
- (void)setParameterForPath:(id)arg1 value:(id)arg2;
- (void)setParameterFor:(id)arg1 value:(id)arg2;
- (void)markMilestoneForPath:(id)arg1;
- (void)markMilestoneFor:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSessionID:(id)arg1 hostProcessBundleIdentifier:(id)arg2 isSPIClient:(_Bool)arg3 deviceSectionName:(id)arg4 description:(id)arg5;
- (id)initWithSessionID:(id)arg1 message:(id)arg2 description:(id)arg3;

@end

