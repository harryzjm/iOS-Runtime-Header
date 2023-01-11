//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>

@interface PUBadgeInfoPromise : NSObject <NSCopying>
{
    CDUnknownBlockType _countProvider;
    struct PXAssetBadgeInfo _badgeInfo;
}

- (void).cxx_destruct;
- (id)badgeInfoPromiseWithAdjustedBadges:(unsigned long long)arg1;
@property(readonly, nonatomic) struct PXAssetBadgeInfo badgeInfo; // @synthesize badgeInfo=_badgeInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBadgeInfo:(struct PXAssetBadgeInfo)arg1 countProvider:(CDUnknownBlockType)arg2;
- (id)initWithBadgeInfo:(struct PXAssetBadgeInfo)arg1;

@end
