//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WBSPasswordManagerURL : NSObject
{
}

+ (_Bool)isPasswordManagerSecurityRecommendationsResourceDictionary:(id)arg1;
+ (id)passwordManagerSecurityRecommendationsURL;
+ (_Bool)boolForPasswordManagerResourceDictionary:(id)arg1 key:(id)arg2 defaultValue:(_Bool)arg3;
+ (id)valueForPasswordManagerResourceDictionary:(id)arg1 key:(id)arg2;
+ (id)valueForPasswordManagerURL:(id)arg1 key:(id)arg2;
+ (id)dictionaryWithPasswordManagerURL:(id)arg1;
+ (id)_resourceSpecifierDictionaryForURL:(id)arg1;
+ (_Bool)urlIsPasswordManagerURL:(id)arg1;
+ (_Bool)_resourceSpecifierDictionaryIsPasswordManagerResourceSpecifierDictionary:(id)arg1;
+ (_Bool)_urlIsPasswordManagerURLWithScheme:(id)arg1 resourceSpecifierDictionary:(id)arg2;
+ (id)passwordManagerURLWithDictionary:(id)arg1;
+ (id)_resourceSpecifierEncodedKey:(id)arg1 value:(id)arg2;

@end
