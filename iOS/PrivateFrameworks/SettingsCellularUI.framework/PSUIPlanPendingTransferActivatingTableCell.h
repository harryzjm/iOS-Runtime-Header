//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTCellularPlanPendingTransfer, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferActivatingTableCell
{
    CTCellularPlanPendingTransfer *_planPendingTransfer;
    UIActivityIndicatorView *_spinner;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer; // @synthesize planPendingTransfer=_planPendingTransfer;
- (id)_setStatusLabelText;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

