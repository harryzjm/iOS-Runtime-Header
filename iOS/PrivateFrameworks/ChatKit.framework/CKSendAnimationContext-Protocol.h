//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CABackdropLayer, NSArray, NSString, UIView;

@protocol CKSendAnimationContext <NSObject>
@property(readonly, nonatomic) _Bool shouldUseQuickReplySourceRect;
@property(nonatomic) struct CGRect quickReplySourceRect;
@property(retain, nonatomic) CABackdropLayer *backdropLayer;
@property(retain, nonatomic) NSArray *messages;
@property(nonatomic) _Bool beginAnimationFromTranscriptPresentedState;
@property(nonatomic) _Bool isSender;
@property(nonatomic) _Bool shouldRepeat;
@property(retain, nonatomic) NSString *impactIdentifier;
@property(retain, nonatomic) UIView *containerView;
@property(copy, nonatomic) NSArray *throwBalloonViewAttributesCollection;
@property(copy, nonatomic) NSArray *framesOfAddedChatItems;
@property(copy, nonatomic) NSArray *throwBalloonViews;
@property(copy, nonatomic) NSArray *animatableTextViews;
@property(copy, nonatomic) NSArray *animatableViews;
@end

