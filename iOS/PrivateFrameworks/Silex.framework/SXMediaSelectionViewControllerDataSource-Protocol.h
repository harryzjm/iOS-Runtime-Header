//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class NSIndexPath, NSString, SXMediaSelectionViewController;

@protocol SXMediaSelectionViewControllerDataSource <NSObject>
- (unsigned long long)mediaSelectionViewController:(SXMediaSelectionViewController *)arg1 indexOfSelectedMediaSelectionOptionInGroup:(unsigned long long)arg2;
- (NSString *)mediaSelectionViewController:(SXMediaSelectionViewController *)arg1 displayNameForMediaSelectionOptionAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)mediaSelectionViewController:(SXMediaSelectionViewController *)arg1 displayNameForMediaSelectionGroup:(unsigned long long)arg2;
- (unsigned long long)mediaSelectionViewController:(SXMediaSelectionViewController *)arg1 numberOfMediaSelectionOptionsInGroup:(unsigned long long)arg2;
- (unsigned long long)numberOfMediaSelectionGroupsInMediaSelectionViewController:(SXMediaSelectionViewController *)arg1;
@end

