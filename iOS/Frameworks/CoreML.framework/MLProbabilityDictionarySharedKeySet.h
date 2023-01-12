//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSEnumerator;

__attribute__((visibility("hidden")))
@interface MLProbabilityDictionarySharedKeySet : NSObject
{
    NSDictionary *_labelToIndex;
    NSArray *_labels;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSEnumerator *labelEnumerator;
- (id)labelAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long uniqueLabelCount;
@property(readonly, nonatomic) unsigned long long count;
- (unsigned long long)indexOfLabel:(id)arg1;
- (id)initWithLabels:(id)arg1;

@end

