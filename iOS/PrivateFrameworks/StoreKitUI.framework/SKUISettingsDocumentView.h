//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol SKUISettingsDocumentViewDelegate;

@interface SKUISettingsDocumentView : UIView
{
    id <SKUISettingsDocumentViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SKUISettingsDocumentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tintColorDidChange;

@end

