//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, _SFInjectedJavaScriptController;

@interface _SFWebClipMetadataFetcher : NSObject
{
    NSDictionary *_metaTags;
    NSArray *_linkTags;
    NSMutableArray *_metadataConsumers;
    _Bool _fetchingCompleted;
    _SFInjectedJavaScriptController *_jsController;
}

+ (id)metadataFetcherScriptSource;
- (void).cxx_destruct;
- (void)fetchMetadataWithConsumer:(CDUnknownBlockType)arg1;
- (id)_webClipLinkTagWithDictionary:(id)arg1;
- (void)_startFetchingMetadata;
- (id)initWithInjectedJavascriptController:(id)arg1;

@end

