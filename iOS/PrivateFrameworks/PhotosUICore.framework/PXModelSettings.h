//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXModelSettings
{
    double _photoAnalysisGraphInitialGraceDelay;
    double _photoAnalysisGraphProgressUpdateInterval;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) double photoAnalysisGraphProgressUpdateInterval; // @synthesize photoAnalysisGraphProgressUpdateInterval=_photoAnalysisGraphProgressUpdateInterval;
@property(nonatomic) double photoAnalysisGraphInitialGraceDelay; // @synthesize photoAnalysisGraphInitialGraceDelay=_photoAnalysisGraphInitialGraceDelay;
- (void)setDefaultValues;
- (id)parentSettings;

@end

