//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIDragPreviewTarget, UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewDropAnimationToTarget
{
    _Bool _didSearchForCell;
    UIDragPreviewTarget *_target;
    UITableViewCell *_cell;
}

@property(retain, nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) _Bool didSearchForCell; // @synthesize didSearchForCell=_didSearchForCell;
@property(retain, nonatomic) UIDragPreviewTarget *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)cellForTargetContainerInTableView:(id)arg1;
- (id)initWithDragItem:(id)arg1 target:(id)arg2;

@end
