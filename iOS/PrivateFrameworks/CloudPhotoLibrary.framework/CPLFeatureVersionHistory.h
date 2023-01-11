//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface CPLFeatureVersionHistory : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_anchorToVersion;
    NSMutableDictionary *_versionToAnchor;
    long long _currentFeatureVersion;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long currentFeatureVersion; // @synthesize currentFeatureVersion=_currentFeatureVersion;
- (void).cxx_destruct;
- (void)enumerateHistoryWithBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (long long)featureVersionForSyncAnchor:(struct NSData *)arg1;
- (struct NSData *)syncAnchorForFeatureVersion:(long long)arg1;
- (void)addSyncAnchor:(struct NSData *)arg1 forFeatureVersion:(long long)arg2;
- (id)initWithCurrentFeatureVersion:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

