//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@class NSString;

@interface INIntent (IntentUtilities)
- (_Bool)_atx_matchesParameterIdentifiersWithIntent:(id)arg1;
- (id)_atx_intentsForAllParameterCombinations;
@property(readonly, copy, nonatomic) NSString *atx_intentType;
- (_Bool)atx_isEqualToIntent:(id)arg1;
- (unsigned long long)atx_backingStoreDataHash;
- (id)atx_hashApproximately;
- (id)atx_nonNilParametersByName;
@end

