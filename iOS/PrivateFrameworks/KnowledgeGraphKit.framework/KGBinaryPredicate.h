//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface KGBinaryPredicate : NSObject
{
    unsigned long long _comparator;
    id _value;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long comparator; // @synthesize comparator=_comparator;
- (id)initWithComparator:(unsigned long long)arg1 value:(id)arg2;

@end
