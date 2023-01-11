//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SchoolTime/SCLSuppressSchoolModeAssertionXPCServer-Protocol.h>

@class NSString, NSXPCConnection;
@protocol SCLSuppressSchoolModeAssertionClientDelegate;

@interface SCLSuppressSchoolModeAssertionClient : NSObject <SCLSuppressSchoolModeAssertionXPCServer>
{
    _Bool _acquired;
    _Bool _entitled;
    id <SCLSuppressSchoolModeAssertionClientDelegate> _delegate;
    NSXPCConnection *_connection;
    NSString *_explanation;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isEntitled) _Bool entitled; // @synthesize entitled=_entitled;
@property(readonly, copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(nonatomic, getter=isAcquired) _Bool acquired; // @synthesize acquired=_acquired;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <SCLSuppressSchoolModeAssertionClientDelegate> delegate; // @synthesize delegate=_delegate;
- (oneway void)acquireWithExplanation:(id)arg1 UUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connectionDidInvalidate;
@property(readonly, copy) NSString *description;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
