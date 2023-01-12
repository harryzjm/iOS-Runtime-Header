//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIDictationInterpretation : NSObject
{
    NSArray *_tokens;
    double _averageConfidenceScore;
}

+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(const struct __CFString *)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) double averageConfidenceScore; // @synthesize averageConfidenceScore=_averageConfidenceScore;
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)serializedInterpretationWithTransform:(const struct __CFString *)arg1;
@property(readonly, nonatomic) _Bool removeSpaceAfter;
@property(readonly, nonatomic) _Bool removeSpaceBefore;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTokens:(id)arg1 score:(double)arg2;
- (id)initWithTokens:(id)arg1;

@end

