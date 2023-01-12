//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKWebViewContentProviderRegistry : NSObject
{
    struct HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider>>, WTF::HashTableTraits> _contentProviderForMIMEType;
    struct HashCountedSet<WebKit::WebPageProxy *, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>> _pages;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (Vector_7aeb0c1e)_mimeTypesWithCustomContentProviders;
- (Class)providerForMIMEType:(const void *)arg1;
- (void)registerProvider:(Class)arg1 forMIMEType:(const void *)arg2;
- (void)removePage:(void *)arg1;
- (void)addPage:(void *)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

