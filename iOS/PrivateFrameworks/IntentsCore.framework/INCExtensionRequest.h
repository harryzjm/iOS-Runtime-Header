//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INCWatchdogTimer, NSArray, NSError, NSExtension, NSOperationQueue, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface INCExtensionRequest : NSObject
{
    NSUUID *_requestIdentifier;
    INCWatchdogTimer *_contextTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_requestOperationQueue;
    NSExtension *_extension;
    NSError *_error;
    NSString *_identifier;
    NSArray *_extensionInputItems;
}

@property(retain, nonatomic) NSArray *extensionInputItems; // @synthesize extensionInputItems=_extensionInputItems;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSError *_error; // @synthesize _error;
@property(retain, nonatomic) NSExtension *_extension; // @synthesize _extension;
- (void).cxx_destruct;
- (void)_scheduleContextTimer;
- (void)_resetContextTimer;
- (void)_resetExtensionContextHostWithCompletion:(CDUnknownBlockType)arg1;
- (id)_extensionContextHost;
- (id)_requestOperationQueue;
- (void)reset;
- (void)startRequestForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithIdentifier:(id)arg1;

@end
