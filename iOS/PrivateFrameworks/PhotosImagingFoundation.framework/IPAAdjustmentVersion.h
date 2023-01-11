//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IPAAdjustmentVersion : NSObject
{
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    NSString *_platform;
}

+ (id)versionFromArchivalRepresentation:(id)arg1;
+ (id)versionForMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2;
+ (id)versionForMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3;
+ (id)validatePlatformString:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) unsigned long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property(readonly, nonatomic) unsigned long long majorVersion; // @synthesize majorVersion=_majorVersion;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqualToAdjustmentVersion:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setMinorVersion:(unsigned long long)arg1;
- (long long)compare:(id)arg1;
- (id)archivalRepresentation;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3;

@end
