//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@interface _PXPlacesSnapshotKey : NSObject <NSCopying>
{
    long long __userInterfaceStyle;
    struct CGSize __imageSize;
}

@property(readonly, nonatomic) long long _userInterfaceStyle; // @synthesize _userInterfaceStyle=__userInterfaceStyle;
@property(readonly, nonatomic) struct CGSize _imageSize; // @synthesize _imageSize=__imageSize;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImageSize:(struct CGSize)arg1 userInterfaceStyle:(long long)arg2;

@end
