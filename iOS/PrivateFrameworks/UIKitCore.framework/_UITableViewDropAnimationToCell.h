//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIDragPreviewParameters, UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewDropAnimationToCell
{
    UITableViewCell *_cell;
    UIDragPreviewParameters *_previewParameters;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIDragPreviewParameters *previewParameters; // @synthesize previewParameters=_previewParameters;
@property(nonatomic) __weak UITableViewCell *cell; // @synthesize cell=_cell;
- (id)initWithDragItem:(id)arg1 cell:(id)arg2 previewParameters:(id)arg3;

@end

