//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIFont.h>

@interface UIFont (MessageUI)
+ (id)mf_messageBodyFont;
+ (id)mf_messageHeaderSummaryLabelFontForMailActionHeader;
+ (id)mf_messageHeaderSenderLabelFontForMailActionHeader;
+ (id)mf_messageHeaderTimestampLabelFont;
+ (id)mf_messageHeaderSummaryLabelFont;
+ (id)mf_messageHeaderSenderLabelFont;
+ (double)mf_defaultComposeFontPixelSize;
- (struct CGPoint)mf_originPointFromMidlinePoint:(struct CGPoint)arg1;
- (struct CGPoint)mf_caplinePointFromBaselinePoint:(struct CGPoint)arg1;
- (struct CGPoint)mf_baselinePointFromCaplinePoint:(struct CGPoint)arg1;
- (struct CGPoint)mf_caplinePointFromOriginPoint:(struct CGPoint)arg1;
- (struct CGPoint)mf_originPointFromCaplinePoint:(struct CGPoint)arg1;
- (struct CGPoint)mf_baselinePointFromOriginPoint:(struct CGPoint)arg1;
- (struct CGPoint)mf_originPointFromBaselinePoint:(struct CGPoint)arg1;
@end

