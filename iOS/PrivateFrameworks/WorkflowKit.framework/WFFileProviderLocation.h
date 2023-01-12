//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFFileProviderLocation
{
    NSString *_fileProviderDomainID;
    NSString *_crossDeviceItemID;
    NSString *_appContainerBundleIdentifier;
}

+ (id)locationWithSerializedRepresentation:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)subpathFromURL:(id)arg1 item:(id)arg2;
+ (id)subpathFromURL:(id)arg1;
+ (_Bool)canRepresentURL:(id)arg1 item:(id)arg2 parentItems:(id)arg3;
+ (_Bool)canRepresentURL:(id)arg1;
+ (Class)supportedClassForURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *appContainerBundleIdentifier; // @synthesize appContainerBundleIdentifier=_appContainerBundleIdentifier;
@property(readonly, nonatomic) NSString *crossDeviceItemID; // @synthesize crossDeviceItemID=_crossDeviceItemID;
@property(readonly, nonatomic) NSString *fileProviderDomainID; // @synthesize fileProviderDomainID=_fileProviderDomainID;
- (id)serializedRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isSupportedOnCurrentPlatform;
- (id)resolveLocationFromProviderDomainID;
- (id)resolveLocationWithError:(id *)arg1;
- (id)resolveCrossDeviceItemIDWithError:(id *)arg1;
- (id)initWithFileProviderDomainID:(id)arg1 crossDeviceItemID:(id)arg2 appContainerBundleIdentifier:(id)arg3 relativeSubpath:(id)arg4 displayName:(id)arg5;
- (id)initWithURL:(id)arg1;

@end
