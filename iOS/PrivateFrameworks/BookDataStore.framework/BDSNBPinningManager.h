//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BDSServiceProxy;

@interface BDSNBPinningManager : NSObject
{
    BDSServiceProxy *_serviceProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BDSServiceProxy *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
- (void)audiobookStoreEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateBitrateForItemWithAdamID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)updateReadingNowWithCompletion:(CDUnknownBlockType)arg1;
- (id)updateWantToReadWithCompletion:(CDUnknownBlockType)arg1;
- (id)updateWantToReadAndReadingNowWithJaliscoUpdateSuccessful:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchMostRecentAudiobookWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end
