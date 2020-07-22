//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface RKEventIdentification : NSObject
{
    NSArray *_tokenSequences;
    float *_probabilities;
}

@property(readonly, nonatomic) NSArray *tokenSequences; // @synthesize tokenSequences=_tokenSequences;
- (void).cxx_destruct;
- (id)description;
- (CDStruct_cd0cafa4)topClassification;
- (void)getTopKClassifications:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateTopKClassificationsForEachString:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateClassifiedTokens:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithOwnedTokenSequences:(id)arg1 probabilities:(float *)arg2;
- (id)init;

@end

