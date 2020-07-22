//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CompanionSync/SYChange-Protocol.h>
#import <CompanionSync/SYObject-Protocol.h>

@class NSString;

@interface SYDeletedObject : NSObject <SYObject, SYChange>
{
    NSString *_sequencer;
    NSString *_syncId;
}

@property(retain, nonatomic) NSString *syncId; // @synthesize syncId=_syncId;
@property(readonly, nonatomic) NSString *sequencer; // @synthesize sequencer=_sequencer;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (id)initWithObjectID:(id)arg1 sequencer:(id)arg2;
- (id)initWithSyncId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

