//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale, NSMutableArray, NSString;

@interface CKVTokenChainBuilder : NSObject
{
    NSString *_normalizedString;
    NSLocale *_locale;
    NSMutableArray *_tokens;
}

- (void).cxx_destruct;
- (id)build;
- (void)addToken:(id)arg1;
- (id)init;
- (id)initWithString:(id)arg1 locale:(id)arg2;

@end
