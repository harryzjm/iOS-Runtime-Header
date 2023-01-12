//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRTextFeature, NSString;
@protocol CRTextRecognizerDecodingTransientResult;

__attribute__((visibility("hidden")))
@interface CRFeatureSequenceRecognitionInfo : NSObject
{
    float _scale;
    CRTextFeature *_textFeature;
    long long _orientationAdjustment;
    double _orientationConfidence;
    NSString *_orientationOutputResult;
    NSString *_sequenceScript;
    NSString *_sequenceScriptOutputResult;
    NSObject<CRTextRecognizerDecodingTransientResult> *_transientDecodingResult;
    struct CGSize _featureImageSize;
    struct CGRect _bounds;
    struct CGRect _rotatedROI;
}

+ (id)infoForFeature:(id)arg1 scale:(float)arg2 bounds:(struct CGRect)arg3 featureImageSize:(struct CGSize)arg4 rotatedROI:(struct CGRect)arg5;
- (void).cxx_destruct;
@property(retain) NSObject<CRTextRecognizerDecodingTransientResult> *transientDecodingResult; // @synthesize transientDecodingResult=_transientDecodingResult;
@property(retain) NSString *sequenceScriptOutputResult; // @synthesize sequenceScriptOutputResult=_sequenceScriptOutputResult;
@property(retain) NSString *sequenceScript; // @synthesize sequenceScript=_sequenceScript;
@property(retain) NSString *orientationOutputResult; // @synthesize orientationOutputResult=_orientationOutputResult;
@property double orientationConfidence; // @synthesize orientationConfidence=_orientationConfidence;
@property long long orientationAdjustment; // @synthesize orientationAdjustment=_orientationAdjustment;
@property struct CGRect rotatedROI; // @synthesize rotatedROI=_rotatedROI;
@property struct CGSize featureImageSize; // @synthesize featureImageSize=_featureImageSize;
@property struct CGRect bounds; // @synthesize bounds=_bounds;
@property float scale; // @synthesize scale=_scale;
@property(retain) CRTextFeature *textFeature; // @synthesize textFeature=_textFeature;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

