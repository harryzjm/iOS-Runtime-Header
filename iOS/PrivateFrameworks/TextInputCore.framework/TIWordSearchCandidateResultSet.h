//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface TIWordSearchCandidateResultSet : NSObject <NSCopying>
{
    _Bool _empty;
    NSMutableArray *_mutableCandidates;
    NSMutableDictionary *_mutableCandidateRefsDictionary;
    NSArray *_initiallyHiddenCandidates;
    unsigned long long _selectedHiddenCandidateIndex;
    NSArray *_proactiveCandidates;
    NSArray *_autoconvertedCandidates;
    NSString *_autoconvertedCandidateString;
    NSString *_autoconvertedInputString;
    NSMutableArray *_mutableProactiveTriggers;
}

+ (id)emptySet;
@property(readonly, nonatomic) NSMutableArray *mutableProactiveTriggers; // @synthesize mutableProactiveTriggers=_mutableProactiveTriggers;
@property(retain, nonatomic) NSString *autoconvertedInputString; // @synthesize autoconvertedInputString=_autoconvertedInputString;
@property(retain, nonatomic) NSString *autoconvertedCandidateString; // @synthesize autoconvertedCandidateString=_autoconvertedCandidateString;
@property(copy, nonatomic) NSArray *autoconvertedCandidates; // @synthesize autoconvertedCandidates=_autoconvertedCandidates;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(retain, nonatomic) NSArray *proactiveCandidates; // @synthesize proactiveCandidates=_proactiveCandidates;
@property(nonatomic) unsigned long long selectedHiddenCandidateIndex; // @synthesize selectedHiddenCandidateIndex=_selectedHiddenCandidateIndex;
@property(copy, nonatomic) NSArray *initiallyHiddenCandidates; // @synthesize initiallyHiddenCandidates=_initiallyHiddenCandidates;
@property(retain, nonatomic) NSMutableDictionary *mutableCandidateRefsDictionary; // @synthesize mutableCandidateRefsDictionary=_mutableCandidateRefsDictionary;
@property(retain, nonatomic) NSMutableArray *mutableCandidates; // @synthesize mutableCandidates=_mutableCandidates;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clearProactiveTriggers;
- (void)moveCandidate:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)setAutoconvertedMecabraCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (void)insertMecabraCandidate:(id)arg1 mecabraCandidateRef:(void *)arg2 atIndex:(unsigned long long)arg3;
- (void)addSyntheticMecabraProactiveCandidate:(id)arg1 triggerSourceType:(unsigned char)arg2;
- (void)addMecabraFacemarkCandidate:(void *)arg1 forInput:(id)arg2;
- (void)addMecabraProactiveCandidate:(void *)arg1 triggerSourceType:(unsigned char)arg2;
- (void)addMecabraCandidate:(id)arg1 mecabraCandidateRef:(void *)arg2;
- (void)insertSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(_Bool)arg3 deleteCount:(unsigned long long)arg4 cursorMovement:(long long)arg5 annotation:(id)arg6;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(_Bool)arg3 deleteCount:(unsigned long long)arg4 cursorMovement:(long long)arg5;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(_Bool)arg3 deleteCount:(unsigned long long)arg4;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(_Bool)arg3;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2;
- (void)addCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
@property(readonly, nonatomic) NSDictionary *candidateRefsDictionary;
@property(readonly, nonatomic) NSArray *candidates;
@property(readonly, nonatomic) NSArray *proactiveTriggers;
- (id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2 initiallyHiddenCandidates:(id)arg3 selectedHiddenCandidateIndex:(unsigned long long)arg4;
- (id)init;

@end

