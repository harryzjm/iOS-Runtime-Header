//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class TSPAbstractMutableLargeDictionary;

__attribute__((visibility("hidden")))
@interface TSPAbstractMutableLargeDictionaryKeyEnumerator : NSEnumerator
{
    unsigned long long _segmentIndex;
    NSEnumerator *_segmentEnumerator;
    TSPAbstractMutableLargeDictionary *_dictionary;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithDictionary:(id)arg1;

@end

