//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (WebDataURL)
+ (id)_web_uniqueWebDataURL;
+ (id)_web_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithDataAsString:(id)arg1;
+ (id)_webkit_URLWithUserTypedString:(id)arg1;
+ (id)_web_URLWithUserTypedString:(id)arg1;
- (id)_webkit_URLFromURLOrSchemelessFileURL;
- (id)_webkit_suggestedFilenameWithMIMEType:(id)arg1;
- (id)_web_hostString;
- (id)_web_hostData;
- (id)_web_schemeData;
- (_Bool)_webkit_isFileURL;
- (id)_webkit_scriptIfJavaScriptURL;
- (_Bool)_webkit_isJavaScriptURL;
- (id)_web_URLByRemovingUserInfo;
- (id)_webkit_URLByRemovingFragment;
- (id)_webkit_canonicalize_with_wtf;
- (id)_webkit_canonicalize;
- (const char *)_web_URLCString;
- (_Bool)_web_isEmpty;
- (id)_web_userVisibleString;
- (id)_web_originalDataAsString;
- (id)_web_originalData;
@end

