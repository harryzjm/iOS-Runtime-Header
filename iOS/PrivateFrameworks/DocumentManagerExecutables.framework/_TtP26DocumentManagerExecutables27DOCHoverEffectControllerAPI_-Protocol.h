//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UICollectionReusableView, UIEvent;

@protocol _TtP26DocumentManagerExecutables27DOCHoverEffectControllerAPI_
+ (double)circularImageButtonHoverMargin;
+ (_Bool)featureEnabled;
- (void)noteDidPrepareForReuseOfCell:(UICollectionReusableView *)arg1;
- (_Bool)isReferenceViewPointInsideEffect:(struct CGPoint)arg1 event:(UIEvent *)arg2;
- (void)invalidate;
@property(nonatomic, readonly) _Bool automaticCircularEffect;
@property(nonatomic, readonly) double cornerRadius;
@property(nonatomic) struct NSDirectionalEdgeInsets insetFromReferenceView;
@property(nonatomic) _Bool isDisabled;
@end

