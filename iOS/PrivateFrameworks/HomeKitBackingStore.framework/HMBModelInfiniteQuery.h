//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HMBModelInfiniteQuery
{
    NSString *_sequenceArgumentName;
}

+ (id)queryWithSQLPredicate:(id)arg1 sequenceArgumentName:(id)arg2 indexedProperties:(id)arg3 arguments:(id)arg4;
- (void).cxx_destruct;
@property(readonly, copy) NSString *sequenceArgumentName; // @synthesize sequenceArgumentName=_sequenceArgumentName;
- (id)performQueryOn:(id)arg1 arguments:(id)arg2;
- (id)initWithSQLPredicate:(id)arg1 sqlColumns:(id)arg2 sequenceArgumentName:(id)arg3 maximumRowsPerSelect:(unsigned long long)arg4 indexNameSuffix:(id)arg5 indexedColumns:(id)arg6 arguments:(id)arg7;

@end
