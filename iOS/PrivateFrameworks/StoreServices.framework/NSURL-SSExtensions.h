//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (SSExtensions)
+ (id)_ss_unescapedStringForString:(id)arg1;
+ (id)_ss_copyDictionaryForQueryString:(id)arg1 unescapedValues:(_Bool)arg2;
- (id)_ss_valueForQueryParameter:(id)arg1;
- (_Bool)_ss_hasQueryParameter:(id)arg1;
- (id)_ss_URLByRemovingQueryParameter:(id)arg1;
- (_Bool)isStoreServicesURL;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
@end

