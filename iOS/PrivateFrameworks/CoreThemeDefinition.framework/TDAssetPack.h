//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreThemeDefinition/NSCopying-Protocol.h>

@class CUIMutableCommonAssetStorage, NSSet, NSString;

@interface TDAssetPack : NSObject <NSCopying>
{
    _Bool wasModified;
    NSSet *tags;
    NSString *outputPath;
    CUIMutableCommonAssetStorage *assetStore;
    NSString *assetPackIdentifier;
}

@property(copy, nonatomic) NSString *assetPackIdentifier; // @synthesize assetPackIdentifier;
@property(nonatomic) _Bool wasModified; // @synthesize wasModified;
@property(retain) CUIMutableCommonAssetStorage *assetStore; // @synthesize assetStore;
@property(copy, nonatomic) NSString *outputPath; // @synthesize outputPath;
@property(retain, nonatomic) NSSet *tags; // @synthesize tags;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

