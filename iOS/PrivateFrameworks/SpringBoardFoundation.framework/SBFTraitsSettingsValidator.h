//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFTraitsSettingsValidating-Protocol.h>

@class NSString, SBFTraitsSettingsOrientation;

@interface SBFTraitsSettingsValidator : NSObject <SBFTraitsSettingsValidating>
{
    _Bool _orientationSettingsValidated;
    SBFTraitsSettingsOrientation *_orientationSettings;
    NSString *_orientationSettingsValidatedReason;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *orientationSettingsValidatedReason; // @synthesize orientationSettingsValidatedReason=_orientationSettingsValidatedReason;
@property(nonatomic, getter=didValidateOrientationSettings) _Bool orientationSettingsValidated; // @synthesize orientationSettingsValidated=_orientationSettingsValidated;
@property(copy, nonatomic) SBFTraitsSettingsOrientation *orientationSettings; // @synthesize orientationSettings=_orientationSettings;
- (void)validateOrientationSettingsWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
