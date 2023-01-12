//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDistributedSync/CKXReadStructProxy-Protocol.h>

@interface CKAtomProxy <CKXReadStructProxy>
{
}

- (void)copyValueBytes:(void *)arg1 length:(unsigned long long *)arg2 isNull:(_Bool *)arg3;
- (id)value;
- (unsigned long long)atomType;
- (unsigned char)atomBehavior;
- (id)references;
- (id)timestamp;
- (id)location;
- (unsigned long long)version;
- (id)objectCopy;

@end
