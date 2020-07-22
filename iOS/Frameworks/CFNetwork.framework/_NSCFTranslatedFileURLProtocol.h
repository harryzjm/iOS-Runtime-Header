//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _NSCFTranslatedFileURLProtocol
{
    const struct CFURLProtocolInstanceCallbacks *_callbacks;
    struct CFURLProtocolClient _cfurlClient;
    const void *_info;
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (const struct CFURLProtocolImplementation *)pimpl;
- (void)stopLoading;
- (void)startLoading;
- (struct CFURLProtocolClient *)cfurlClient;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end

