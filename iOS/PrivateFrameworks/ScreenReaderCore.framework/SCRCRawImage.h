//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface SCRCRawImage : NSObject
{
    struct CGImage *_imageRef;
    char *_data;
    long long _width;
    long long _height;
    long long _bytesPerPixel;
}

+ (id)rawImageForImage:(struct CGImage *)arg1;
@property(nonatomic) long long bytesPerPixel; // @synthesize bytesPerPixel=_bytesPerPixel;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(nonatomic) char *data; // @synthesize data=_data;
@property(retain, nonatomic) struct CGImage *imageRef; // @synthesize imageRef=_imageRef;
- (void)dealloc;

@end

