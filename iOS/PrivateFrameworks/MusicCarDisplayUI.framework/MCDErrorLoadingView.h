//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol MCDErrorViewDelegate;

@interface MCDErrorLoadingView : UIView
{
    _Bool _shouldEnableNetwork;
    id <MCDErrorViewDelegate> _delegate;
}

@property(nonatomic) _Bool shouldEnableNetwork; // @synthesize shouldEnableNetwork=_shouldEnableNetwork;
@property(nonatomic) __weak id <MCDErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)retryButtonPressed:(id)arg1;
- (id)initWithTitle:(id)arg1 buttonText:(id)arg2;

@end

