//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertController.h>

@class UIAlertAction;

@interface WBUFormAutoFillMultipleLoginsAlertController : UIAlertController
{
    UIAlertAction *_cancelAction;
    id _appDidEnterBackgroundObserver;
    _Bool _cancelsWhenAppEntersBackground;
}

+ (id)alertControllerWithMatchesFromFormProtectionSpace:(id)arg1 matchesFromOtherProtectionSpaces:(id)arg2 preferredStyle:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(nonatomic) _Bool cancelsWhenAppEntersBackground; // @synthesize cancelsWhenAppEntersBackground=_cancelsWhenAppEntersBackground;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;

@end
