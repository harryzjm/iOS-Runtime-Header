//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/SBLeafIcon.h>

@class NSURL, SBBookmark, UIWebClip;

@interface SBBookmarkIcon : SBLeafIcon
{
    SBBookmark *_bookmark;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SBBookmark *bookmark; // @synthesize bookmark=_bookmark;
- (id)_sbhIconLibraryOverrideCollationSectionTitle;
- (_Bool)isBookmarkIcon;
- (id)draggingUserActivity;
- (id)uninstallAlertBody;
- (id)uninstallAlertTitle;
- (_Bool)canBeAddedToSubfolder;
- (_Bool)canBeAddedToMultiItemDrag;
- (id)iTunesCategoriesOrderedByRelevancy;
- (id)representedSceneIdentifier;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)applicationToLaunch;
@property(readonly, nonatomic) _Bool representsWebApp;
@property(readonly, nonatomic) _Bool displaysShareBookmarkShortcutItem;
@property(readonly, nonatomic) NSURL *launchURL;
@property(readonly, nonatomic) UIWebClip *webClip;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBookmark:(id)arg1;

@end
