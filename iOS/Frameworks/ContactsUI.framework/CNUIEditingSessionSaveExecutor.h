//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNUICoreContactEditingSession, NSString;

__attribute__((visibility("hidden")))
@interface CNUIEditingSessionSaveExecutor : NSObject
{
    CNUICoreContactEditingSession *_editingSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CNUICoreContactEditingSession *editingSession; // @synthesize editingSession=_editingSession;
- (id)executeSaveWithConfiguration:(id)arg1 saveDelegate:(id)arg2;
- (id)initWithEditingSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

