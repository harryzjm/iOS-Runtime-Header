//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary;

@interface HFMutableItemUpdateOutcome
{
    NSMutableDictionary *_mutableResults;
}

@property(retain, nonatomic) NSMutableDictionary *mutableResults; // @synthesize mutableResults=_mutableResults;
- (void).cxx_destruct;
- (void)addResultsFromDictionary:(id)arg1;
- (void)addResultsFromOutcome:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSDictionary *results;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithResults:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(nonatomic) unsigned long long outcomeType; // @dynamic outcomeType;

@end

