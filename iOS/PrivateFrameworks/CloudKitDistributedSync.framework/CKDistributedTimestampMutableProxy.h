//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDistributedSync/CKXWriteStructProxy-Protocol.h>

@interface CKDistributedTimestampMutableProxy <CKXWriteStructProxy>
{
}

- (void)setUnordered:(_Bool)arg1;
- (void)setClock:(unsigned long long)arg1;
- (void)setModifier:(unsigned char)arg1;
- (void)setSiteIdentifierBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)setSiteIdentifier:(id)arg1;
- (void)copyFromReadProxy:(id)arg1;
- (void)copyFromObject:(id)arg1;
- (void)copyFromTimestamp:(id)arg1;

@end
