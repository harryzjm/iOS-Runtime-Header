//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@protocol PXNavigationListItem;

@interface PXNavigationListCell : UITableViewCell
{
    _Bool _enabled;
    id <PXNavigationListItem> _listItem;
    long long _separatorStyleWorkaround57597636;
}

+ (id)_symbolConfigurationForFont:(id)arg1;
+ (id)detailTextLabelFont;
+ (id)textLabelFont;
- (void).cxx_destruct;
@property(nonatomic) long long separatorStyleWorkaround57597636; // @synthesize separatorStyleWorkaround57597636=_separatorStyleWorkaround57597636;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) id <PXNavigationListItem> listItem; // @synthesize listItem=_listItem;
- (void)setSeparatorStyle:(long long)arg1;
- (id)_currentCellColor;
- (void)layoutSubviews;
- (void)_updateCellStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
