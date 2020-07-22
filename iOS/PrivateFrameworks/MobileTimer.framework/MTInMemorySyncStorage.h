//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTSyncStorage-Protocol.h>

@class NSArray;

@interface MTInMemorySyncStorage : NSObject <MTSyncStorage>
{
    NSArray *_pendingChanges;
}

@property(retain, nonatomic) NSArray *pendingChanges; // @synthesize pendingChanges=_pendingChanges;
- (void).cxx_destruct;
- (void)savePendingChanges:(id)arg1;
- (void)loadPendingChangesWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPendingChanges:(id)arg1;

@end

