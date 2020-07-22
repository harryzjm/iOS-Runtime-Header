//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebPreviewLoader : NSObject
{
    struct RefPtr<WebCore::ResourceLoader> _resourceLoader;
    struct ResourceResponse _response;
    struct RefPtr<WebCore::PreviewLoaderClient> _client;
    struct unique_ptr<WebCore::PreviewConverter, std::__1::default_delete<WebCore::PreviewConverter>> _converter;
    struct RetainPtr<NSMutableArray> _bufferedDataArray;
    _Bool _hasSentDidReceiveResponse;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)_sendDidReceiveResponseIfNecessary;
- (void)failed;
- (void)finishedAppending;
- (void)appendDataArray:(id)arg1;
- (id)initWithResourceLoader:(struct ResourceLoader *)arg1 resourceResponse:(const struct ResourceResponse *)arg2;

@end
