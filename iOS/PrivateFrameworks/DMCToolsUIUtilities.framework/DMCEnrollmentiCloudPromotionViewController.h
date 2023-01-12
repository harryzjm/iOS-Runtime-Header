//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol DMCEnrollmentiCloudPromotionViewControllerDelegate;

@interface DMCEnrollmentiCloudPromotionViewController
{
    NSString *_quotaString;
    unsigned long long _type;
    id <DMCEnrollmentiCloudPromotionViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <DMCEnrollmentiCloudPromotionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *quotaString; // @synthesize quotaString=_quotaString;
- (void)leftBarButtonTapped:(id)arg1;
- (void)_setupBottomViewForType:(unsigned long long)arg1;
- (void)_setupUIForType:(unsigned long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithType:(unsigned long long)arg1 delegate:(id)arg2;

@end
