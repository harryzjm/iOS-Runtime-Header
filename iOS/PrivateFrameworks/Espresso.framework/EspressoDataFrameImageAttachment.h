//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface EspressoDataFrameImageAttachment
{
    struct vImage_Buffer buffer;
    int _nChannels;
}

+ (struct __CVBuffer *)createCVPixelBufferFromvImage:(struct vImage_Buffer)arg1 withPixelFormat:(unsigned int)arg2;
@property int nChannels; // @synthesize nChannels=_nChannels;
- (void)loadFromDict:(id)arg1 frameStorage:(id)arg2;
- (struct vImage_Buffer)copyAsImageGrayscaleOrBGRA;

@end

