//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMotion/CLIntersiloServiceProtocol-Protocol.h>

@class NSMapTable, NSString;
@protocol CLIntersiloReplayServiceClientProtocol;

@interface CLIntersiloReplayService <CLIntersiloServiceProtocol>
{
    struct unique_ptr<CMMsl::Reader, std::__1::default_delete<CMMsl::Reader>> _replayReader;
    struct Item _onDeckMessage;
    NSMapTable *_outboundTable;
    id <CLIntersiloReplayServiceClientProtocol> _coordinator;
    CDUnknownFunctionPointerType _filter;
}

+ (id)getSilo;
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
@property(nonatomic) CDUnknownFunctionPointerType filter; // @synthesize filter=_filter;
@property(retain, nonatomic) id <CLIntersiloReplayServiceClientProtocol> coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) NSMapTable *outboundTable; // @synthesize outboundTable=_outboundTable;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)tryToSendOnDeckMessage;
- (_Bool)loadNextRecordedMessageOnDeck;
- (void)useRecordingFileForPlayback:(id)arg1 coordinator:(byref id)arg2 synchronousFilter:(CDUnknownFunctionPointerType)arg3;
- (void)useRecordingFileForPlayback:(id)arg1;
- (_Bool)handleAbstractInvocation:(id)arg1 selectorInfo:(id)arg2 selfProxy:(id)arg3 senderProxy:(id)arg4;
- (id)getConnectionKeyFrom:(id)arg1 to:(id)arg2;
- (void)endService;
- (void)beginService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

