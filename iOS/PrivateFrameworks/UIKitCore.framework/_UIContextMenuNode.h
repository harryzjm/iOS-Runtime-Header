//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIMenu, _UIContextMenuListView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuNode : NSObject
{
    _UIContextMenuListView *_listView;
    UIMenu *_menu;
    _UIContextMenuNode *_previous;
    _UIContextMenuNode *_next;
}

- (void).cxx_destruct;
@property(nonatomic) __weak _UIContextMenuNode *next; // @synthesize next=_next;
@property(nonatomic) __weak _UIContextMenuNode *previous; // @synthesize previous=_previous;
@property(retain, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) _UIContextMenuListView *listView; // @synthesize listView=_listView;
- (id)description;

@end
