//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBIconModelStore-Protocol.h>

@class NSString, NSURL;

@interface SBIconModelPropertyListFileStore : NSObject <SBIconModelStore, BSDescriptionProviding>
{
    NSURL *_currentIconStateURL;
    NSURL *_desiredIconStateURL;
}

@property(readonly, copy, nonatomic) NSURL *desiredIconStateURL; // @synthesize desiredIconStateURL=_desiredIconStateURL;
@property(readonly, copy, nonatomic) NSURL *currentIconStateURL; // @synthesize currentIconStateURL=_currentIconStateURL;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)_save:(id)arg1 url:(id)arg2 error:(id *)arg3;
- (_Bool)_delete:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)_load:(id)arg1 error:(id *)arg2;
- (id)loadDesiredIconState:(id *)arg1;
- (id)loadCurrentIconState:(id *)arg1;
- (_Bool)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)deleteCurrentIconStateWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)saveDesiredIconState:(id)arg1 error:(id *)arg2;
- (_Bool)saveCurrentIconState:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithIconStateURL:(id)arg1 desiredIconStateURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
