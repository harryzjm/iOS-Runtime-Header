//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/NSCopying-Protocol.h>

@protocol MTLTexture;

@interface ARUISpriteTexture : NSObject <NSCopying>
{
    float _height;
    float _width;
    id <MTLTexture> _texture;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <MTLTexture> texture; // @synthesize texture=_texture;
@property(readonly, nonatomic) float width; // @synthesize width=_width;
@property(readonly, nonatomic) float height; // @synthesize height=_height;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImage:(id)arg1;

@end
