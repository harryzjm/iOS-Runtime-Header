//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8CloudKit21LoadingRequestHandler : NSObject
{
    MISSING_TYPE *assetStreamHandle;
    MISSING_TYPE *type;
    MISSING_TYPE *taskByRequest;
    MISSING_TYPE *activity;
}

- (void).cxx_destruct;
- (id)init;
- (void)resourceLoader:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;

@end

