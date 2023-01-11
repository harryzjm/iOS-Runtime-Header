//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSOperationQueue, SKUIDonationConfiguration, SKUIDonationViewController, SKUIGiftCharity;

__attribute__((visibility("hidden")))
@interface SKUIDonationStepViewController : UIViewController
{
    SKUIGiftCharity *_charity;
    SKUIDonationConfiguration *_configuration;
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) SKUIDonationConfiguration *donationConfiguration; // @synthesize donationConfiguration=_configuration;
@property(readonly, nonatomic) SKUIGiftCharity *charity; // @synthesize charity=_charity;
@property(readonly, nonatomic) SKUIDonationViewController *donationViewController;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;

@end
