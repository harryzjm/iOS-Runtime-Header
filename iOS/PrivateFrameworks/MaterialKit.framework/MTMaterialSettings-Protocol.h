//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MaterialKit/NSObject-Protocol.h>

@class MTVibrantStylingProvider, NSDictionary;

@protocol MTMaterialSettings <NSObject>
+ (id)sharedMaterialSettings;
@property(readonly, nonatomic) __weak MTVibrantStylingProvider *vibrantStylingProvider;
@property(nonatomic) double tintAlpha;
@property(nonatomic) double brightness;
@property(nonatomic) double saturation;
@property(nonatomic) double luminanceAlpha;
@property(nonatomic) double blurRadius;
@property(nonatomic) _Bool usesLuminanceMap;
- (void)updateWithSettingsFromArchive:(NSDictionary *)arg1;
@end
