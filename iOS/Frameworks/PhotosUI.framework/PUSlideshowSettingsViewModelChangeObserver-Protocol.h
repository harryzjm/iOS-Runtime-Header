//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUViewModelChangeObserver-Protocol.h>

@class PUSlideshowSettingsViewModel, PUSlideshowSettingsViewModelChange;

@protocol PUSlideshowSettingsViewModelChangeObserver <PUViewModelChangeObserver>

@optional
- (void)viewModel:(PUSlideshowSettingsViewModel *)arg1 didChange:(PUSlideshowSettingsViewModelChange *)arg2;
@end

