//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSString, PHFetchOptions, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface IMDPhotosSyndicationLibraryChangeListener : NSObject <PHPhotoLibraryChangeObserver>
{
    PHFetchOptions *_analysisFetchOptions;
    PHPhotoLibrary *_syndicationLibrary;
    NSObject<OS_dispatch_queue> *_changeObservationQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *changeObservationQueue; // @synthesize changeObservationQueue=_changeObservationQueue;
@property(readonly, nonatomic) PHPhotoLibrary *syndicationLibrary; // @synthesize syndicationLibrary=_syndicationLibrary;
- (void)photoLibraryDidChange:(id)arg1;
@property(readonly, nonatomic) PHFetchOptions *analysisFetchOptions; // @synthesize analysisFetchOptions=_analysisFetchOptions;
- (void)stopListening;
- (void)startListening;
- (void)dealloc;
- (id)init;
- (_Bool)__im_ff_photoAnalysisInSpotlightEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
