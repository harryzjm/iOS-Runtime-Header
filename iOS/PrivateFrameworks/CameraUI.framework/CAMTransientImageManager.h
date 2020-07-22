//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CameraUI/PUTransientImageManager-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CAMTransientImageManager : NSObject <PUTransientImageManager>
{
    NSMutableDictionary *__pairedVideosByPairedUUID;
    NSMutableDictionary *__activeRequestsByPairedUUID;
}

@property(readonly, nonatomic) NSMutableDictionary *_activeRequestsByPairedUUID; // @synthesize _activeRequestsByPairedUUID=__activeRequestsByPairedUUID;
@property(readonly, nonatomic) NSMutableDictionary *_pairedVideosByPairedUUID; // @synthesize _pairedVideosByPairedUUID=__pairedVideosByPairedUUID;
- (void).cxx_destruct;
- (void)_handleRequestTimeout:(id)arg1;
- (void)requestPairedVideoURLForUUID:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)removePairedVideoForUUID:(id)arg1;
- (id)insertPairedVideoWithConvertible:(id)arg1 filterType:(long long)arg2;
- (id)existingPairedVideoForUUID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
