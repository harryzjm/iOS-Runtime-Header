//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@interface SKUISizeValue : NSObject <NSCopying>
{
    long long _height;
    long long _width;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)unionWithSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithSize:(struct CGSize)arg1;

@end

