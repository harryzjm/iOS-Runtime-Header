//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsCore/NSCopying-Protocol.h>
#import <TipsCore/NSSecureCoding-Protocol.h>

@class TPSSizes;

@interface TPSAssetSizes <NSCopying, NSSecureCoding>
{
    TPSSizes *_tip;
    TPSSizes *_tipIntro;
    TPSSizes *_collectionFeatured;
}

+ (id)classSet;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) TPSSizes *collectionFeatured; // @synthesize collectionFeatured=_collectionFeatured;
@property(retain, nonatomic) TPSSizes *tipIntro; // @synthesize tipIntro=_tipIntro;
@property(retain, nonatomic) TPSSizes *tip; // @synthesize tip=_tip;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end
