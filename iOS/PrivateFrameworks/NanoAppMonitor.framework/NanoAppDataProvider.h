//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NARApplicationWorkspace, NSMutableSet;

@interface NanoAppDataProvider : NSObject
{
    NARApplicationWorkspace *_narWorkspace;
    NSMutableSet *_appsOnNano;
}

@property(retain, nonatomic) NSMutableSet *appsOnNano; // @synthesize appsOnNano=_appsOnNano;
@property(retain, nonatomic) NARApplicationWorkspace *narWorkspace; // @synthesize narWorkspace=_narWorkspace;
- (void).cxx_destruct;
- (void)_appsDidChange:(CDUnknownBlockType)arg1;
- (void)isInstalledOnWatch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)watchBundleIDForFirstPartyCompanionBundleID:(id)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
