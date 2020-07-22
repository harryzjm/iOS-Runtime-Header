//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDPhoneNumberMonitor-Protocol.h>

@class CNReplaySubject, NSString;
@protocol CNCancelable, CNDCoreTelephonyServices, OS_dispatch_queue;

@interface CNDPhoneNumberMonitor : NSObject <CNDPhoneNumberMonitor>
{
    id <CNDCoreTelephonyServices> _coreTelephonyServices;
    CNReplaySubject *_subject;
    id <CNCancelable> _subjectToken;
    struct __CTServerConnection *_serverConnection;
    NSObject<OS_dispatch_queue> *_serverConnectionQueue;
}

+ (id)myPhoneNumberWithServices:(id)arg1 serverConnection:(struct __CTServerConnection *)arg2;
+ (id)myPhoneNumber;
+ (id)phoneNumberObservableWithCoreTelephonyServices:(id)arg1 serverConnection:(struct __CTServerConnection *)arg2;
+ (id)phoneNumberChangedObservableWithCoreTelephonyServices:(id)arg1 serverConnection:(struct __CTServerConnection *)arg2;
+ (id)continuousPhoneNumberObservableWithCoreTelephonyServices:(id)arg1 serverConnection:(struct __CTServerConnection *)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverConnectionQueue; // @synthesize serverConnectionQueue=_serverConnectionQueue;
@property(nonatomic) struct __CTServerConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(retain, nonatomic) id <CNCancelable> subjectToken; // @synthesize subjectToken=_subjectToken;
@property(readonly, nonatomic) CNReplaySubject *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) id <CNDCoreTelephonyServices> coreTelephonyServices; // @synthesize coreTelephonyServices=_coreTelephonyServices;
- (void).cxx_destruct;
- (void)nts_configureSubjectIfNecessary;
- (void)nts_configureConnectionIfNecessary;
- (void)configureStateIfNecessary;
- (id)addPhoneNumberChangeHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithTelephonyServices:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

