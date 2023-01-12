//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSURL, PFPosterConfiguration, PFPosterDescriptor, UIColor;

@protocol PUWallpaperEditorEnvironment <NSObject>
@property(readonly, nonatomic) unsigned long long pu_legacyConfigurationType;
@property(readonly, nonatomic) PFPosterConfiguration *pu_sourcePosterConfiguration;
@property(readonly, nonatomic) PFPosterDescriptor *pu_posterDescriptor;
@property(readonly, nonatomic) NSURL *pu_targetAssetDirectory;
@property(readonly, nonatomic) NSURL *pu_sourceAssetDirectory;
@property(readonly, nonatomic) long long pu_posterType;
@property(readonly, nonatomic) long long pu_userInterfaceStyle;
@property(readonly, nonatomic) UIColor *pu_caseColor;
@end

