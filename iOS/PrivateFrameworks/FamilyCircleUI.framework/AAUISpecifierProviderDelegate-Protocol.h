//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class NSArray, UIViewController;
@protocol AAUISpecifierProvider;

@protocol AAUISpecifierProviderDelegate <NSObject>
- (void)showViewController:(UIViewController *)arg1 sender:(id)arg2;
- (void)reloadSpecifiersForProvider:(id <AAUISpecifierProvider>)arg1 oldSpecifiers:(NSArray *)arg2 animated:(_Bool)arg3;
@end

