//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface WFActionSearchRankedResults
{
    NSMutableDictionary *_displayNames;
    NSMutableDictionary *_records;
}

- (void).cxx_destruct;
- (id)rankedGroups;
- (void)addAction:(id)arg1 forKey:(id)arg2 type:(unsigned long long)arg3;
- (void)addKey:(id)arg1 withDisplayName:(id)arg2 type:(unsigned long long)arg3;
- (id)init;

@end
