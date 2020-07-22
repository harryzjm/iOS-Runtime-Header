//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPrintInteractionControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIPrintActivityWrapperNavigationController <UIPrintInteractionControllerDelegate>
{
    CDUnknownBlockType _completionHandler;
    _Bool _presentedPrintInteractionController;
}

@property(nonatomic) _Bool presentedPrintInteractionController; // @synthesize presentedPrintInteractionController=_presentedPrintInteractionController;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

