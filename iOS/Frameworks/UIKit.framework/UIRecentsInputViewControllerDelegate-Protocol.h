//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class UITextInputTraits;

@protocol UIRecentsInputViewControllerDelegate <NSObject>
- (UITextInputTraits *)textInputTraits;
- (void)switchToKeyboard;
- (void)didSelectRecentInput;
@end

