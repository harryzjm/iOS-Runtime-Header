//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoAppRegistry/NSSecureCoding-Protocol.h>

@class NARApplicationState, NARGlance, NSArray, NSDictionary, NSString;

@interface NARApplication : NSObject <NSSecureCoding>
{
    unsigned long long _sequenceNumber;
    NSString *_launchServicesBundleType;
    NSString *_parentApplicationBundleIdentifier;
    NSArray *_appTags;
    NARGlance *_glance;
    NARApplicationState *_appState;
    NSDictionary *_infoPlist;
    NSDictionary *_localizedStrings;
    NSDictionary *_iTunesPlistStrings;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *iTunesPlistStrings; // @synthesize iTunesPlistStrings=_iTunesPlistStrings;
@property(retain, nonatomic) NSDictionary *localizedStrings; // @synthesize localizedStrings=_localizedStrings;
@property(retain, nonatomic) NSDictionary *infoPlist; // @synthesize infoPlist=_infoPlist;
@property(retain, nonatomic) NARApplicationState *appState; // @synthesize appState=_appState;
@property(retain, nonatomic) NARGlance *glance; // @synthesize glance=_glance;
@property(retain, nonatomic) NSArray *appTags; // @synthesize appTags=_appTags;
@property(readonly, copy, nonatomic) NSString *parentApplicationBundleIdentifier; // @synthesize parentApplicationBundleIdentifier=_parentApplicationBundleIdentifier;
@property(copy, nonatomic) NSString *launchServicesBundleType; // @synthesize launchServicesBundleType=_launchServicesBundleType;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (void).cxx_destruct;
- (id)description;
- (id)objectForInfoDictionaryKey:(id)arg1 localization:(id)arg2;
- (id)objectForInfoDictionaryKey:(id)arg1;
@property(readonly, nonatomic) NSArray *localizations;
@property(readonly, nonatomic) _Bool isHidden;
@property(readonly, nonatomic) NSArray *supportedSchemes;
@property(readonly, nonatomic) NSString *itemName;
@property(readonly, nonatomic) NSString *vendorName;
@property(readonly, nonatomic) NSDictionary *localizedDisplayNames;
@property(readonly, nonatomic) NSString *localizedDisplayName;
@property(readonly, nonatomic) NSString *bundleVersion;
@property(readonly, nonatomic) NSDictionary *localizedBundleNames;
@property(readonly, nonatomic) NSString *bundleName;
@property(readonly, nonatomic) NSString *applicationIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
