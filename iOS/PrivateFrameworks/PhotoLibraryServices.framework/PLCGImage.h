//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLCGImage : NSObject
{
    struct CGImage *_imageRef;
}

@property(readonly, nonatomic) struct CGImage *imageRef; // @synthesize imageRef=_imageRef;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1;

@end

