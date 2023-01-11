//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlaySupport/CPVoiceTemplateProviding-Protocol.h>

@class CPSVoiceView, NSString, UITapGestureRecognizer;

@interface CPSVoiceTemplateViewController <CPVoiceTemplateProviding>
{
    CPSVoiceView *_titleView;
    UITapGestureRecognizer *_backGestureRecognizer;
    double _lastVoiceTemplateStateChangeTime;
}

@property(nonatomic) double lastVoiceTemplateStateChangeTime; // @synthesize lastVoiceTemplateStateChangeTime=_lastVoiceTemplateStateChangeTime;
@property(retain, nonatomic) UITapGestureRecognizer *backGestureRecognizer; // @synthesize backGestureRecognizer=_backGestureRecognizer;
@property(retain, nonatomic) CPSVoiceView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)_activateStateWithIdentifier:(id)arg1;
- (id)_stateWithIdentifier:(id)arg1;
- (void)_backGestureFired:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)voiceTemplate;
- (id)initWithVoiceTemplate:(id)arg1 templateDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

