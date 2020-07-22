//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/ISSingleton-Protocol.h>

@class NSMutableArray, NSString;

@interface SUDialogManager : NSObject <ISSingleton>
{
    NSMutableArray *_dialogs;
}

+ (id)newDialogWithError:(id)arg1;
+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
- (void)_performDefaultActionForDialog:(id)arg1 buttonIndex:(long long)arg2;
- (_Bool)_isDisplayingEquivalentDialog:(id)arg1;
- (void)_finishDialog:(id)arg1 withButtonIndex:(long long)arg2;
- (_Bool)presentDialogForError:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)presentDialogForError:(id)arg1;
- (_Bool)presentDialog:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)presentDialog:(id)arg1;
@property(readonly, nonatomic) long long numberOfPendingDialogs;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

