//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITableViewCell;

@interface EKEventDeleteButtonEditItem
{
    UITableViewCell *_cell;
    id _deleteButtonTarget;
    SEL _deleteButtonAction;
}

- (void).cxx_destruct;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (void)setDeleteButtonTarget:(id)arg1 action:(SEL)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;

@end
