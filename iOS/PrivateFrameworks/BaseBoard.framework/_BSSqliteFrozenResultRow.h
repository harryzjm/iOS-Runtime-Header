//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface _BSSqliteFrozenResultRow
{
    unsigned long long _count;
    NSArray *_frozenColumnNames;
    NSArray *_frozenObjects;
    NSArray *_frozenIntegers;
    NSArray *_frozenDoubles;
    NSArray *_frozenStrings;
    NSArray *_frozenDatas;
}

- (unsigned long long)_indexForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataAtIndex:(unsigned long long)arg1;
- (id)stringAtIndex:(unsigned long long)arg1;
- (double)doubleAtIndex:(unsigned long long)arg1;
- (long long)integerAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (_Bool)isValid;
- (void)dealloc;
- (id)initWithResultRow:(id)arg1;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1;

@end
