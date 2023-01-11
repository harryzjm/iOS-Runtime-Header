//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface TSCH3DMipmaps : NSObject
{
    int mWidth;
    int mHeight;
    unsigned long long mComponents;
    NSData *mData;
}

+ (id)mipmapsFromData:(id)arg1;
+ (id)mipmapsWithWidth:(int)arg1 height:(int)arg2 components:(unsigned long long)arg3 mipmapData:(id)arg4;
+ (struct CGSize)mipmapSizeForTexturableSize:(struct CGSize)arg1;
+ (struct CGSize)optimizedMipmapLevel0Size;
+ (id)mipmapNameFromImageName:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data; // @synthesize data=mData;
@property(readonly, nonatomic) unsigned long long components; // @synthesize components=mComponents;
@property(readonly, nonatomic) int height; // @synthesize height=mHeight;
@property(readonly, nonatomic) int width; // @synthesize width=mWidth;
- (_Bool)writeToFile:(id)arg1;
- (_Bool)valid;
- (id)description;
- (id)initFromData:(id)arg1;
- (id)initWithWidth:(int)arg1 height:(int)arg2 components:(unsigned long long)arg3 mipmapData:(id)arg4;

@end
