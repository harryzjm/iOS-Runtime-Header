//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UITableView;

__attribute__((visibility("hidden")))
@interface MRURoutingView : UIView
{
    UITableView *_tableView;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

