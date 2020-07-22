//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (FCAdditions)
+ (id)fc_randomDataWithLength:(unsigned long long)arg1;
- (id)fc_URLSafeBase64EncodedStringWithOptions:(unsigned long long)arg1;
- (id)fc_sha256;
- (id)fc_decryptAESSIVWithKey:(id)arg1 additionalData:(id)arg2;
- (id)fc_encryptAESSIVWithKey:(id)arg1 additionalData:(id)arg2;
- (id)fc_gzipDeflate;
- (id)fc_gzipInflate;
- (id)fc_zlibDeflate;
- (id)fc_zlibInflate;
@end

