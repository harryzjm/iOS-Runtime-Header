//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol PXDisplayCollectionList;

@interface PXNavigationListDisplayCollectionListItem
{
    _Bool _draggable;
    _Bool _reorderable;
    _Bool _renamable;
    _Bool _deletable;
    _Bool _expandable;
    _Bool _expanded;
    NSString *_glyphImageName;
    id <PXDisplayCollectionList> _collection;
    long long _indentationLevel;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(readonly, nonatomic) id <PXDisplayCollectionList> collection; // @synthesize collection=_collection;
- (_Bool)isExpandable;
- (_Bool)isDeletable;
- (_Bool)isRenamable;
@property(nonatomic, getter=isReorderable) _Bool reorderable; // @synthesize reorderable=_reorderable;
@property(nonatomic, getter=isDraggable) _Bool draggable; // @synthesize draggable=_draggable;
- (id)glyphImageName;
- (id)representedObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 displayCollectionList:(id)arg2 title:(id)arg3 itemCount:(long long)arg4;

@end
