//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/MFDAOfflineCacheOperation-Protocol.h>

@class NSString;

@interface MFDADeferredStoreDraftOperation <MFDAOfflineCacheOperation>
{
    NSString *_messageIDHeader;
    NSString *_folderID;
}

- (id)description;
- (_Bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithMessageIDHeader:(id)arg1 mailbox:(id)arg2;

@end

