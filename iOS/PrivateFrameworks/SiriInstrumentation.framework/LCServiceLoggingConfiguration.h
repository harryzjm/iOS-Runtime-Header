//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class LCServiceLoggingParameters, NSArray, NSData;

@interface LCServiceLoggingConfiguration : PBCodable
{
    _Bool _hasDefaultParameters;
    _Bool _hasConfigurationVersion;
    int _configurationVersion;
    NSArray *_applications;
    NSArray *_blacklistedBundleIdentifiers;
    LCServiceLoggingParameters *_defaultParameters;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasConfigurationVersion; // @synthesize hasConfigurationVersion=_hasConfigurationVersion;
@property(nonatomic) int configurationVersion; // @synthesize configurationVersion=_configurationVersion;
@property(nonatomic) _Bool hasDefaultParameters; // @synthesize hasDefaultParameters=_hasDefaultParameters;
@property(retain, nonatomic) LCServiceLoggingParameters *defaultParameters; // @synthesize defaultParameters=_defaultParameters;
@property(copy, nonatomic) NSArray *blacklistedBundleIdentifiers; // @synthesize blacklistedBundleIdentifiers=_blacklistedBundleIdentifiers;
@property(copy, nonatomic) NSArray *applications; // @synthesize applications=_applications;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)blacklistedBundleIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)blacklistedBundleIdentifiersCount;
- (void)addBlacklistedBundleIdentifiers:(id)arg1;
- (void)clearBlacklistedBundleIdentifiers;
- (id)applicationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)applicationsCount;
- (void)addApplications:(id)arg1;
- (void)clearApplications;

@end
