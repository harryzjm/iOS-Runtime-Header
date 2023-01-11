//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSIndexSet;

@interface AVApplePortraitMetadataInternal : NSObject
{
    int version;
    float apertureFocalRatio;
    float minimumApertureFocalRatio;
    float maximumApertureFocalRatio;
    float luminanceNoiseAmplitude;
    int faceOrientation;
    NSData *faceObservationsData;
    NSIndexSet *indexesOfShallowDepthOfFieldObservations;
    struct CGRect focusRectangle;
}

@property(nonatomic) struct CGRect focusRectangle; // @synthesize focusRectangle;
@property(retain, nonatomic) NSIndexSet *indexesOfShallowDepthOfFieldObservations; // @synthesize indexesOfShallowDepthOfFieldObservations;
@property(retain, nonatomic) NSData *faceObservationsData; // @synthesize faceObservationsData;
@property(nonatomic) int faceOrientation; // @synthesize faceOrientation;
@property(nonatomic) float luminanceNoiseAmplitude; // @synthesize luminanceNoiseAmplitude;
@property(nonatomic) float maximumApertureFocalRatio; // @synthesize maximumApertureFocalRatio;
@property(nonatomic) float minimumApertureFocalRatio; // @synthesize minimumApertureFocalRatio;
@property(nonatomic) float apertureFocalRatio; // @synthesize apertureFocalRatio;
@property(nonatomic) int version; // @synthesize version;
- (void)dealloc;
- (id)init;

@end

