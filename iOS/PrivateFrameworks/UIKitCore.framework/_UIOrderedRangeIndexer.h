//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIOrderedRangeIndexer : NSObject
{
    struct shared_ptr<_UIOrderedRangeIndexerImpl> _orderedRangeIndexerImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct _NSRange containingRange;
@property(readonly, nonatomic) long long numberOfRanges;
- (struct _NSRange)rangeAtIndex:(long long)arg1;
- (long long)indexOfRangeContainingLocation:(long long)arg1;
- (struct _NSRange)rangeContainingLocation:(long long)arg1;
- (void)appendRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) NSArray *orderedRanges;
- (id)description;
- (id)init;

@end
