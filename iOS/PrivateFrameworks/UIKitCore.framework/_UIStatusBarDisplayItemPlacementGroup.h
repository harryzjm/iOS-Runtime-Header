//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementGroup : NSObject
{
    NSArray *_placements;
    long long _minimumPriority;
    long long _maximumPriority;
}

+ (id)groupWithPriority:(long long)arg1 placements:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long maximumPriority; // @synthesize maximumPriority=_maximumPriority;
@property(readonly, nonatomic) long long minimumPriority; // @synthesize minimumPriority=_minimumPriority;
@property(copy, nonatomic) NSArray *placements; // @synthesize placements=_placements;
@property(nonatomic) _Bool enabled;

@end
