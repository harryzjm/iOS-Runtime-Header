//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface EKEventAttachmentCell : UITableViewCell
{
    UIActivityIndicatorView *_activityIndicator;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)showSpinner:(_Bool)arg1;
- (void)setAttachment:(id)arg1;
- (id)_iconForDocumentProxy:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

