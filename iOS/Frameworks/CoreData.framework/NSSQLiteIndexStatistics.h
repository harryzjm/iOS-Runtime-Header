//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSSQLiteIndexStatistics : NSObject
{
    NSString *_storeIdentifier;
    NSString *_indexName;
    long long _executionCount;
    long long _instructionCount;
    long long _rowCount;
}

@property(readonly, nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
@property(readonly, nonatomic) long long instructionCount; // @synthesize instructionCount=_instructionCount;
@property(readonly, nonatomic) long long executionCount; // @synthesize executionCount=_executionCount;
@property(readonly, nonatomic) NSString *indexName; // @synthesize indexName=_indexName;
@property(readonly, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
- (void)dealloc;
- (id)init;
- (id)initWithResultDictionary:(id)arg1 storeID:(id)arg2;
- (id)initWithName:(id)arg1 storeID:(id)arg2;

@end
