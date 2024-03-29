//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ATAParsedOpenURL : NSObject
{
    NSURL *_URL;
    NSDictionary *_options;
    unsigned long long _type;
    NSString *_tabBarItemIdentifier;
}

+ (id)_logStringForType:(unsigned long long)arg1;
+ (id)parsedOpenURLWithURL:(id)arg1 andOptions:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tabBarItemIdentifier; // @synthesize tabBarItemIdentifier=_tabBarItemIdentifier;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithURL:(id)arg1 options:(id)arg2 type:(unsigned long long)arg3;
- (id)init;

@end

