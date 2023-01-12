//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAttSiriServiceDelegate-Protocol.h>
#import <CoreSpeech/CSAttSiriServiceProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol CSAttSiriServiceDelegate;

@interface CSAttSiriServiceClient : NSObject <CSAttSiriServiceDelegate, CSAttSiriServiceProtocol>
{
    id <CSAttSiriServiceDelegate> _delegate;
    NSXPCConnection *_attSiriSvcConn;
    id _remoteSvcProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id remoteSvcProxy; // @synthesize remoteSvcProxy=_remoteSvcProxy;
@property(retain, nonatomic) NSXPCConnection *attSiriSvcConn; // @synthesize attSiriSvcConn=_attSiriSvcConn;
@property(nonatomic) __weak id <CSAttSiriServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)attSiriDidDetectAttendingTrigger:(id)arg1;
- (void)_setupAttSiriSvcXpcConnection;
- (void)dealloc;
- (void)invalidate;
- (void)siriRequestProcessingCompleted;
- (void)stopAttendingWithContext:(id)arg1;
- (void)startAttendingWithContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
