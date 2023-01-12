//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel, UIProgressView;

@interface ICQCloudStorageMeteredBarButtonView : UIView
{
    double _percentUsed;
    UILabel *_storageString;
    UIProgressView *_progressBar;
}

+ (id)barButtonItemWithString:(id)arg1 andPercentUsed:(double)arg2;
- (void).cxx_destruct;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)initWithString:(id)arg1 andPercentUsed:(double)arg2;

@end
