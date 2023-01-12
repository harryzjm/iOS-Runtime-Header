//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (AFSecurityDigestibleChunksProvider)
+ (id)hexStringFromData:(id)arg1;
+ (id)hexStringFromBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_afpreferences_languageCodePrefix;
- (_Bool)_afpreferences_isLanguageCodePrefix;
- (id)_af_stringByRemovingSuffix:(id)arg1;
- (id)_af_stringByRemovingPrefixWithLength:(unsigned long long)arg1;
- (id)ad_shortDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

