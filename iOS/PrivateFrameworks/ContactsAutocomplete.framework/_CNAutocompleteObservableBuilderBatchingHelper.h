//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _CNAutocompleteObservableBuilderBatchingHelper : NSObject
{
    NSArray *_batches;
}

@property(readonly, nonatomic) NSArray *batches; // @synthesize batches=_batches;
- (void).cxx_destruct;
- (id)batchedObservables;
- (void)addObservable:(id)arg1 toBatchAtIndex:(unsigned long long)arg2;
- (id)initWithBatchCount:(unsigned long long)arg1;

@end
