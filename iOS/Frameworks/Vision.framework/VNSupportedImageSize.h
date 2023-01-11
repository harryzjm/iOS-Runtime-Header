//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@class VNSizeRange;

@interface VNSupportedImageSize : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _cachedCalculatedHash;
    _Bool _orientationAgnostic;
    unsigned int _idealImageFormat;
    unsigned int _idealOrientation;
    VNSizeRange *_pixelsWideRange;
    VNSizeRange *_pixelsHighRange;
    unsigned long long _aspectRatioHandling;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isOrientationAgnostic) _Bool orientationAgnostic; // @synthesize orientationAgnostic=_orientationAgnostic;
@property(readonly, nonatomic) unsigned int idealOrientation; // @synthesize idealOrientation=_idealOrientation;
@property(readonly, nonatomic) unsigned int idealImageFormat; // @synthesize idealImageFormat=_idealImageFormat;
@property(readonly, nonatomic) unsigned long long aspectRatioHandling; // @synthesize aspectRatioHandling=_aspectRatioHandling;
@property(readonly, nonatomic) VNSizeRange *pixelsHighRange; // @synthesize pixelsHighRange=_pixelsHighRange;
@property(readonly, nonatomic) VNSizeRange *pixelsWideRange; // @synthesize pixelsWideRange=_pixelsWideRange;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isAllowedPixelsWide:(unsigned long long)arg1 pixelsHigh:(unsigned long long)arg2;
- (id)initWithIdealFormat:(unsigned int)arg1 pixelsWideRange:(id)arg2 pixelsHighRange:(id)arg3 aspectRatioHandling:(unsigned long long)arg4 idealOrientation:(unsigned int)arg5 orientationAgnostic:(_Bool)arg6;

@end
