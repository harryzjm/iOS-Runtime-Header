//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (Hashing)
- (id)fm_hmac_sha512WithKey:(id)arg1;
- (id)fm_hmac_sha256WithKey:(id)arg1;
- (id)fm_hmac_sha1WithKey:(id)arg1;
- (id)fm_hmac_md5WithKey:(id)arg1;
@property(readonly, copy, nonatomic) NSData *fm_sha512Hash;
@property(readonly, copy, nonatomic) NSData *fm_sha256Hash;
@property(readonly, copy, nonatomic) NSData *fm_sha1Hash;
- (id)hexString;
- (id)fm_MACAddressString;
- (id)fm_hexString;
@end
