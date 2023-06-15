//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SUUIColorScheme, SUUILockupSwooshArtworkLoader, SUUILockupSwooshViewController, SUUIMissingItemLoader, SUUIResourceLoader, SUUISwooshPageComponent, UIViewController;

__attribute__((visibility("hidden")))
@interface SUUIProductPageTableSwooshSection
{
    CDUnknownBlockType _actionBlock;
    SUUILockupSwooshArtworkLoader *_artworkLoader;
    SUUIMissingItemLoader *_missingItemLoader;
    SUUIResourceLoader *_resourceLoader;
    SUUISwooshPageComponent *_swooshComponent;
    SUUILockupSwooshViewController *_swooshViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SUUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (id)_swooshViewController;
- (id)_missingItemLoader;
- (id)_artworkLoader;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (id)headerViewForTableView:(id)arg1;
@property(readonly, nonatomic) UIViewController *swooshViewController;
@property(retain, nonatomic) SUUIColorScheme *colorScheme;
- (void)dealloc;
- (id)initWithLockups:(id)arg1 title:(id)arg2;
- (id)initWithItems:(id)arg1 title:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

