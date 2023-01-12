//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIDictationInterpretation;

__attribute__((visibility("hidden")))
@interface UIDictationInterpretationGroup : NSObject
{
    _Bool _isLowConfidence;
    NSArray *_interpretations;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isLowConfidence; // @synthesize isLowConfidence=_isLowConfidence;
@property(readonly, nonatomic) NSArray *interpretations; // @synthesize interpretations=_interpretations;
- (id)description;
@property(readonly, nonatomic) UIDictationInterpretation *bestInterpretation;
@property(readonly, nonatomic) double bestConfidenceScore;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterpretations:(id)arg1 isLowConfidence:(_Bool)arg2;
- (id)initWithInterpretations:(id)arg1;

@end

