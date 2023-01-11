//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MPModelFileAsset
{
}

+ (id)allSupportedProperties;
+ (id)__qualityType_KEY;
+ (id)__purchaseBundleFilePath_KEY;
+ (id)__protectionType_KEY;
+ (id)__nonPurgeable_KEY;
+ (id)__fileSize_KEY;
+ (id)__filePath_KEY;

// Remaining properties
@property(copy, nonatomic) NSString *filePath; // @dynamic filePath;
@property(nonatomic) unsigned long long fileSize; // @dynamic fileSize;
@property(nonatomic, getter=isNonPurgeable) _Bool nonPurgeable; // @dynamic nonPurgeable;
@property(nonatomic) long long protectionType; // @dynamic protectionType;
@property(copy, nonatomic) NSString *purchaseBundleFilePath; // @dynamic purchaseBundleFilePath;
@property(nonatomic) long long qualityType; // @dynamic qualityType;

@end

