//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSArray;

@interface FCContentManifest : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_assetURLs;
    NSArray *_assetWrappingKeyIDs;
    NSArray *_recordIDs;
    NSArray *_avAssetIDs;
    NSArray *_avAssetKeyIDs;
}

+ (_Bool)supportsSecureCoding;
+ (id)manifestByMergingManifest:(id)arg1 withManifest:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *avAssetKeyIDs; // @synthesize avAssetKeyIDs=_avAssetKeyIDs;
@property(readonly, copy, nonatomic) NSArray *avAssetIDs; // @synthesize avAssetIDs=_avAssetIDs;
@property(readonly, copy, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(readonly, copy, nonatomic) NSArray *assetWrappingKeyIDs; // @synthesize assetWrappingKeyIDs=_assetWrappingKeyIDs;
@property(readonly, copy, nonatomic) NSArray *assetURLs; // @synthesize assetURLs=_assetURLs;
@property(readonly, copy, nonatomic) FCContentManifest *copyWithAssetsOnly;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *avAssetKeyURIs;
- (id)description;
- (id)initWithManifests:(id)arg1;
- (id)initWithAssetURLs:(id)arg1 assetWrappingKeyIDs:(id)arg2 recordIDs:(id)arg3 avAssetIDs:(id)arg4 avAssetKeyIDs:(id)arg5;

@end
