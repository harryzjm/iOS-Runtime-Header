//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKGradientView, UIImageView, UIView;
@protocol CKGradientReferenceView;

@interface CKAggregateAcknowledgmentBalloonView
{
    CKGradientView *_gradientView;
    UIImageView *_backgroundView;
    UIImageView *_solidPartsView;
    BOOL _gradientColor;
    BOOL _solidColor;
    UIView<CKGradientReferenceView> *_gradientReferenceView;
}

+ (id)_middleBubbleSquareImage;
+ (id)_topBubbleSquareImage;
@property(nonatomic) BOOL solidColor; // @synthesize solidColor=_solidColor;
@property(nonatomic) BOOL gradientColor; // @synthesize gradientColor=_gradientColor;
@property(nonatomic) __weak UIView<CKGradientReferenceView> *gradientReferenceView; // @synthesize gradientReferenceView=_gradientReferenceView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)prepareForDisplay;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForAggregateAcknowledgmentChatItem:(id)arg1;

@end

