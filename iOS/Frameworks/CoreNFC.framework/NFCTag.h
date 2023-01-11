//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreNFC/NFCTag-Protocol.h>

@class NFWeakReference, NSData, NSString;
@protocol NFCReaderSession, NFTag;

@interface NFCTag : NSObject <NFCTag>
{
    id <NFTag> _tag;
    NFWeakReference *_session;
}

+ (double)_MaxRetryInterval;
+ (unsigned long long)_MaxRetry;
+ (_Bool)supportsSecureCoding;
- (_Bool)_transceiveWithData:(id)arg1 receivedData:(id *)arg2 error:(id *)arg3;
- (_Bool)_disconnectWithError:(id *)arg1;
- (_Bool)_connectWithError:(id *)arg1;
- (id)_getInternalReaderSession;
- (void)_setSession:(id)arg1;
- (void)_setTag:(id)arg1;
@property(readonly, retain, nonatomic) NSData *identifier;
- (void)dealloc;
- (id)initWithSession:(id)arg1 tag:(id)arg2;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
@property(readonly, nonatomic) __weak id <NFCReaderSession> session;
@property(readonly, nonatomic) unsigned long long type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

