//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ARScreenImageCapturer : NSObject
{
    double _serverScale;
    long long _interfaceOrientation;
}

+ (struct CGImage *)screenShotCA;
+ (struct CGImage *)screenShot;
+ (struct CGImage *)scaleToSize:(struct CGImage *)arg1 newSize:(struct CGSize)arg2;
+ (id)sharedData;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) double serverScale; // @synthesize serverScale=_serverScale;

@end
