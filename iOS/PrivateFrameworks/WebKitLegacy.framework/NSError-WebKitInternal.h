//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (WebKitInternal)
+ (void)_webkit_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_webKitErrorWithCode:(int)arg1 failingURL:(id)arg2;
+ (id)_webKitErrorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;
+ (id)_webkit_errorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;
+ (void)_registerWebKitErrors;
- (id)_webkit_initWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;
- (id)_initWithPluginErrorCode:(int)arg1 contentURL:(id)arg2 pluginPageURL:(id)arg3 pluginName:(id)arg4 MIMEType:(id)arg5;
@end
