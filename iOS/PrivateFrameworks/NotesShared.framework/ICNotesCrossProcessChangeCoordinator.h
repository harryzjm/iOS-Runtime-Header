//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ICNotesCrossProcessChangeCoordinator : NSObject
{
    _Bool _asApplication;
    int _notifyToken;
    NSPersistentStoreCoordinator *_sourceCoordinator;
    NSManagedObjectContext *_destinationContext;
}

@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(nonatomic) _Bool asApplication; // @synthesize asApplication=_asApplication;
@property(retain, nonatomic) NSManagedObjectContext *destinationContext; // @synthesize destinationContext=_destinationContext;
@property(retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator; // @synthesize sourceCoordinator=_sourceCoordinator;
- (void).cxx_destruct;
- (void)postNotesPasswordStatusDidChangeNotification;
- (void)postAccountDidChangeNotification;
- (void)registerForAccountNotifications;
- (void)registerForPasswordStatusDidChangeNotifications;
- (void)registerForCrossProcessNotificationName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)postCrossProcessNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)initWithSourceCoordinator:(id)arg1 destinationContext:(id)arg2 asApplication:(_Bool)arg3;

@end
