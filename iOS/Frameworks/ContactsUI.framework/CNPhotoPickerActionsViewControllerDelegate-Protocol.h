//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNPhotoPickerActionsViewController, CNPhotoPickerProviderItem, NSIndexPath;

@protocol CNPhotoPickerActionsViewControllerDelegate <NSObject>
- (void)photoPickerActionsViewController:(CNPhotoPickerActionsViewController *)arg1 didPerformAction:(long long)arg2 withProviderItem:(CNPhotoPickerProviderItem *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)photoPickerActionsViewControllerDidFinish:(CNPhotoPickerActionsViewController *)arg1;
@end
