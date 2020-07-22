//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@protocol ICPaperStyleUIActivityDelegate;

@interface ICPaperStyleUIActivity : UIActivity
{
    id <ICPaperStyleUIActivityDelegate> _delegate;
}

@property(nonatomic) __weak id <ICPaperStyleUIActivityDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (long long)activityCategory;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithDelegate:(id)arg1;

@end
