//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileStoreUI/NSObject-Protocol.h>

@class NSString, SUUICommentPostBarView, UIButton;

@protocol SUUICommentDelegate <NSObject>
- (void)commentPostBarView:(SUUICommentPostBarView *)arg1 changeCommenter:(UIButton *)arg2;
- (void)commentPostBarView:(SUUICommentPostBarView *)arg1 text:(NSString *)arg2 as:(NSString *)arg3;
@end

