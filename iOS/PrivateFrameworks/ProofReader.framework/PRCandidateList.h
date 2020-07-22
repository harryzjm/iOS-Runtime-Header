//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PRCandidateList : NSObject
{
    NSMutableArray *_candidates;
    unsigned long long _maxCount;
    struct _NSRange _defaultReplacementRange;
}

- (struct _NSRange)defaultReplacementRange;
- (_Bool)isFull;
- (unsigned long long)maxCount;
- (unsigned long long)count;
- (id)candidateStrings;
- (id)candidates;
- (void)addTranspositionCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 intendedFirstCharacter:(unsigned short)arg4 intendedSecondCharacter:(unsigned short)arg5;
- (void)addReplacementCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 intendedCharacter:(unsigned short)arg4 actualCharacter:(unsigned short)arg5;
- (void)addCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 errorType:(unsigned long long)arg4;
- (void)addCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 errorType:(unsigned long long)arg3;
- (void)addCandidateWithString:(id)arg1 errorType:(unsigned long long)arg2;
- (void)addCandidateWithString:(id)arg1 replacementRange:(struct _NSRange)arg2 errorType:(unsigned long long)arg3;
- (void)addCandidateWithWords:(id)arg1 replacementRange:(struct _NSRange)arg2 errorType:(unsigned long long)arg3;
- (void)addCandidate:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithMaxCount:(unsigned long long)arg1 defaultReplacementRange:(struct _NSRange)arg2;

@end

