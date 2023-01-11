//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPItem, NSCache;
@protocol FPItemHierarchyLookingUp;

@interface FPItemHierarchyLookup : NSObject
{
    FPItem *_item;
    id <FPItemHierarchyLookingUp> _hierarchyServicer;
    NSCache *_parentHierarchyItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *parentHierarchyItems; // @synthesize parentHierarchyItems=_parentHierarchyItems;
@property __weak id <FPItemHierarchyLookingUp> hierarchyServicer; // @synthesize hierarchyServicer=_hierarchyServicer;
- (id)valueForKeyPath:(id)arg1;
- (id)_fetchItemWithID:(id)arg1;
- (id)initWithItem:(id)arg1 parentHierarchyItems:(id)arg2 hierarchyServicer:(id)arg3;

@end
