//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSOperationQueue, SKUIGift, SKUIGiftConfiguration, SSVLoadURLOperation;

@interface SKUIGiftStepViewController : UIViewController
{
    SKUIGift *_gift;
    SKUIGiftConfiguration *_giftConfiguration;
    SSVLoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) SKUIGiftConfiguration *giftConfiguration; // @synthesize giftConfiguration=_giftConfiguration;
- (void).cxx_destruct;
- (void)_finishImageLoadWithImage:(id)arg1 error:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)loadItemArtworkWithArtworkContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) SKUIGift *gift; // @synthesize gift=_gift;
- (void)finishGiftingWithResult:(_Bool)arg1;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;

@end

