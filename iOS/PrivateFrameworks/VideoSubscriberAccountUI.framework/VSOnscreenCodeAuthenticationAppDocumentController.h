//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccountUI/VSMessageQueueDelegate-Protocol.h>

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface VSOnscreenCodeAuthenticationAppDocumentController <VSMessageQueueDelegate>
{
    IKViewElement *_regenerateCodeButtonElement;
}

@property(retain, nonatomic) IKViewElement *regenerateCodeButtonElement; // @synthesize regenerateCodeButtonElement=_regenerateCodeButtonElement;
- (void).cxx_destruct;
- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;
- (id)_newViewModel;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)didAddMessagesToMessageQueue:(id)arg1;
- (_Bool)_updateOnscreenCodeViewModel:(id)arg1 withTemplate:(id)arg2;
- (_Bool)_updateOnscreenCodeViewModel:(id)arg1 error:(id *)arg2;
- (id)_onscreenCodeViewModelWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

