//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (ADAdditions)
+ (id)proxyURLForVideoURL:(id)arg1 identifier:(id)arg2 changeScheme:(_Bool)arg3;
+ (id)removeQueryItemForKey:(id)arg1 fromURL:(id)arg2;
+ (id)valueForKey:(id)arg1 fromQueryItems:(id)arg2;
+ (id)queryParametersForURL:(id)arg1;
- (id)decodePercentEscapesEncoding;
@end
