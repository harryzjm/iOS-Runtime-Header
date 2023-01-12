//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTPropertyListEncoding-Protocol.h>

@class DVTPlugIn, DVTVersion, NSArray, NSBundle, NSDictionary, NSSet, NSString;

@interface DVTPlugInScanRecord : NSObject <DVTPropertyListEncoding>
{
    NSString *_path;
    NSString *_bundlePath;
    NSBundle *_bundle;
    NSString *_identifier;
    _Bool _isApplePlugIn;
    NSString *_marketingVersion;
    NSDictionary *_bundleRawInfoPlist;
    NSDictionary *_plugInPlist;
    NSSet *_requiredCapabilities;
    DVTVersion *_minimumRequiredSystemVersion;
    DVTVersion *_maximumAllowedSystemVersion;
    DVTPlugIn *_plugIn;
    NSSet *_plugInCompatibilityUUIDs;
    NSArray *_modificationDates;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain) DVTPlugIn *plugIn; // @synthesize plugIn=_plugIn;
@property(readonly, copy) NSDictionary *plugInPlist; // @synthesize plugInPlist=_plugInPlist;
@property(readonly, copy) NSSet *plugInCompatibilityUUIDs; // @synthesize plugInCompatibilityUUIDs=_plugInCompatibilityUUIDs;
@property(readonly, copy) DVTVersion *maximumAllowedSystemVersion; // @synthesize maximumAllowedSystemVersion=_maximumAllowedSystemVersion;
@property(readonly, copy) DVTVersion *minimumRequiredSystemVersion; // @synthesize minimumRequiredSystemVersion=_minimumRequiredSystemVersion;
@property(readonly, copy) NSSet *requiredCapabilities; // @synthesize requiredCapabilities=_requiredCapabilities;
@property(readonly, copy) NSDictionary *bundleRawInfoPlist; // @synthesize bundleRawInfoPlist=_bundleRawInfoPlist;
@property(readonly, copy) NSString *marketingVersion; // @synthesize marketingVersion=_marketingVersion;
@property(readonly) _Bool isApplePlugIn; // @synthesize isApplePlugIn=_isApplePlugIn;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, copy) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(readonly, copy) NSString *path; // @synthesize path=_path;
- (_Bool)loadRequiredCapabilities:(id *)arg1;
- (_Bool)_loadBundleRawInfoPlist:(id *)arg1;
- (_Bool)loadPlugInPlist:(id *)arg1;
- (id)_contentsOfPlistAtURL:(id)arg1 error:(id *)arg2;
@property(readonly) _Bool hasPlugInPlist;
@property(readonly, getter=isFramework) _Bool framework;
- (id)_plugInPlistURL;
- (void)_instantiateBundleIfNecessary;
- (_Bool)isEquivalentToPlistRepresentation:(id)arg1;
- (void)encodeIntoPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
@property(readonly, copy) NSString *description;
- (long long)compare:(id)arg1;
- (id)initWithPath:(id)arg1 bundle:(id)arg2 plugInPlist:(id)arg3;
- (id)initWithPath:(id)arg1 bundlePath:(id)arg2 plugInPlist:(id)arg3;
- (void)recordModificationDates:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
