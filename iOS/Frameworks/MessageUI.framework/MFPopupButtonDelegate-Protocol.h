//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFPopupButton, MFPopupButtonItem, UIMenu;
@protocol UIContextMenuInteractionAnimating;

@protocol MFPopupButtonDelegate <NSObject>
- (UIMenu *)menuForPopupButton:(MFPopupButton *)arg1;

@optional
- (void)popupButtonWillDismissMenu:(MFPopupButton *)arg1 animator:(id <UIContextMenuInteractionAnimating>)arg2;
- (void)popupButtonWillPresentMenu:(MFPopupButton *)arg1 animator:(id <UIContextMenuInteractionAnimating>)arg2;
- (void)popupButton:(MFPopupButton *)arg1 didSelectItem:(MFPopupButtonItem *)arg2;
@end

