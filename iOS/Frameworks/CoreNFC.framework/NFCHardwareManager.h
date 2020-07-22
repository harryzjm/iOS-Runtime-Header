//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <CoreNFC/NFCHardwareManagerCallbacks-Protocol.h>
#import <CoreNFC/NFCSessionCallbacks-Protocol.h>

@class NFCSession, NSArray, NSMutableArray, NSString;

@interface NFCHardwareManager : NSObject <NFCSessionCallbacks, NFCHardwareManagerCallbacks>
{
    NSMutableArray *_delegates;
    NFCSession *_xpcSession;
}

+ (id)sharedHardwareManager;
- (void)didInvalidate;
- (void)hardwareFailedToLoad;
- (_Bool)areFeaturesSupported:(unsigned long long)arg1 outError:(id *)arg2;
- (void)removeNFCHardwareManagerCallbacksListener:(id)arg1;
- (void)addNFCHardwareManagerCallbacksListener:(id)arg1;
@property(readonly, copy, nonatomic, getter=getDelegates) NSArray *delegates;
- (void)queueReaderSession:(id)arg1 showSharingUI:(unsigned long long)arg2 scanText:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

