//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UISegmentedControl;
@protocol SFPrivacyReportDetailToggleTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SFPrivacyReportDetailToggleTableViewCell : UITableViewCell
{
    UISegmentedControl *_segmentedControl;
    UILabel *_titleLabel;
    _Bool _useCurrentWebsiteHeader;
    long long _detailType;
    id <SFPrivacyReportDetailToggleTableViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useCurrentWebsiteHeader; // @synthesize useCurrentWebsiteHeader=_useCurrentWebsiteHeader;
@property(nonatomic) __weak id <SFPrivacyReportDetailToggleTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long detailType; // @synthesize detailType=_detailType;
- (void)_updateTitle;
- (void)_selectDetailType:(long long)arg1;
- (void)_addSegmentForDetailType:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
