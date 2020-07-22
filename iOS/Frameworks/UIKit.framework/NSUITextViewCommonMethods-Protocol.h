//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSTextContainerView-Protocol.h>
#import <UIKit/NSTextLayoutOrientationProvider-Protocol.h>

@class NSDictionary, NSTextContainer;

@protocol NSUITextViewCommonMethods <NSTextLayoutOrientationProvider, NSTextContainerView>
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(_Bool)arg2;
- (_Bool)isHorizontallyResizable;
- (struct CGSize)minSize;
- (void)invalidateTextContainerOrigin;
- (void)setConstrainedFrameSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)textContainerInset;
- (struct CGPoint)textContainerOrigin;
- (struct CGRect)visibleRect;

@optional
@property(readonly, nonatomic) NSDictionary *markedTextStyle;
@property(nonatomic) struct _NSRange markedRange;
@property(nonatomic) __weak NSTextContainer *textContainer;
@end

