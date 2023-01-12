//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKSelectionViewController, NSString;

@protocol CKSelectionViewControllerDelegate <NSObject>
- (void)recoverButtonPressedOnSelectionViewController:(CKSelectionViewController *)arg1;
- (void)deleteButtonPressedOnSelectionViewController:(CKSelectionViewController *)arg1;
- (NSString *)secondaryTextForSelectionViewController:(CKSelectionViewController *)arg1;
- (unsigned long long)selectedCountForSelectionViewController:(CKSelectionViewController *)arg1;
- (_Bool)shouldUseRecentlyDeletedConfigurationForSelectionViewController:(CKSelectionViewController *)arg1;
@end

