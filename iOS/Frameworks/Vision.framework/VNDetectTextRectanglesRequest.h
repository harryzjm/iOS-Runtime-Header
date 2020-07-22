//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface VNDetectTextRectanglesRequest
{
    unsigned long long _algorithm;
    NSString *_textRecognition;
    unsigned long long _minimumCharacterPixelHeight;
    _Bool _reportCharacterBoxes;
    _Bool _detectDiacritics;
    _Bool _minimizeFalseDetections;
}

+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (void)initialize;
@property(nonatomic) _Bool minimizeFalseDetections; // @synthesize minimizeFalseDetections=_minimizeFalseDetections;
@property(nonatomic) _Bool detectDiacritics; // @synthesize detectDiacritics=_detectDiacritics;
@property(nonatomic) _Bool reportCharacterBoxes; // @synthesize reportCharacterBoxes=_reportCharacterBoxes;
@property(nonatomic) unsigned long long minimumCharacterPixelHeight; // @synthesize minimumCharacterPixelHeight=_minimumCharacterPixelHeight;
- (void).cxx_destruct;
- (_Bool)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (_Bool)_detectTextWithRequestPerformingContext:(id)arg1 error:(id *)arg2;
- (_Bool)_detectCreditCardTextWithRequestPerformingContext:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSString *textRecognition; // @synthesize textRecognition=_textRecognition;
@property(nonatomic) unsigned long long algorithm; // @synthesize algorithm=_algorithm;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)sequencedRequestPreviousObservationsKey;
- (id)observationsCacheKey;

@end

