//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString, UILabel, UIView;

@interface CKTranscriptMessageContentCell
{
    _Bool _drawerWasVisible;
    _Bool _drawerTextChanged;
    NSAttributedString *_drawerText;
    long long _animationPauseReasons;
    UILabel *_drawerLabel;
    struct CGSize _messageDisplayViewRequestedSize;
    struct CGSize _drawerTextSize;
}

@property(nonatomic) struct CGSize drawerTextSize; // @synthesize drawerTextSize=_drawerTextSize;
@property(nonatomic) _Bool drawerTextChanged; // @synthesize drawerTextChanged=_drawerTextChanged;
@property(nonatomic) _Bool drawerWasVisible; // @synthesize drawerWasVisible=_drawerWasVisible;
@property(retain, nonatomic) UILabel *drawerLabel; // @synthesize drawerLabel=_drawerLabel;
@property(nonatomic) long long animationPauseReasons; // @synthesize animationPauseReasons=_animationPauseReasons;
@property(nonatomic) struct CGSize messageDisplayViewRequestedSize; // @synthesize messageDisplayViewRequestedSize=_messageDisplayViewRequestedSize;
@property(copy, nonatomic) NSAttributedString *drawerText; // @synthesize drawerText=_drawerText;
- (void).cxx_destruct;
@property(readonly) UIView *messageDisplayView;
- (void)willLayoutDrawerLabelFrame:(struct CGRect *)arg1;
@property(readonly) struct CGRect drawerLabelFrame;
- (struct CGRect)messageDisplayViewFrame:(struct CGRect)arg1 inContainerFrame:(struct CGRect)arg2;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForDrawer;
- (struct UIEdgeInsets)safeAreaInsets;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForChatItem:(id)arg1;

@end

