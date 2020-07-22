//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SUScriptAccessSecurity : NSObject
{
}

- (_Bool)_urls:(id)arg1 matchPatternStrings:(id)arg2;
- (_Bool)_url:(id)arg1 matchesExpressions:(id)arg2;
- (id)_copyResourceURLsForWebFrame:(id)arg1;
- (_Bool)_canAccessType:(id)arg1 withURL:(id)arg2 inFrame:(id)arg3 error:(id *)arg4;
- (_Bool)_canAccessType:(id)arg1 inFrame:(id)arg2 error:(id *)arg3;
- (id)_accessDictionaryForType:(id)arg1;
- (_Bool)canAccessTelephonyInFrame:(id)arg1 error:(id *)arg2;
- (_Bool)canAccessFacebookWithURL:(id)arg1 inFrame:(id)arg2 error:(id *)arg3;
- (_Bool)canAccessFacebookInFrame:(id)arg1 error:(id *)arg2;

@end
