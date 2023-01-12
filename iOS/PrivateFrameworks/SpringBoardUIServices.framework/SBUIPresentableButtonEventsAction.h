//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/BSAction.h>

#import <SpringBoardUIServices/SBUIPresentableButtonEventsAssertion-Protocol.h>

@class NSString;

@interface SBUIPresentableButtonEventsAction : BSAction <SBUIPresentableButtonEventsAssertion>
{
    NSString *_reason;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)invalidate;
@property(readonly, nonatomic) long long presentableButtonEvent;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 debug:(_Bool)arg2;
- (_Bool)_expectsResponse;
- (void)handleButtonEvent;
- (id)initWithButtonEvent:(long long)arg1 reason:(id)arg2 handler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
