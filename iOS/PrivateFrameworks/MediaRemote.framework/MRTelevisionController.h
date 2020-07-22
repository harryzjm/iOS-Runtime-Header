//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRExternalDeviceControllerDelegate-Protocol.h>

@class NSString, _MRTelevisionControllerBlockCallback;

__attribute__((visibility("hidden")))
@interface MRTelevisionController <MRExternalDeviceControllerDelegate>
{
    _MRTelevisionControllerBlockCallback *_discoveryCallback;
    _MRTelevisionControllerBlockCallback *_removalCallback;
}

+ (Class)externalDeviceClass;
@property(retain, nonatomic) _MRTelevisionControllerBlockCallback *removalCallback; // @synthesize removalCallback=_removalCallback;
@property(retain, nonatomic) _MRTelevisionControllerBlockCallback *discoveryCallback; // @synthesize discoveryCallback=_discoveryCallback;
- (void)externalDeviceController:(id)arg1 didRemoveDevice:(id)arg2;
- (void)externalDeviceController:(id)arg1 didDiscoverDevice:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

