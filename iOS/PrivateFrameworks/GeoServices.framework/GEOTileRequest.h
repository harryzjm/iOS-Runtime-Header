//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOResourceManifestConfiguration, GEOTileKeyList, GEOTileKeyMap, NSLocale, NSString;

@interface GEOTileRequest : NSObject
{
    GEOTileKeyList *_keyList;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    GEOTileKeyMap *_cachedEtags;
    GEOTileKeyMap *_cachedData;
    GEOTileKeyMap *_priorities;
    GEOTileKeyMap *_signpostIDs;
    GEOTileKeyMap *_additionalInfos;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    GEOApplicationAuditToken *_auditToken;
    _Bool _requireWiFi;
    _Bool _requirePowerPluggedIn;
    NSString *_backgroundSessionIdentifier;
    _Bool _shouldParticipateInBalancer;
    unsigned char _loadReason;
}

@property(readonly, nonatomic) unsigned char loadReason; // @synthesize loadReason=_loadReason;
@property(readonly, nonatomic) _Bool shouldParticipateInBalancer; // @synthesize shouldParticipateInBalancer=_shouldParticipateInBalancer;
@property(readonly, nonatomic) NSString *backgroundSessionIdentifier; // @synthesize backgroundSessionIdentifier=_backgroundSessionIdentifier;
@property(readonly, nonatomic) _Bool requirePowerPluggedIn; // @synthesize requirePowerPluggedIn=_requirePowerPluggedIn;
@property(readonly, nonatomic) _Bool requireWiFi; // @synthesize requireWiFi=_requireWiFi;
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) GEOTileKeyMap *additionalInfos; // @synthesize additionalInfos=_additionalInfos;
@property(readonly, nonatomic) GEOTileKeyMap *signpostIDs; // @synthesize signpostIDs=_signpostIDs;
@property(readonly, nonatomic) GEOTileKeyMap *priorities; // @synthesize priorities=_priorities;
@property(readonly, nonatomic) GEOTileKeyMap *cachedData; // @synthesize cachedData=_cachedData;
@property(readonly, nonatomic) GEOTileKeyMap *cachedEtags; // @synthesize cachedEtags=_cachedEtags;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration; // @synthesize manifestConfiguration=_manifestConfiguration;
@property(readonly, nonatomic) GEOTileKeyList *keyList; // @synthesize keyList=_keyList;
- (void).cxx_destruct;
- (id)description;
- (id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3;
- (id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 cachedEtags:(id)arg4 cachedData:(id)arg5 priorities:(id)arg6 signpostIDs:(id)arg7 additionalInfos:(id)arg8 bundleIdentifier:(id)arg9 bundleVersion:(id)arg10 auditToken:(id)arg11 requireWiFi:(_Bool)arg12 requirePowerPluggedIn:(_Bool)arg13 backgroundSessionIdentifier:(id)arg14 shouldParticipateInBalancer:(_Bool)arg15 reason:(unsigned char)arg16;
- (id)init;

@end

