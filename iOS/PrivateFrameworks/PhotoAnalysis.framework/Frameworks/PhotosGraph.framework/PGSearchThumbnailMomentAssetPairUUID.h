//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/NSCoding-Protocol.h>
#import <PhotosGraph/NSSecureCoding-Protocol.h>

@class NSString;

@interface PGSearchThumbnailMomentAssetPairUUID : NSObject <NSSecureCoding, NSCoding>
{
    NSString *_assetUUID;
    NSString *_momentUUID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *momentUUID; // @synthesize momentUUID=_momentUUID;
@property(readonly, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAssetUUID:(id)arg1 momentUUID:(id)arg2;

@end

