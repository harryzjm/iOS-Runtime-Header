//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutDynamicsConfiguration : NSObject
{
    NSMutableArray *_dirtyItems;
    NSArray *_items;
    NSMutableDictionary *_behaviorDict;
    struct CGRect _previousVisibleBounds;
    struct CGRect _currentVisibleBounds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *behaviorDict; // @synthesize behaviorDict=_behaviorDict;
@property(nonatomic) struct CGRect currentVisibleBounds; // @synthesize currentVisibleBounds=_currentVisibleBounds;
@property(nonatomic) struct CGRect previousVisibleBounds; // @synthesize previousVisibleBounds=_previousVisibleBounds;
- (id)_dirtyItems;
- (void)_reset;
- (void)_setBehaviors:(id)arg1 forItem:(id)arg2;
@property(retain, nonatomic) NSArray *dynamicItems;
- (void)setBehaviors:(id)arg1 forItem:(id)arg2;
- (id)behaviorsForItem:(id)arg1;
- (id)init;

@end

