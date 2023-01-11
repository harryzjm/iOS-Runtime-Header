//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@protocol SBIconListLayoutProvider;

@interface SBHIconTableViewHeaderFooterView : UITableViewHeaderFooterView
{
    id <SBIconListLayoutProvider> _listLayoutProvider;
    struct SBIconImageInfo _iconImageInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SBIconListLayoutProvider> listLayoutProvider; // @synthesize listLayoutProvider=_listLayoutProvider;
@property(nonatomic) struct SBIconImageInfo iconImageInfo; // @synthesize iconImageInfo=_iconImageInfo;
- (void)layoutSubviews;
- (void)_updateFont;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;

@end
