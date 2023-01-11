//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>
#import <SpringBoard/FBSApplicationPlaceholderObserver-Protocol.h>
#import <SpringBoard/SBDownloadingIconDataSource-Protocol.h>

@class FBSApplicationPlaceholder, NSMutableDictionary, NSMutableSet, NSString;
@protocol SBApplicationPlaceholderDelegate;

@interface SBApplicationPlaceholder : NSObject <FBSApplicationPlaceholderObserver, SBDownloadingIconDataSource, BSInvalidatable>
{
    _Bool _invalidated;
    NSMutableDictionary *_generatedIconImagesByKey;
    NSMutableSet *_formatsPendingGeneration;
    FBSApplicationPlaceholder *_placeholderProxy;
    id <SBApplicationPlaceholderDelegate> _delegate;
}

+ (id)backgroundQueue;
@property(nonatomic) __weak id <SBApplicationPlaceholderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBSApplicationPlaceholder *placeholderProxy; // @synthesize placeholderProxy=_placeholderProxy;
- (void).cxx_destruct;
- (_Bool)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (_Bool)iconCompleteUninstall:(id)arg1;
- (_Bool)iconSupportsUninstall:(id)arg1;
- (long long)labelAccessoryTypeForIcon:(id)arg1;
- (id)formattedAccessoryStringForIcon:(id)arg1;
- (id)badgeNumberOrStringForIcon:(id)arg1;
- (long long)accessoryTypeForIcon:(id)arg1;
- (_Bool)isProgressPausedForIcon:(id)arg1;
- (double)progressPercentForIcon:(id)arg1;
- (long long)progressStateForIcon:(id)arg1;
- (_Bool)iconCanTightenLabel:(id)arg1;
- (_Bool)iconCanTruncateLabel:(id)arg1;
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo)arg2;
- (unsigned long long)priorityForIcon:(id)arg1;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (void)_reloadThumbnailImage;
- (void)_generatePendingIconFormats;
- (void)_generateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)_iconImageKeyForBundleID:(id)arg1 info:(struct SBIconImageInfo)arg2;
- (id)_getOrGenerateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (void)placeholderDidChangeSignificantly:(id)arg1;
- (void)placeholderProgressDidUpdate:(id)arg1;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)_progressChanged;
- (_Bool)_shouldDisplayAppNameAtIconLocation:(id)arg1;
- (_Bool)_shouldDisplayAppName;
- (_Bool)resume;
- (_Bool)pause;
- (_Bool)cancel;
- (_Bool)prioritize;
@property(readonly, nonatomic) Class iconClass;
- (_Bool)isStoreDownload;
@property(readonly, nonatomic, getter=isCloudDemoted) _Bool cloudDemoted;
@property(readonly, nonatomic, getter=isCancelable) _Bool cancelable;
@property(readonly, nonatomic, getter=isPausable) _Bool pausable;
@property(readonly, nonatomic, getter=isPrioritizable) _Bool prioritizable;
@property(readonly, nonatomic, getter=isInstalling) _Bool installing;
@property(readonly, nonatomic, getter=isDownloading) _Bool downloading;
@property(readonly, nonatomic, getter=isFailed) _Bool failed;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic, getter=isWaiting) _Bool waiting;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (_Bool)isDone;
- (unsigned long long)installType;
@property(readonly, copy, nonatomic) NSString *applicationDisplayName;
@property(readonly, copy, nonatomic) NSString *applicationBundleID;
- (void)dealloc;
- (id)initWithPlaceholderProxy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
