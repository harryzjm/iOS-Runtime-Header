//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class LSApplicationProxy, NSArray, NSDate, NSString, PSUsageBundleApp;

@interface PSStorageApp : NSObject
{
    long long _purgeableSize;
    long long _specialSize;
    _Bool _isUserApp;
    _Bool _isSystemApp;
    _Bool _isInternalApp;
    _Bool _isUsageApp;
    _Bool _isDocumentApp;
    _Bool _isDeleting;
    _Bool _isDemoting;
    _Bool _isPseudoApp;
    _Bool _purgeableCalculated;
    _Bool _specialCalculated;
    LSApplicationProxy *_appProxy;
    long long _demoteSize;
    PSUsageBundleApp *_usageBundleApp;
    NSArray *_mediaTypes;
    long long _externalDataSize;
}

+ (void)setLaunchDatesNeedUpdating;
@property(nonatomic) _Bool isUsageApp; // @synthesize isUsageApp=_isUsageApp;
@property(nonatomic) _Bool isUserApp; // @synthesize isUserApp=_isUserApp;
@property _Bool specialCalculated; // @synthesize specialCalculated=_specialCalculated;
@property _Bool purgeableCalculated; // @synthesize purgeableCalculated=_purgeableCalculated;
@property _Bool isPseudoApp; // @synthesize isPseudoApp=_isPseudoApp;
@property long long externalDataSize; // @synthesize externalDataSize=_externalDataSize;
@property(retain, nonatomic) NSArray *mediaTypes; // @synthesize mediaTypes=_mediaTypes;
@property(retain) PSUsageBundleApp *usageBundleApp; // @synthesize usageBundleApp=_usageBundleApp;
@property(readonly, nonatomic) long long demoteSize; // @synthesize demoteSize=_demoteSize;
@property(retain, nonatomic) LSApplicationProxy *appProxy; // @synthesize appProxy=_appProxy;
- (void).cxx_destruct;
- (long long)specialStorageUsageForBundleID:(id)arg1;
@property(readonly, nonatomic) NSDate *installDate;
@property(readonly, nonatomic) NSDate *lastUsedDate;
- (void)setNeedsSpecialSizeUpdate;
- (void)setNeedsPurgeableSizeUpdate;
@property(readonly, nonatomic) long long specialSize;
@property(readonly, nonatomic) long long purgeableSize;
@property(readonly, nonatomic) long long totalSize;
@property(readonly, nonatomic) long long dataSize;
@property(readonly, nonatomic) long long dynamicSize;
@property(readonly, nonatomic) long long staticSize;
@property(readonly, nonatomic) NSArray *documents;
@property(readonly, nonatomic) _Bool isDocumentApp;
@property(readonly, nonatomic) _Bool isDeleted;
@property(readonly, nonatomic) _Bool isDemoted;
@property(readonly, nonatomic) _Bool isDemotable;
@property(readonly, nonatomic) _Bool isDeletable;
@property(readonly, nonatomic) _Bool isInternalApp;
@property(readonly, nonatomic) _Bool isSystemApp;
@property(readonly, nonatomic) NSString *bundleVersion;
@property(readonly, nonatomic) NSString *versionString;
@property(readonly, nonatomic) NSString *vendorName;
@property(readonly, nonatomic) NSString *appIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) NSString *name;
- (_Bool)valueForBooleanInfoKey:(id)arg1;
- (void)reloadProxy;
- (id)initWithApplicationProxy:(id)arg1;

@end

