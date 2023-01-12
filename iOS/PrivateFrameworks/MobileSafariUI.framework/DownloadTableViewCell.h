//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, UIProgressView, _SFDownload, _SFDownloadIconCache;
@protocol DownloadTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface DownloadTableViewCell : UITableViewCell
{
    UILabel *_nameLabel;
    UILabel *_statusLabel;
    UIProgressView *_progressView;
    UIButton *_cancelButton;
    UIButton *_revealButton;
    UIButton *_resumeButton;
    CDStruct_4e0a34f2 deferrableUpdateViewState;
    _SFDownload *_download;
    _SFDownloadIconCache *_iconCache;
    id <DownloadTableViewCellDelegate> _delegate;
    UIImageView *_iconView;
}

+ (id)tableViewCellForSizeEstimation;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <DownloadTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _SFDownloadIconCache *iconCache; // @synthesize iconCache=_iconCache;
@property(retain, nonatomic) _SFDownload *download; // @synthesize download=_download;
- (void)downloadIconCache:(id)arg1 didGenerateNewIcon:(id)arg2 forSource:(id)arg3;
- (void)updateContents;
- (CDStruct_4e0a34f2 *)deferrableUpdateViewState;
- (id)_busyStatus;
- (void)_updateCellContentsForSizing;
- (void)_updateCellContents;
- (void)_downloadURLChanged:(id)arg1;
- (void)_downloadChanged:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

