//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface REUpNextSetNode : NSObject
{
    id _item;
    REUpNextSetNode *_parent;
    NSMutableArray *_children;
    unsigned long long _rank;
}

@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(retain, nonatomic) REUpNextSetNode *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) id item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)remove;
- (void)join:(id)arg1;
- (id)rootNode;
- (id)initWithItem:(id)arg1;

@end

