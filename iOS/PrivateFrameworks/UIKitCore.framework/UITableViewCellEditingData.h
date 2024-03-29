//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITableViewCell, UITableViewCellEditControl, UITableViewCellReorderControl, UIView;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditingData : NSObject
{
    UITableViewCell *_cell;
    long long _editingStyle;
    UITableViewCellEditControl *_editControl;
    UITableViewCellReorderControl *_reorderControl;
    UIView *_reorderSeparatorView;
    struct {
        unsigned int addedEditControlAsSubview:1;
        unsigned int addedReorderControlAsSubview:1;
        unsigned int addedReorderSeparatorViewAsSubview:1;
    } _flags;
}

- (void).cxx_destruct;
- (id)reorderSeparatorView:(_Bool)arg1;
- (id)reorderControl:(_Bool)arg1;
- (id)editControl:(_Bool)arg1;
@property(readonly, nonatomic) _Bool wantsMaskingWhileAnimatingDisabled;
- (void)dealloc;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2;

@end

