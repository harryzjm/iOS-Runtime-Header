//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowUI/WFTreeObserver-Protocol.h>

@class NSMutableArray, NSString, WFTableDataSource, WFTableSectionTreeNode;

@interface WFTableSection : NSObject <WFTreeObserver>
{
    NSString *_headerText;
    NSString *_footerText;
    WFTableSectionTreeNode *_node;
    NSMutableArray *_mutableItems;
}

+ (id)sectionWithCellClass:(Class)arg1 representedObjects:(id)arg2 configurationBlock:(CDUnknownBlockType)arg3;
+ (id)sectionWithStyle:(long long)arg1 representedObjects:(id)arg2 configurationBlock:(CDUnknownBlockType)arg3;
+ (id)sectionWithItems:(id)arg1;
+ (id)section;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *mutableItems; // @synthesize mutableItems=_mutableItems;
@property(readonly, nonatomic) WFTableSectionTreeNode *node; // @synthesize node=_node;
@property(retain, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (_Bool)isEqual:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (unsigned long long)currentIndex;
- (id)tableView;
- (void)treeNode:(id)arg1 flattenedDescendentsDidChangeFrom:(id)arg2 to:(id)arg3 changeSource:(id)arg4;
- (unsigned long long)recursiveChildrenCount;
- (void)updateCellForItem:(id)arg1;
- (void)applyItems:(id)arg1;
@property(readonly, nonatomic) __weak WFTableDataSource *dataSource;
- (id)initWithItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
