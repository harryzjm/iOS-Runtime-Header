//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, VCVoiceShortcutManagedObject;

@interface VCVoiceShortcutSyncStateManagedObject : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(nonatomic) _Bool hasSynced; // @dynamic hasSynced;
@property(retain, nonatomic) NSData *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSString *syncServiceIdentifier; // @dynamic syncServiceIdentifier;
@property(retain, nonatomic) VCVoiceShortcutManagedObject *voiceShortcut; // @dynamic voiceShortcut;

@end
