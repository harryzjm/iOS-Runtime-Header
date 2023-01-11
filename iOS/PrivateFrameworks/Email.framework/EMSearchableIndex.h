//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>

@class EMRemoteConnection, NSString;

@interface EMSearchableIndex : NSObject <EFLoggable>
{
    EMRemoteConnection *_connection;
}

+ (id)attachmentPersistentIDFromItemIdentifier:(id)arg1;
+ (id)remoteInterface;
+ (id)log;
- (void).cxx_destruct;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg1;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (id)initWithRemoteConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
