//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSDictionary, NSString, NSURL;

@interface OKProducerBundle : NSObject
{
    NSURL *_url;
    NSBundle *_bundle;
    NSDictionary *_infoDictionary;
    unsigned long long _type;
    NSString *_bundleExtension;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *bundleExtension; // @synthesize bundleExtension=_bundleExtension;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (double)version;
- (id)identifier;
- (id)url;
- (id)infoDictionary;
- (id)bundle;
- (void)dealloc;
- (id)initWithURL:(id)arg1 bundleType:(unsigned long long)arg2;
- (id)init;

@end

