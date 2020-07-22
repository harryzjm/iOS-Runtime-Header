//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SGNameInversionPredictor : NSObject
{
    struct __CFDictionary *_tradToTrie;
    NSDictionary *_tradToInversionRate;
    double _confidenceThreshold;
}

+ (_Bool)shouldInvertFirst:(id)arg1 last:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)shouldInvertFirst:(id)arg1 last:(id)arg2 underNamingTradition:(id)arg3;
- (double)inversionRateForNamingTradition:(id)arg1;
- (double)firstNameLikelihood:(id)arg1 underNamingTradition:(id)arg2 default:(double)arg3;
- (struct _CFBurstTrie *)getTrieForNamingTradition:(id)arg1;
- (float)decodeTriePayload:(unsigned int)arg1;
- (_Bool)shouldInvertFirst:(id)arg1 last:(id)arg2;
- (void)dealloc;
- (id)init;

@end

