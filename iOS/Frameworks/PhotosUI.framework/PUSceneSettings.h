//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUSceneSettings : PXSettings
{
    _Bool _showConfidenceOverlay;
    unsigned long long _inspectorSortOrder;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long inspectorSortOrder; // @synthesize inspectorSortOrder=_inspectorSortOrder;
@property(nonatomic) _Bool showConfidenceOverlay; // @synthesize showConfidenceOverlay=_showConfidenceOverlay;
- (void)setDefaultValues;
- (id)parentSettings;

@end
