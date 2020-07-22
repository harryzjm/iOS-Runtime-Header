//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/NSCoding-Protocol.h>

@class NSString;

@interface MFOfflineTransferFailureSnapshot : NSObject <NSCoding>
{
    NSString *_originalRemoteID;
    NSString *_originalMailboxID;
    unsigned long long _originalMessageFlags;
}

@property(readonly, nonatomic) unsigned long long originalMessageFlags; // @synthesize originalMessageFlags=_originalMessageFlags;
@property(readonly, nonatomic) NSString *originalMailboxID; // @synthesize originalMailboxID=_originalMailboxID;
@property(readonly, nonatomic) NSString *originalRemoteID; // @synthesize originalRemoteID=_originalRemoteID;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginalRemoteID:(id)arg1 mailboxID:(id)arg2 messageFlags:(unsigned long long)arg3;

@end

