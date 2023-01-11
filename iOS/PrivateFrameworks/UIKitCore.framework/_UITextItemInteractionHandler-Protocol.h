//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSString, UIAction, UIAlertController, UIContextMenuConfiguration;

@protocol _UITextItemInteractionHandler <NSObject>
- (UIContextMenuConfiguration *)contextMenuConfiguration;
- (UIAction *)defaultAction;

@optional
- (NSArray *)actionSheetActionsForAlertController:(UIAlertController *)arg1;
- (NSString *)actionSheetTitle;
- (_Bool)shouldShowActionSheet;
- (unsigned long long)preferredContextMenuLayout;
@end
