//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VNDetectTextRectanglesRequestConfiguration
{
    _Bool _reportCharacterBoxes;
    _Bool _detectDiacritics;
    _Bool _minimizeFalseDetections;
    unsigned long long _algorithm;
    unsigned long long _minimumCharacterPixelHeight;
    NSString *_textRecognition;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *textRecognition; // @synthesize textRecognition=_textRecognition;
@property(nonatomic) _Bool minimizeFalseDetections; // @synthesize minimizeFalseDetections=_minimizeFalseDetections;
@property(nonatomic) _Bool detectDiacritics; // @synthesize detectDiacritics=_detectDiacritics;
@property(nonatomic) unsigned long long minimumCharacterPixelHeight; // @synthesize minimumCharacterPixelHeight=_minimumCharacterPixelHeight;
@property(nonatomic) unsigned long long algorithm; // @synthesize algorithm=_algorithm;
@property(nonatomic) _Bool reportCharacterBoxes; // @synthesize reportCharacterBoxes=_reportCharacterBoxes;
- (id)initWithRequestClass:(Class)arg1;

@end
