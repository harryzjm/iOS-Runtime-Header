//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _PASStringPairs : NSObject
{
    NSArray *_keys;
    NSArray *_values;
}

@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSArray *keys; // @synthesize keys=_keys;
- (void).cxx_destruct;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;
- (id)initWithKeys:(id)arg1 values:(id)arg2;

@end

