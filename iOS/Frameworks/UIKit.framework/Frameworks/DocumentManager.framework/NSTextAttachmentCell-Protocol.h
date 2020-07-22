//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DocumentManager/NSObject-Protocol.h>

@class NSLayoutManager, NSTextAttachment, NSTextContainer, UIView;

@protocol NSTextAttachmentCell <NSObject>
- (NSTextAttachment *)attachment;
- (void)setAttachment:(NSTextAttachment *)arg1;
- (struct CGPoint)cellBaselineOffset;
- (struct CGSize)cellSize;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(UIView *)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(NSLayoutManager *)arg4;

@optional
- (void)drawWithFrame:(struct CGRect)arg1 inView:(UIView *)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(UIView *)arg2 characterIndex:(unsigned long long)arg3;
- (struct CGRect)cellFrameForTextContainer:(NSTextContainer *)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
@end

