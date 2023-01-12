//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class FCContentManifest;

@interface FCContentArchive : NSObject <NSCopying, NSSecureCoding>
{
}

+ (id)archiveWithChildArchives:(id)arg1;
+ (id)archiveWithPersistedArchivePath:(id)arg1;
+ (id)archiveWithAVAssetKey:(id)arg1;
+ (id)archiveWithAVAsset:(id)arg1;
+ (id)archiveWithAssetWrappingKey:(id)arg1 wrappingKeyID:(id)arg2;
+ (id)archiveWithAsset:(id)arg1 remoteURL:(id)arg2 filePath:(id)arg3;
+ (id)archiveWithRecord:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) FCContentManifest *manifest;
- (id)unarchiveIntoContentContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
