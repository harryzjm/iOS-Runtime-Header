//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class _UILegibilitySettings;
@protocol SBFLegibilitySettingsProviderDelegate;

@protocol SBFLegibilitySettingsProvider <NSObject>
@property(nonatomic) __weak id <SBFLegibilitySettingsProviderDelegate> delegate;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@end

