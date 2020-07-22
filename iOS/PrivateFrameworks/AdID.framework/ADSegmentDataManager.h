//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdCore/ADSingleton.h>

@class NSNumber;

@interface ADSegmentDataManager : ADSingleton
{
    _Bool _segmentUpdateInProgress;
    NSNumber *_pendingJingleRequestToken;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSNumber *pendingJingleRequestToken; // @synthesize pendingJingleRequestToken=_pendingJingleRequestToken;
@property(nonatomic) _Bool segmentUpdateInProgress; // @synthesize segmentUpdateInProgress=_segmentUpdateInProgress;
- (void).cxx_destruct;
- (void)handleSegmentUpdateResponse:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendSegmentDataToAdPlatforms:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldSendSegmentDataToAdPlatforms:(id)arg1;
- (void)populateAccountTypeFields:(id)arg1;
- (void)retrieveSegmentData:(id)arg1 forceSegments:(_Bool)arg2 ignoreTimestamps:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)retrieveSegmentData:(id)arg1 forceSegments:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)retrieveSegmentDataIgnoringTimestamps:(id)arg1 forceSegments:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)checkTokenAndDSID:(id)arg1;
- (_Bool)shouldSendSegmentRequest:(id)arg1 ignoreTimestamps:(_Bool)arg2;
@property(readonly, nonatomic) _Bool segmentRetrievalInProgress;
- (id)init;

@end
