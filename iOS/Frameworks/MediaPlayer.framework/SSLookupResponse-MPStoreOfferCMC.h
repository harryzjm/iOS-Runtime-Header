//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSLookupResponse.h>

@interface SSLookupResponse (MPStoreOfferCMC)
+ (id)mpLoadDebugCompletionsResponseWithStoreLookupID:(id)arg1;
+ (_Bool)mpFakeCompletionDataForBuys;
+ (_Bool)mpShowBuysWithNoCompletionOffer;
+ (_Bool)mpVerboseCMCLogging;
- (void)mpSaveCompletionsResponseForDebuggingIfNecessaryWithExpectedStoreLookupID:(id)arg1;
- (id)mpCompletionOfferResponseDictionaryWithLocalAlbumsCollection:(id)arg1;
@property(readonly, nonatomic) _Bool mpIsPersonalizedOffer;
@end

