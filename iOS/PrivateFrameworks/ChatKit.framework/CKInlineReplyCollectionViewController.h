//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface CKInlineReplyCollectionViewController
{
    _Bool _animatingIn;
    _Bool _animatingOut;
    NSDictionary *_currentFrameMapForNextReload;
    NSDictionary *_targetFrameMapForAnimateOut;
}

+ (id)chatItemsDidChangeNotification;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *targetFrameMapForAnimateOut; // @synthesize targetFrameMapForAnimateOut=_targetFrameMapForAnimateOut;
@property(retain, nonatomic) NSDictionary *currentFrameMapForNextReload; // @synthesize currentFrameMapForNextReload=_currentFrameMapForNextReload;
@property(nonatomic, getter=isAnimatingOut) _Bool animatingOut; // @synthesize animatingOut=_animatingOut;
@property(nonatomic, getter=isAnimatingIn) _Bool animatingIn; // @synthesize animatingIn=_animatingIn;
- (id)_replyTranscriptBubbleFilterForUserInterfaceStyle:(long long)arg1;
- (void)setCollectionViewTargetFrames:(id)arg1;
- (void)setCollectionViewCurrentFrames:(id)arg1;
- (id)overrideTargetFrameMapForLayout:(id)arg1;
- (id)overrideCurrentFrameMapForLayout:(id)arg1;
- (void)setScrollAnchor:(double)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)didMoveToParentViewController:(id)arg1;
- (void)loadRecentMessagesForConversation;
- (void)loadEarlierMessagesForConversation;
- (void)configureCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)imChatItems;
- (_Bool)_canUseOpaqueMask;
- (id)transcriptBackgroundColor;
- (_Bool)isInline;
- (id)initWithConversation:(id)arg1 delegate:(id)arg2 notifications:(id)arg3 balloonMaxWidth:(double)arg4 marginInsets:(struct UIEdgeInsets)arg5;

@end
