//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AXMTextDetectionOptions : NSObject <NSSecureCoding>
{
    _Bool _usesLanguageCorrection;
    _Bool _correctSpelling;
    unsigned long long _recognitionLevel;
    double _normalizedMinimumTextHeightRatio;
    NSArray *_textDetectionLocales;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultOptions;
- (void).cxx_destruct;
@property(nonatomic) _Bool correctSpelling; // @synthesize correctSpelling=_correctSpelling;
@property(retain, nonatomic) NSArray *textDetectionLocales; // @synthesize textDetectionLocales=_textDetectionLocales;
@property(nonatomic) _Bool usesLanguageCorrection; // @synthesize usesLanguageCorrection=_usesLanguageCorrection;
@property(nonatomic) double normalizedMinimumTextHeightRatio; // @synthesize normalizedMinimumTextHeightRatio=_normalizedMinimumTextHeightRatio;
@property(nonatomic) unsigned long long recognitionLevel; // @synthesize recognitionLevel=_recognitionLevel;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;

@end
