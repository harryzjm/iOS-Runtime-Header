//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISURLOperation.h>

@class NSURL;
@protocol TVImageDecrypter;

__attribute__((visibility("hidden")))
@interface _TVURLImageLoadRequest : ISURLOperation
{
    NSURL *_url;
    id <TVImageDecrypter> _decrypter;
    CDUnknownBlockType _completionHandler;
}

+ (_Bool)_usePrivateCookieStore;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, retain, nonatomic) id <TVImageDecrypter> decrypter; // @synthesize decrypter=_decrypter;
@property(readonly, retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 headers:(id)arg2 decrypter:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
