//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/SFNavigationBarItemObserver-Protocol.h>
#import <MobileSafari/SFTabHoverPreviewItem-Protocol.h>

@class NSArray, NSDate, NSString, NSUUID, SFNavigationBarItem, SFUnifiedTabBarItemView, UIImage, _SFFluidProgressView;

@interface SFUnifiedTabBarItem <SFNavigationBarItemObserver, SFTabHoverPreviewItem>
{
    long long _badgeOnMenuButton;
    _Bool _isPlaceholder;
    _Bool _hasUnviewedDownloads;
    _Bool _showsBadgeOnExtensionsButton;
    SFNavigationBarItem *_navigationBarItem;
    UIImage *_icon;
    NSString *_title;
    NSDate *_lastReloadDate;
    unsigned long long _mediaStateIcon;
    _SFFluidProgressView *_progressView;
    NSUUID *_UUID;
    double _downloadProgress;
    NSArray *_extensionButtons;
}

- (void).cxx_destruct;
@property(nonatomic) long long badgeOnMenuButton; // @synthesize badgeOnMenuButton=_badgeOnMenuButton;
@property(nonatomic) _Bool showsBadgeOnExtensionsButton; // @synthesize showsBadgeOnExtensionsButton=_showsBadgeOnExtensionsButton;
@property(copy, nonatomic) NSArray *extensionButtons; // @synthesize extensionButtons=_extensionButtons;
@property(nonatomic) _Bool hasUnviewedDownloads; // @synthesize hasUnviewedDownloads=_hasUnviewedDownloads;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) _SFFluidProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) unsigned long long mediaStateIcon; // @synthesize mediaStateIcon=_mediaStateIcon;
@property(retain, nonatomic) NSDate *lastReloadDate; // @synthesize lastReloadDate=_lastReloadDate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) SFNavigationBarItem *navigationBarItem; // @synthesize navigationBarItem=_navigationBarItem;
- (void)navigationBarItemDidUpdateShowsVoiceSearchButton:(id)arg1;
- (void)navigationBarItemDidUpdateShowsTranslationButton:(id)arg1;
- (void)navigationBarItemDidUpdateShowsTranslationIcon:(id)arg1;
- (void)navigationBarItemDidUpdateProgressView:(id)arg1;
- (void)navigationBarItemDidUpdateShowsNotSecureAnnotation:(id)arg1;
- (void)navigationBarItemDidUpdateShowsReaderButton:(id)arg1;
- (void)navigationBarItemDidUpdateFormatButtonSelected:(id)arg1;
- (void)navigationBarItemDidUpdateStopReloadButtonShowsStop:(id)arg1;
- (void)navigationBarItemDidUpdateShowsStopReloadButtons:(id)arg1;
- (void)navigationBarItemDidUpdateShowsLockIcon:(id)arg1;
- (void)navigationBarItemDidUpdateShowsSearchIndicator:(id)arg1;
- (void)navigationBarItemDidUpdateText:(id)arg1;
@property(readonly, nonatomic) SFUnifiedTabBarItemView *itemView;
- (void)configureItemView:(id)arg1;
- (void)setReusableView:(id)arg1;
- (void)dismissAvailabilityOverlays;
- (void)toggleExtensionBadge;
- (void)setDownloadProgress:(double)arg1 animated:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
