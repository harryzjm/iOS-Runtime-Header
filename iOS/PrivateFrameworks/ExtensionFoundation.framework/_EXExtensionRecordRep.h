//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSApplicationExtensionRecord, LSExtensionPointRecord;

__attribute__((visibility("hidden")))
@interface _EXExtensionRecordRep
{
    LSApplicationExtensionRecord *_record;
    LSExtensionPointRecord *_extensionPoint;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) LSExtensionPointRecord *extensionPoint; // @synthesize extensionPoint=_extensionPoint;
@property(readonly) LSApplicationExtensionRecord *record; // @synthesize record=_record;
- (id)entitlementNamed:(id)arg1 ofClass:(Class)arg2;
- (id)entitlements;
- (id)attributes;
- (id)extensionDictionary;
- (id)sdkDictionary;
- (id)containingURL;
- (id)url;
- (id)localizedName;
- (id)UUID;
- (unsigned int)platform;
- (id)bundleIdentifier;
- (id)extensionPointIdentifier;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithApplicationExtensionRecord:(id)arg1;
- (id)initWithPlugInKitProxy:(id)arg1;

@end
