//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VUIGraphicsImageRenderer : NSObject
{
}

+ (id)decodedImage:(id)arg1 opaque:(_Bool)arg2;
+ (id)imageWithSize:(struct CGSize)arg1 format:(id)arg2 cgContextActions:(CDUnknownBlockType)arg3;
+ (id)imageWithSize:(struct CGSize)arg1 format:(id)arg2 actions:(CDUnknownBlockType)arg3;
+ (id)formatWithUIImage:(id)arg1;
+ (id)formatWithCGImage:(struct CGImage *)arg1;
+ (id)preferredFormat;

@end
