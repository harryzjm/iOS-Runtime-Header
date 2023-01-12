//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMIAggregateImage-Protocol.h>

@class CIContext, CIImage, NSMutableArray;

@interface HMIApproximateMedianImage : HMFObject <HMIAggregateImage>
{
    NSMutableArray *_images;
    CIImage *_medianImage;
    CIContext *_context;
}

- (void).cxx_destruct;
@property(readonly) CIContext *context; // @synthesize context=_context;
@property(retain) CIImage *medianImage; // @synthesize medianImage=_medianImage;
@property(retain) NSMutableArray *images; // @synthesize images=_images;
@property(readonly) unsigned long long imageCount;
- (void)reset;
- (id)outputImage;
- (id)computedMedianImage;
- (void)addImage:(id)arg1;
- (id)approximateMedianWithImages:(id)arg1;
- (id)init;

@end
