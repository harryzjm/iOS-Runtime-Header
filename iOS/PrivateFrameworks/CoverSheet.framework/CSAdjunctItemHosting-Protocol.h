//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/MTVisualStylingRequiring-Protocol.h>
#import <CoverSheet/NSObject-Protocol.h>

@class UIView;
@protocol PLPlatter;

@protocol CSAdjunctItemHosting <NSObject, MTVisualStylingRequiring>
- (UIView *)view;
- (struct CGSize)preferredContentSize;

@optional
- (UIView<PLPlatter> *)platterView;
- (void)setContainerSize:(struct CGSize)arg1;
@end
