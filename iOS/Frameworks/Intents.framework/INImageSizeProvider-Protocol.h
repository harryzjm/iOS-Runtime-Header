//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class INImage;

@protocol INImageSizeProvider <NSObject>
+ (CDStruct_8caa76fc)imageSizeForImage:(INImage *)arg1;
+ (INImage *)downscaledPNGImageForImage:(INImage *)arg1 size:(CDStruct_8caa76fc)arg2 error:(id *)arg3;
@end
