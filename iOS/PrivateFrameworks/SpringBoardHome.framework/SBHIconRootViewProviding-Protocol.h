//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>
#import <SpringBoardHome/SBHVisibleContentPresenter-Protocol.h>
#import <SpringBoardHome/SBIconLocationPresenting-Protocol.h>
#import <SpringBoardHome/SBIconViewQuerying-Protocol.h>

@class NSString, SBFolder, SBFolderIconImageCache, SBHIconImageCache, SBIcon, UIView, UIViewController, _UILegibilitySettings;

@protocol SBHIconRootViewProviding <SBIconLocationPresenting, SBIconViewQuerying, SBHVisibleContentPresenter, NSObject>
@property(retain, nonatomic) SBHIconImageCache *iconImageCache;
@property(retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property(nonatomic) long long currentPageIndex;
@property(readonly, nonatomic, getter=isScrollTracking) _Bool scrollTracking;
@property(readonly, nonatomic, getter=isScrolling) _Bool scrolling;
@property(nonatomic, getter=isEditing) _Bool editing;
@property(readonly, nonatomic) UIViewController *deepestFolderController;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) UIView *contentView;
@property(retain, nonatomic) SBFolder *folder;
- (void)setIdleText:(NSString *)arg1;
- (void)revealIcon:(SBIcon *)arg1 animated:(_Bool)arg2 completionHandler:(void (^)(_Bool))arg3;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)noteUserIsInteractingWithIcons;
- (void)cancelScrolling;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@end

