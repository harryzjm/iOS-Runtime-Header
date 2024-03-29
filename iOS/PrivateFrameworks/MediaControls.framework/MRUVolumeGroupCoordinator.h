//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRUVolumeController, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MRUVolumeGroupCoordinator : NSObject
{
    MRUVolumeController *_mainVolumeController;
    NSArray *_volumeControllers;
    NSArray *_volumeScales;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *volumeScales; // @synthesize volumeScales=_volumeScales;
@property(retain, nonatomic) NSArray *volumeControllers; // @synthesize volumeControllers=_volumeControllers;
@property(readonly, nonatomic) MRUVolumeController *mainVolumeController; // @synthesize mainVolumeController=_mainVolumeController;
- (float)updateVolumeScales;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)finishEqualization;
- (void)equalizeVolumes;
- (void)beginEqualization;
- (_Bool)shouldAllowEqualization;
- (id)initWithMainVolumeController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

