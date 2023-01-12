//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MADVIDocumentRecognitionRequest
{
    _Bool _usesLanguageDetection;
    NSArray *_languages;
    unsigned long long _maximumCandidateCount;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool usesLanguageDetection; // @synthesize usesLanguageDetection=_usesLanguageDetection;
@property(nonatomic) unsigned long long maximumCandidateCount; // @synthesize maximumCandidateCount=_maximumCandidateCount;
@property(copy, nonatomic) NSArray *languages; // @synthesize languages=_languages;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguages:(id)arg1;
- (id)init;

@end
