//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class UIKeyboardEmojiKeyDisplayController;

@protocol UIKeyboardEmojiCategoryUpdate <NSObject>
@property(nonatomic) UIKeyboardEmojiKeyDisplayController *emojiKeyManager;
- (void)updateToCategory:(long long)arg1;

@optional
- (long long)updateToCategoryWithOffsetPercentage:(double)arg1;
@end

