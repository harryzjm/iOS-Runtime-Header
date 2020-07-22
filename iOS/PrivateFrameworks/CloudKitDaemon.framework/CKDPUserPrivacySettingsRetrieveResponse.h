//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPUserPrivacySettings, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPUserPrivacySettingsRetrieveResponse : PBCodable <NSCopying>
{
    NSMutableArray *_applicationBundles;
    CKDPUserPrivacySettings *_userPrivacySettings;
}

+ (Class)applicationBundleType;
@property(retain, nonatomic) NSMutableArray *applicationBundles; // @synthesize applicationBundles=_applicationBundles;
@property(retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings; // @synthesize userPrivacySettings=_userPrivacySettings;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)applicationBundleAtIndex:(unsigned long long)arg1;
- (unsigned long long)applicationBundlesCount;
- (void)addApplicationBundle:(id)arg1;
- (void)clearApplicationBundles;
@property(readonly, nonatomic) _Bool hasUserPrivacySettings;

@end

