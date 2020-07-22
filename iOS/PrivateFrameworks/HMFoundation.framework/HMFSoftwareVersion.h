//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HMFSoftwareVersion
{
    NSString *_buildVersion;
}

+ (_Bool)supportsSecureCoding;
+ (id)versionFromOperatingSystemVersion:(CDStruct_2ec95fd7)arg1;
@property(readonly, copy) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CDStruct_2ec95fd7)operatingSystemVersion;
- (long long)compare:(id)arg1;
- (id)versionString;
- (id)initWithVersionString:(id)arg1;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 buildVersion:(id)arg4;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3;

@end
