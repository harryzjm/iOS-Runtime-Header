//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MKCustomSeparatorCell.h"

@class UIActivityIndicatorView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitLoadingTableViewCell : MKCustomSeparatorCell
{
    _MKUILabel *_loadingLabel;
    UIActivityIndicatorView *_loadingIndicator;
}

- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end

