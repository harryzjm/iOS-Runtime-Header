//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SAUIAssistantUtteranceView, SiriSharedUICompactServerUtteranceView;
@protocol SRUIFSpeakableObjectProviding;

@protocol SiriSharedUICompactServerUtteranceViewDelegate
- (id <SRUIFSpeakableObjectProviding>)parserSpeakableObjectProviderForServerUtterance:(SiriSharedUICompactServerUtteranceView *)arg1;
- (void)serverUtteranceView:(SiriSharedUICompactServerUtteranceView *)arg1 utteranceViewDidDisappear:(SAUIAssistantUtteranceView *)arg2;
- (void)serverUtteranceView:(SiriSharedUICompactServerUtteranceView *)arg1 utteranceViewDidAppear:(SAUIAssistantUtteranceView *)arg2;
@end

