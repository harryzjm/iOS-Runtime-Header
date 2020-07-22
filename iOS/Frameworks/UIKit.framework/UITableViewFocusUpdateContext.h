//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexPath, UITableView;

@interface UITableViewFocusUpdateContext
{
    _Bool _didSetPreviouslyFocusedIndexPath;
    _Bool _didSetNextFocusedIndexPath;
    NSIndexPath *_previouslyFocusedIndexPath;
    NSIndexPath *_nextFocusedIndexPath;
    UITableView *_tableView;
}

+ (id)_contextWithContext:(id)arg1 tableView:(id)arg2;
@property(readonly, nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSIndexPath *nextFocusedIndexPath; // @synthesize nextFocusedIndexPath=_nextFocusedIndexPath;
@property(readonly, nonatomic) NSIndexPath *previouslyFocusedIndexPath; // @synthesize previouslyFocusedIndexPath=_previouslyFocusedIndexPath;
- (id)_initWithContext:(id)arg1 tableView:(id)arg2;

@end

