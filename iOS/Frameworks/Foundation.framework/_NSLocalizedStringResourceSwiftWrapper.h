//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSLocale, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _NSLocalizedStringResourceSwiftWrapper : NSObject
{
    MISSING_TYPE *wrapped;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
- (id)localizeWithOptions:(id)arg1;
- (id)localize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(void *)arg1;
- (id)initWithKey:(id)arg1 defaultValue:(id)arg2 table:(id)arg3 locale:(id)arg4 bundleURL:(id)arg5;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, copy) NSLocale *locale;
@property(nonatomic, readonly) NSURL *bundleURL;
@property(nonatomic, readonly) NSString *table;
@property(nonatomic, readonly) NSString *defaultValue;
@property(nonatomic, readonly) NSString *key;

@end

