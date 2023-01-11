//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class NSHashTable, NSString;

@interface MapsSuggestionsObservers : NSObject <MapsSuggestionsObject>
{
    struct NSString *_name;
    struct unique_ptr<MSg::Queue, std::__1::default_delete<MSg::Queue>> _callbackQueue;
    NSHashTable *_innerObservers;
    CDUnknownBlockType _onFirstObserverBlock;
    CDUnknownBlockType _onLastObserverBlock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)synchronouslyEnumerateWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)count;
- (unsigned long long)_count;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)onRemovingObserverRunBlock:(CDUnknownBlockType)arg1;
- (void)onAddingObserverRunBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)init;
- (id)initWithName:(struct NSString *)arg1;
- (id)initWithCallbackQueue:(id)arg1 name:(struct NSString *)arg2;
- (id)initWithCallbackQueue:(id)arg1 name:(struct NSString *)arg2 strong:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
