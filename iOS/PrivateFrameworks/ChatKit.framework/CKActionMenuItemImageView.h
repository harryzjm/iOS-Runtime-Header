//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

#import <ChatKit/CKActionMenuItemView-Protocol.h>

@class NSString, UIColor;

@interface CKActionMenuItemImageView : UIImageView <CKActionMenuItemView>
{
    UIColor *_unhighlightedTintColor;
    UIColor *_highlightedTintColor;
    _Bool _enabled;
}

- (void).cxx_destruct;
- (void)updateTintColor;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithImage:(id)arg1 tintColor:(id)arg2 highlightedTintColor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
