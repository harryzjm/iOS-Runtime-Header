//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMEmbeddedHardwareJPEGTranscoder : NSObject
{
    _Bool _stripImageMetadata;
    double _targetJPEGCompressionValue;
}

@property(nonatomic) _Bool stripImageMetadata; // @synthesize stripImageMetadata=_stripImageMetadata;
@property(nonatomic) double targetJPEGCompressionValue; // @synthesize targetJPEGCompressionValue=_targetJPEGCompressionValue;
- (_Bool)scaleImageToFitLargestDimension:(id)arg1 outputData:(id *)arg2;
- (id)initWithImageData:(id)arg1 imageSource:(struct CGImageSource *)arg2;

@end
