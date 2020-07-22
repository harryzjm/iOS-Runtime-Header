//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/NSObject-Protocol.h>

@class UIActionSheet;

@protocol UIActionSheetDelegate <NSObject>

@optional
- (void)actionSheet:(UIActionSheet *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(UIActionSheet *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentActionSheet:(UIActionSheet *)arg1;
- (void)willPresentActionSheet:(UIActionSheet *)arg1;
- (void)actionSheetCancel:(UIActionSheet *)arg1;
- (void)actionSheet:(UIActionSheet *)arg1 clickedButtonAtIndex:(long long)arg2;
@end

