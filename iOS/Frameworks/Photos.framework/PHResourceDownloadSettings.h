//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PHResourceDownloadSettings
{
    _Bool _simulateDownload;
    _Bool _simulateDownloadFailure;
}

+ (id)settingsControllerModule;
+ (id)sharedSettings;
@property(nonatomic) _Bool simulateDownloadFailure; // @synthesize simulateDownloadFailure=_simulateDownloadFailure;
@property(nonatomic) _Bool simulateDownload; // @synthesize simulateDownload=_simulateDownload;
- (void)setDefaultValues;
- (id)parentSettings;

@end

