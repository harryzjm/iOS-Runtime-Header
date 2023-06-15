//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <APFoundation/NSObject-Protocol.h>

@class NSData;

@protocol APSigningAuthorizable <NSObject>
@property(readonly, nonatomic) _Bool isStashed;
@property(readonly, nonatomic) unsigned long long contextIdx;
@property(readonly, nonatomic) long long failureError;
@property(readonly, nonatomic) long long state;
- (NSData *)signatureForRawData:(NSData *)arg1 error:(id *)arg2;
- (NSData *)signatureForData:(NSData *)arg1 error:(id *)arg2;
@end

