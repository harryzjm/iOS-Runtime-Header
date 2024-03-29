//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DVTPlugInManager, NSArray, NSBundle, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface DVTPlugIn : NSObject
{
    DVTPlugInManager *_plugInManager;
    NSString *_identifier;
    NSString *_version;
    NSString *_name;
    NSMutableSet *_extensions;
    NSMutableDictionary *_extensionsByIdentifier;
    NSMutableSet *_extensionPoints;
    NSMutableDictionary *_extensionPointsByIdentifier;
    NSMutableArray *_activationRules;
    NSMutableSet *_requiredPlugIns;
    NSString *_bundlePath;
    NSBundle *_bundle;
    NSDictionary *_bundleRawInfoDictionary;
    NSDictionary *_localizedStrings;
    NSDictionary *_plugInData;
    NSString *_path;
    NSString *_principalClassName;
    id _principalInstance;
    _Bool _preload;
    _Bool _isLoaded;
    _Bool _isLoading;
    _Bool _validateClassValues;
}

- (void).cxx_destruct;
@property(readonly) _Bool validateClassValues; // @synthesize validateClassValues=_validateClassValues;
@property(readonly) NSDictionary *_extensionPointsByIdentifier; // @synthesize _extensionPointsByIdentifier;
@property(readonly) NSDictionary *_extensionsByIdentifier; // @synthesize _extensionsByIdentifier;
@property(readonly, getter=isLoading) _Bool loading; // @synthesize loading=_isLoading;
@property(readonly, getter=isLoaded) _Bool loaded; // @synthesize loaded=_isLoaded;
@property(readonly) _Bool preload; // @synthesize preload=_preload;
@property(readonly) id principalInstance; // @synthesize principalInstance=_principalInstance;
@property(readonly, copy) NSString *path; // @synthesize path=_path;
@property(readonly, copy) NSSet *requiredPlugIns; // @synthesize requiredPlugIns=_requiredPlugIns;
@property(readonly, copy) NSArray *activationRules; // @synthesize activationRules=_activationRules;
@property(readonly, copy) NSSet *extensionPoints; // @synthesize extensionPoints=_extensionPoints;
@property(readonly, copy) NSSet *extensions; // @synthesize extensions=_extensions;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *version; // @synthesize version=_version;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) DVTPlugInManager *plugInManager; // @synthesize plugInManager=_plugInManager;
- (_Bool)loadAssertingOnError:(_Bool)arg1 error:(id *)arg2;
- (_Bool)load:(id *)arg1;
- (void)_instantiatePrincipalClass;
@property(readonly, getter=isLoadable) _Bool loadable;
@property(readonly) NSBundle *bundle;
@property(readonly, copy) NSString *description;
- (void)encodeIntoPropertyList:(id)arg1;
- (id)_localizedStringForKey:(id)arg1;
- (void)_loadLocalizedStrings;
- (void)awakeFromPropertyList;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
- (void)assertAutoIdentifierRulesAreSatisfied;
- (void)_configureToUsePath:(id)arg1 andBundle:(id)arg2 rawInfoPlist:(id)arg3;
- (id)initWithPlugInData:(id)arg1 plugInManager:(id)arg2;
- (void)afterLoading_enumerateValidationErrorsInClassesReferencedByExtensionOrParameter:(id)arg1 inExtension:(id)arg2 againstSchema:(id)arg3 extensionPoint:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)afterLoading_enumerateExtensionValidationErrorUsingBlock:(CDUnknownBlockType)arg1;
- (void)afterLoading_enumerateExtensionPointValidationErrorUsingBlock:(CDUnknownBlockType)arg1;
- (void)afterLoading_checkForValidationErrors;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

