//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUMedusaSettings : PXSettings
{
    double __desiredWidth;
    double __widthDelay;
    double __testStartDelay;
    double __testInterval;
    double __testIncrement;
}

+ (void)runSizeTest;
+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) double _testIncrement; // @synthesize _testIncrement=__testIncrement;
@property(nonatomic) double _testInterval; // @synthesize _testInterval=__testInterval;
@property(nonatomic) double _testStartDelay; // @synthesize _testStartDelay=__testStartDelay;
@property(nonatomic) double _widthDelay; // @synthesize _widthDelay=__widthDelay;
@property(nonatomic) double _desiredWidth; // @synthesize _desiredWidth=__desiredWidth;
- (id)parentSettings;

@end
