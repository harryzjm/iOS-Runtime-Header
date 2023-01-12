//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COMeshCommand, COMeshNode, NSString;

__attribute__((visibility("hidden")))
@interface COMeshControllerQueuedCommand : NSObject
{
    COMeshCommand *_command;
    CDUnknownBlockType _completionHandler;
    COMeshNode *_destination;
}

- (void).cxx_destruct;
@property(retain, nonatomic) COMeshNode *destination; // @synthesize destination=_destination;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) COMeshCommand *command; // @synthesize command=_command;
- (void)invokeCallbackWithError:(id)arg1;
- (id)initWithCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

