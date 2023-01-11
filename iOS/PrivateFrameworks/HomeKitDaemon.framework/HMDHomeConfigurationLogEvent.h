//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSArray, NSString;

@interface HMDHomeConfigurationLogEvent <HMDAWDLogEvent>
{
    _Bool _isResidentCapable;
    _Bool _isResidentEnabled;
    _Bool _isDemoHomeConfigured;
    unsigned int _databaseSize;
    unsigned int _metadataVersion;
    NSArray *_homeConfigurations;
    unsigned long long _version;
}

+ (id)identifier;
+ (id)uuid;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly) NSArray *homeConfigurations; // @synthesize homeConfigurations=_homeConfigurations;
- (void)logAWDEventDescription;
- (id)initWithHomes:(id)arg1;
- (id)init;
- (int)convertToAWDNetworkProtectionStatus:(int)arg1;
- (int)convertToAWDMultiUserValueType:(int)arg1;
- (id)convertToAWDMultiUserSettings:(id)arg1;
- (id)convertToAWDMultiUserSettingsList:(id)arg1;
- (id)convertToAWDHAPService:(id)arg1;
- (id)convertToAWDHAPServiceList:(id)arg1;
- (id)getHomeConfiguration:(id)arg1;
- (id)generateAWDHomeConfiguration:(id)arg1;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
