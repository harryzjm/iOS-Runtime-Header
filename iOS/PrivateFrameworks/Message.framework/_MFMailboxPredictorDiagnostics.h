//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFMailboxPredictorDiagnostics-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _MFMailboxPredictorDiagnostics : NSObject <MFMailboxPredictorDiagnostics>
{
    NSString *_debugOutput;
    NSDictionary *_modelInfo;
}

@property(retain, nonatomic) NSDictionary *modelInfo; // @synthesize modelInfo=_modelInfo;
@property(retain, nonatomic) NSString *debugOutput; // @synthesize debugOutput=_debugOutput;
- (void)dealloc;
- (id)initWithDebugOutput:(id)arg1 modelInfo:(id)arg2;
- (id)initWithDebugOutput:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
