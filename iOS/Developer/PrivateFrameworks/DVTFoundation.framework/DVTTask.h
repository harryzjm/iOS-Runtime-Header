//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSFileHandle, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSRunLoop, NSString;

@interface DVTTask : NSObject
{
    NSMutableDictionary *_environment;
    NSString *_launchPath;
    NSString *_currentDirectoryPath;
    NSArray *_arguments;
    NSArray *_preferredArchitectures;
    NSMutableArray *_fileDescriptorsToKeepOpen;
    NSNumber *_exitStatus;
    NSNumber *_signalStatus;
    NSNumber *_processIdentifier;
    NSFileHandle *_standardInput;
    NSFileHandle *_standardOutput;
    NSFileHandle *_standardError;
    NSMutableArray *_pipesToRetain;
    NSRunLoop *_waitLoop;
    NSString *_waitRunLoopMode;
    CDUnknownBlockType _runLoopSignaler;
    struct DVTUnfairLock _runLoopSetupLock;
    _Atomic int _runLoopSignal;
    NSMutableSet *_fileHandlesToCloseAfterLaunching;
    NSNumber *_argumentEncoding;
    long long _qos;
}

+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(copy) NSNumber *argumentEncoding; // @synthesize argumentEncoding=_argumentEncoding;
@property(copy) NSString *waitRunLoopMode; // @synthesize waitRunLoopMode=_waitRunLoopMode;
@property(copy) NSNumber *processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(copy) NSArray *preferredArchitectures; // @synthesize preferredArchitectures=_preferredArchitectures;
@property(copy) NSNumber *signalStatus; // @synthesize signalStatus=_signalStatus;
@property(copy) NSNumber *exitStatus; // @synthesize exitStatus=_exitStatus;
@property(retain) NSFileHandle *standardError; // @synthesize standardError=_standardError;
@property(retain) NSFileHandle *standardOutput; // @synthesize standardOutput=_standardOutput;
@property(retain) NSFileHandle *standardInput; // @synthesize standardInput=_standardInput;
@property(copy) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy) NSDictionary *environment; // @synthesize environment=_environment;
@property(copy) NSString *currentDirectoryPath; // @synthesize currentDirectoryPath=_currentDirectoryPath;
@property(copy) NSString *launchPath; // @synthesize launchPath=_launchPath;
- (id)stringRepresentation;
- (id)description;
@property(readonly) _Bool isRunning;
- (void)markPipeToRetain:(id)arg1;
- (void)markFileHandleToStayOpenAcrossExec:(id)arg1;
- (void)markFileDescriptorToStayOpenAcrossExec:(int)arg1;
- (void)hookStandardInputToPipe:(id)arg1 closingParentEndOnLaunch:(_Bool)arg2;
- (void)hookStandardErrorToPipe:(id)arg1 closingParentEndOnLaunch:(_Bool)arg2;
- (void)hookStandardOutputToPipe:(id)arg1 closingParentEndOnLaunch:(_Bool)arg2;
- (void)hookStandardInputToFileHandle:(id)arg1 closingParentEndOnLaunch:(_Bool)arg2;
- (void)hookStandardErrorToFileHandle:(id)arg1 closingParentEndOnLaunch:(_Bool)arg2;
- (void)hookStandardOutputToFileHandle:(id)arg1 closingParentEndOnLaunch:(_Bool)arg2;
- (void)addFileHandleToCloseAfterLaunch:(id)arg1;
- (_Bool)runLoggingOutputWithLogAspect:(id)arg1 error:(id *)arg2;
- (_Bool)runReturningStandardOutput:(id *)arg1 standardError:(id *)arg2 error:(id *)arg3;
- (void)_runWithQualityOfService:(long long)arg1 optionalStandardInput:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)runWithOptionalStandardInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)runReturningStandardOutput:(id *)arg1 standardError:(id *)arg2 standardInput:(id)arg3 error:(id *)arg4;
- (_Bool)sendSignal:(int)arg1 error:(id *)arg2;
- (void)waitUntilExit;
- (void)waitUntilExitRunningRunLoopInWaitMode;
- (_Bool)launchReturningError:(id *)arg1;
- (id)installRunLoopSignal;
- (_Bool)_launchWithQualityOfService:(long long)arg1 runningTerminationHandlerOnQueue:(id)arg2 error:(id *)arg3 terminationHandler:(CDUnknownBlockType)arg4;
- (_Bool)launchRunningTerminationHandlerOnQueue:(id)arg1 error:(id *)arg2 terminationHandler:(CDUnknownBlockType)arg3;
- (id)applyFileDescriptorMappingsToFileActions:(void **)arg1;
- (void)warnAboutBogusFileDescriptors;
- (id)applyPreferredArchitecturesToSpawnAttributes:(void **)arg1;
- (void)installEventHandlersForChildPID:(int)arg1 queue:(id)arg2 terminationHandler:(CDUnknownBlockType)arg3;
@property long long qualityOfService;
- (void)setValue:(id)arg1 forEnvironmentVariableNamed:(id)arg2;
- (id)init;

@end

