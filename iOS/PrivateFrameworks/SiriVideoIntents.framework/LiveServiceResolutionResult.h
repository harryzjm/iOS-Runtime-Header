//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface LiveServiceResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;
+ (id)successWithResolvedObject:(id)arg1;
+ (id)confirmationRequiredWithLiveServiceToConfirm:(id)arg1;
+ (id)disambiguationWithLiveServicesToDisambiguate:(id)arg1;
+ (id)successWithResolvedLiveService:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
